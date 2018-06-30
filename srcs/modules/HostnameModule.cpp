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

#include <unistd.h>
#include "HostnameModule.hpp"

HostnameModule::HostnameModule() {
	char		buffer[255];
	std::string	hostname;
	buffer[0] = '\0';

	if (gethostname(buffer, sizeof(buffer) - 1) != 0) {
		this->_data.push_back("Error");
	} else {
		hostname = buffer;
		this->_data.push_back(hostname);
	}
}

HostnameModule::HostnameModule(std::string & name) : Module(name) {}

HostnameModule::~HostnameModule() {}

HostnameModule::HostnameModule(HostnameModule const & obj) : Module() {
	*this = obj;
}

void HostnameModule::updateData(void) {
	char		buffer[255];
	std::string	hostname;
	buffer[0] = '\0';

	if (gethostname(buffer, sizeof(buffer) - 1) != 0) {
		this->_data.push_back("Error");
	} else {
		hostname = buffer;
		this->_data.push_back(hostname);
	}
}
