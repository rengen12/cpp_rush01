/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DisksModule.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amichak <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/01 17:56:00 by amichak           #+#    #+#             */
/*   Updated: 2018/07/01 17:56:00 by amichak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPPRUSH1_DISKSMODULE_HPP
# define CPPRUSH1_DISKSMODULE_HPP

# include "Module.hpp"
# include <sstream>

class DisksModule : public Module
{
public:
	DisksModule(void);
	DisksModule(std::string name);
	virtual ~DisksModule(void);
	void updateData();
	DisksModule(DisksModule const &src);
	DisksModule	&operator=(DisksModule const &rhs);
};


#endif
