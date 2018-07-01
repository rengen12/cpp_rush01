/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CpuModule.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amichak <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/01 13:16:00 by amichak           #+#    #+#             */
/*   Updated: 2018/07/01 13:16:00 by amichak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "CpuModule.hpp"

CpuModule::CpuModule(void) : Module() {
	char		buffer[255] = {0};
	size_t		buflen = sizeof(buffer) - 1;
	std::string	string;

	if (sysctlbyname("machdep.cpu.brand_string", &buffer, &buflen, NULL, 0) != 0)
		this->_data.push_back("Error");
	else
		this->_data.push_back(buffer);

	string = this->getDataTop("top -l 1 -n 0 -s 0 -c n| grep CPU | awk '{$1 = \"\"; $2 = \"\"; print $0}'");
	if (string.empty()) {
		this->_data.push_back("Error");
		return ;
	}
	string.erase(string.size() - 1, string.size());

	for (int i = 0; i < 3; i++) {
		this->_data.push_back(string.substr(0, string.find(',')).substr(1));
		string.erase(0, string.find(',') + 1);
	}
}

CpuModule::CpuModule(std::string name) : Module(name) {
	char		buffer[255] = {0};
	size_t		buflen = sizeof(buffer) - 1;
	std::string	string;

	if (sysctlbyname("machdep.cpu.brand_string", &buffer, &buflen, NULL, 0) != 0)
		this->_data.push_back("Error");
	else
		this->_data.push_back(buffer);

	string = this->getDataTop("top -l 1 -n 0 -s 0 -c n| grep CPU | awk '{$1 = \"\"; $2 = \"\"; print $0}'");
	if (string.empty()) {
		this->_data.push_back("Error");
		return ;
	}
	string.erase(string.size() - 1, string.size());

	for (int i = 0; i < 3; i++) {
		this->_data.push_back(string.substr(0, string.find(',')).substr(1));
		string.erase(0, string.find(',') + 1);
	}
}

CpuModule::~CpuModule(){}

void CpuModule::updateData() {
	char		buffer[255] = {0};
	size_t		buflen = sizeof(buffer) - 1;
	std::string	string;

	for (; this->_data.size();)
		this->_data.erase(this->_data.begin());

	if (sysctlbyname("machdep.cpu.brand_string", &buffer, &buflen, NULL, 0) != 0)
		this->_data.push_back("Error");
	else
		this->_data.push_back(buffer);

	string = this->getDataTop("top -l 1 -n 0 -s 0 -c n| grep CPU | awk '{$1 = \"\"; $2 = \"\"; print $0}'");
	if (string.empty()) {
		this->_data.push_back("Error");
		return ;
	}
	string.erase(string.size() - 1, string.size());

	for (int i = 0; i < 3; i++) {
		this->_data.push_back(string.substr(0, string.find(',')).substr(1));
		string.erase(0, string.find(',') + 1);
	}
}
