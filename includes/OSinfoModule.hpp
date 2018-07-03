/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   OSinfoModule.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amichak <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/01 13:15:00 by amichak           #+#    #+#             */
/*   Updated: 2018/07/01 13:15:00 by amichak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPPRUSH1_OSINFOMODULE_HPP
# define CPPRUSH1_OSINFOMODULE_HPP

# include "Module.hpp"
# include <sys/sysctl.h>

class OSinfoModule : public Module
{
public:
	OSinfoModule(void);
	OSinfoModule(std::string name);
	virtual ~OSinfoModule();
	void updateData();
	OSinfoModule(OSinfoModule const &src);
	OSinfoModule	&operator=(OSinfoModule const &rhs);
};


#endif
