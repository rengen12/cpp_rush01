/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   VmModule.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amichak <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/01 17:55:00 by amichak           #+#    #+#             */
/*   Updated: 2018/07/01 17:55:00 by amichak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "VmModule.hpp"

VmModule::VmModule(void) : Module() {
	std::string	string;

	string = this->getDataTop("top -l 1 -n 0 -s 0 -c n| grep VM | awk '{$1 = \"\"; print $0}'");
	if (string.empty()) {
		this->_data.push_back("Error");
		return ;
	}
	string = string.substr(1);
	string.erase(string.size() - 2, string.size());

	for (int i = 0; i < 4; i++) {
		this->_data.push_back(string.substr(0, string.find(',')).substr(1));
		string.erase(0, string.find(',') + 1);
	}
}

VmModule::VmModule(std::string name) : Module(name) {
	std::string	string;

	string = this->getDataTop("top -l 1 -n 0 -s 0 -c n| grep VM | awk '{$1 = \"\"; print $0}'");
	if (string.empty()) {
		this->_data.push_back("Error");
		return ;
	}
	string = string.substr(1);
	string.erase(string.size() - 2, string.size());

	for (int i = 0; i < 4; i++) {
		this->_data.push_back(string.substr(0, string.find(',')).substr(1));
		string.erase(0, string.find(',') + 1);
	}
}

VmModule::~VmModule(){}

void VmModule::updateData() {
	std::string	string;

	for (; this->_data.size();)
		this->_data.erase(this->_data.begin());

	string = this->getDataTop("top -l 1 -n 0 -s 0 -c n| grep VM | awk '{$1 = \"\"; print $0}'");
	if (string.empty()) {
		this->_data.push_back("Error");
		return ;
	}
	string = string.substr(1);
	string.erase(string.size() - 2, string.size());

	for (int i = 0; i < 4; i++) {
		this->_data.push_back(string.substr(0, string.find(',')).substr(1));
		string.erase(0, string.find(',') + 1);
	}
}