/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMonitorDisplay.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amichak <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/30 18:54:00 by amichak           #+#    #+#             */
/*   Updated: 2018/06/30 18:54:00 by amichak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMONITORDISPLAY_H
# define IMONITORDISPLAY_H

# include <iostream>
# include <vector>
# include "Module.hpp"

class IMonitorDisplay
{
public:
	virtual void	updateDisplay(std::vector<Module *>) = 0;
};

#endif