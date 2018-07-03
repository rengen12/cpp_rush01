/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DateTimeModule.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amichak <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/01 13:16:00 by amichak           #+#    #+#             */
/*   Updated: 2018/07/01 13:16:00 by amichak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPPRUSH1_DATETIMEMODULE_HPP
# define CPPRUSH1_DATETIMEMODULE_HPP

# include "Module.hpp"

class DateTimeModule : public Module
{
public:
	DateTimeModule(void);
	DateTimeModule(std::string name);
	virtual ~DateTimeModule(void);
	void updateData();
	DateTimeModule(DateTimeModule const &src);
	DateTimeModule	&operator=(DateTimeModule const &rhs);
};


#endif
