/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NetworkModule.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amichak <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/01 13:16:00 by amichak           #+#    #+#             */
/*   Updated: 2018/07/01 13:16:00 by amichak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPPRUSH1_NETWORKMODULE_HPP
# define CPPRUSH1_NETWORKMODULE_HPP

# include "Module.hpp"
# include <sys/sysctl.h>

class NetworkModule : public Module
{
public:
	NetworkModule(void);
	NetworkModule(std::string name);
	virtual ~NetworkModule(void);
	void updateData();
};


#endif
