/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Display.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amichak <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/01 19:02:00 by amichak           #+#    #+#             */
/*   Updated: 2018/07/01 19:02:00 by amichak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPPRUSH1_DISPLAY_HPP
# define CPPRUSH1_DISPLAY_HPP

# include "IMonitorDisplay.hpp"
# include "Module.hpp"
# include <SFML/Graphics.hpp>
# include <ncurses.h>
# include <sys/ioctl.h>

class Display : public IMonitorDisplay
{
private:
	std::vector<sf::RenderWindow *> _windows;

public:
	Display();
	virtual ~Display();
	void	updateDisplay(std::vector<Module *>modules, char choice);
	void	n(std::vector<Module *> modules);
	void	s(std::vector<Module *> modules);

};


#endif
