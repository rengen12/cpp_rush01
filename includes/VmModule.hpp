/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   VmModule.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amichak <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/01 17:55:00 by amichak           #+#    #+#             */
/*   Updated: 2018/07/01 17:55:00 by amichak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPPRUSH1_VMMODULE_HPP
# define CPPRUSH1_VMMODULE_HPP

# include "Module.hpp"
# include <sstream>

class VmModule : public Module
{
public:
	VmModule(void);
	VmModule(std::string name);
	virtual ~VmModule(void);
	void updateData();
};

#endif
