/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CatModule.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amichak <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/01 13:15:00 by amichak           #+#    #+#             */
/*   Updated: 2018/07/01 13:15:00 by amichak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "CatModule.hpp"

CatModule::CatModule() : Module() {
	this->_data.push_back("  /\\___/\\");
	this->_data.push_back(" |       |");
	this->_data.push_back("_  *   *  _");
	this->_data.push_back("-   /_\\   -");
	this->_data.push_back("    ---");
}

CatModule::~CatModule() {}

CatModule::CatModule(std::string name) : Module(name) {
	this->_data.push_back("  /\\___/\\");
	this->_data.push_back(" |       |");
	this->_data.push_back("_  *   *  _");
	this->_data.push_back("-   /_\\   -");
	this->_data.push_back("    ---");
}

void CatModule::updateData() {}

CatModule::CatModule(CatModule const &src) {
	*this = src;
}

CatModule	&CatModule::operator=(CatModule const &rhs) {
	(void)rhs;
	return (*this);
}