/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RamModule.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amichak <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/01 13:16:00 by amichak           #+#    #+#             */
/*   Updated: 2018/07/01 13:16:00 by amichak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPPRUSH1_RAMMODULE_HPP
#define CPPRUSH1_RAMMODULE_HPP

# include "Module.hpp"
# include <sys/sysctl.h>
# include <sstream>

class RamModule : public Module
{
public:
	RamModule(void);
	RamModule(std::string name);
	virtual ~RamModule(void);
	void updateData();
};


#endif
