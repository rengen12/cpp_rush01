/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMonitorModule.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amichak <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/30 18:26:00 by amichak           #+#    #+#             */
/*   Updated: 2018/06/30 18:26:00 by amichak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPPRUSH1_IMONITORMODULE_HPP
# define CPPRUSH1_IMONITORMODULE_HPP

class IMonitorModule
{
public:
	virtual void	updateData(void) = 0;
};


#endif
