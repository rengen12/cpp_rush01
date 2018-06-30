/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Module.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amichak <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/30 20:10:00 by amichak           #+#    #+#             */
/*   Updated: 2018/06/30 20:10:00 by amichak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Module.hpp"

Module::Module() {
	_name = "default";
}

Module::Module(std::string & name) : _name(name) {}

Module::~Module() {}

const std::string &Module::getName() const {
	return _name;
}

void Module::setName(const std::string &_name) {
	Module::_name = _name;
}

void Module::setData(const std::vector<std::string> &_data) {
	Module::_data = _data;
}

const std::vector<std::string> &Module::getData() const {
	return _data;
}
