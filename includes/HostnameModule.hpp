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
# define CPPRUSH1_HOSTNAMEMODULE_HPP

# include "Module.hpp"
# include <unistd.h>

class HostnameModule : public Module
{
public:
	HostnameModule(void);
	HostnameModule(std::string name);
	virtual ~HostnameModule();
	void updateData();
	HostnameModule(HostnameModule const &src);
	HostnameModule	&operator=(HostnameModule const &rhs);

};


#endif
