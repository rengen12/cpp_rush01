/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MemRegionsModule.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amichak <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/01 17:46:00 by amichak           #+#    #+#             */
/*   Updated: 2018/07/01 17:46:00 by amichak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPPRUSH1_MEMREGIONSMODULE_HPP
# define CPPRUSH1_MEMREGIONSMODULE_HPP

# include "Module.hpp"

class MemRegionsModule : public Module
{
public:
	MemRegionsModule(void);
	MemRegionsModule(std::string name);
	virtual ~MemRegionsModule(void);
	void updateData();
	MemRegionsModule(MemRegionsModule const &src);
	MemRegionsModule	&operator=(MemRegionsModule const &rhs);
};


#endif
