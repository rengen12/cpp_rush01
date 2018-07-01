/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   OSinfoModule.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amichak <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/01 13:15:00 by amichak           #+#    #+#             */
/*   Updated: 2018/07/01 13:15:00 by amichak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "OSinfoModule.hpp"

OSinfoModule::OSinfoModule(void) : Module() {
	char		buffer[255] = {0};
	size_t		buflen = sizeof(buffer) - 1;

	if (sysctlbyname("kern.ostype", &buffer, &buflen, NULL, 0) != 0)
		this->_data.push_back("Error");
	else
		this->_data.push_back(buffer);
	std::fill(buffer, buffer + buflen, '\0');
	buflen = sizeof(buffer) - 1;
	if (sysctlbyname("kern.osversion", &buffer, &buflen, NULL, 0) != 0)
		this->_data.push_back("Error");
	else
		this->_data.push_back(buffer);
}

OSinfoModule::OSinfoModule(std::string name) : Module(name) {
	char		buffer[255] = {0};
	size_t		buflen = sizeof(buffer) - 1;

	if (sysctlbyname("kern.ostype", &buffer, &buflen, NULL, 0) != 0)
		this->_data.push_back("Error");
	else
		this->_data.push_back(buffer);
	std::fill(buffer, buffer + buflen, '\0');
	buflen = sizeof(buffer) - 1;
	if (sysctlbyname("kern.osversion", &buffer, &buflen, NULL, 0) != 0)
		this->_data.push_back("Error");
	else
		this->_data.push_back(buffer);
}

OSinfoModule::~OSinfoModule(){}

void OSinfoModule::updateData() {
	char		buffer[255] = {0};
	size_t		buflen = sizeof(buffer) - 1;

	for (; this->_data.size();)
		this->_data.erase(this->_data.begin());
	if (sysctlbyname("kern.ostype", &buffer, &buflen, NULL, 0) != 0)
		this->_data.push_back("Error");
	else
		this->_data.push_back(buffer);
	std::fill(buffer, buffer + buflen, '\0');
	buflen = sizeof(buffer) - 1;
	if (sysctlbyname("kern.osversion", &buffer, &buflen, NULL, 0) != 0)
		this->_data.push_back("Error");
	else
		this->_data.push_back(buffer);
}
