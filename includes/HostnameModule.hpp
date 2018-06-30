/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HostnameModule.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amichak <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/30 20:19:00 by amichak           #+#    #+#             */
/*   Updated: 2018/06/30 20:19:00 by amichak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPPRUSH1_HOSTNAMEMODULE_HPP
#define CPPRUSH1_HOSTNAMEMODULE_HPP

#include "Module.hpp"

class HostnameModule : public Module
{
public:
	HostnameModule(void);
	HostnameModule(std::string & name);
	HostnameModule(HostnameModule const & obj);
	virtual ~HostnameModule();
	virtual void updateData();

};


#endif
