/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CatModule.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amichak <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/01 13:15:00 by amichak           #+#    #+#             */
/*   Updated: 2018/07/01 13:15:00 by amichak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPPRUSH1_CATMODULE_HPP
# define CPPRUSH1_CATMODULE_HPP

# include "Module.hpp"

class CatModule : public Module
{
public:
	CatModule();
	CatModule(std::string name);
	virtual ~CatModule();
	void updateData();
	CatModule(CatModule const &src);
	CatModule	&operator=(CatModule const &rhs);
};


#endif
