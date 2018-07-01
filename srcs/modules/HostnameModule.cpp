/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HostnameModule.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amichak <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/30 20:19:00 by amichak           #+#    #+#             */
/*   Updated: 2018/06/30 20:19:00 by amichak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HostnameModule.hpp"

HostnameModule::HostnameModule() : Module() {
	char		buffer[255] = {0};
	std::string	hostname;

	buffer[0] = '\0';
	if (gethostname(buffer, sizeof(buffer) - 1) != 0)
		this->_data.push_back("Error");
	else
		hostname = buffer;
		this->_data.push_back(buffer);
}

HostnameModule::HostnameModule(std::string name) : Module(name) {
	char		buffer[255] = {0};

	if (gethostname(buffer, sizeof(buffer) - 1) != 0)
		this->_data.push_back("Error");
	else
		this->_data.push_back(buffer);
}

HostnameModule::~HostnameModule() {}

HostnameModule::HostnameModule(HostnameModule const & obj) : Module() {
	*this = obj;
}

void HostnameModule::updateData(void) {
	char		buffer[255] = {0};

	for (; this->_data.size();)
		this->_data.erase(this->_data.begin());
	if (gethostname(buffer, sizeof(buffer) - 1) != 0)
		this->_data.push_back("Error");
	else
		this->_data.push_back(buffer);
}
