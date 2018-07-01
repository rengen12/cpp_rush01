/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amichak <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/01 17:55:00 by amichak           #+#    #+#             */
/*   Updated: 2018/07/01 17:55:00 by amichak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Module.hpp"
#include "Display.hpp"
#include "CpuModule.hpp"
#include "DateTimeModule.hpp"
#include "DisksModule.hpp"
#include "HostnameModule.hpp"
#include "MemRegionsModule.hpp"
#include "NetworkModule.hpp"
#include "OSinfoModule.hpp"
#include "RamModule.hpp"
#include "VmModule.hpp"

bool parseInput(int ac, char *av[], std::vector<Module *> &modules, bool *n, bool *s)
{
	std::string opt;
	std::string temp;

	if (ac < 3)
		return (false);
	opt = av[1];
	if (opt.empty())
		return (false);
	if (opt.find('-') == std::string::npos)
		return (false);
	if (opt.find('n') != std::string::npos)
		*n = true;
	if (opt.find('s') != std::string::npos)
		*s = true;
	for (int i = 2; i < ac; i++) {
		temp = av[i];
		std::transform(temp.begin(), temp.end(), temp.begin(), ::tolower);
		if (temp == "hostname")
			modules.push_back(new HostnameModule("Hostname"));
		if (temp == "osinfo")
			modules.push_back(new OSinfoModule("OSinfo"));
		if (temp == "time")
			modules.push_back(new DateTimeModule("DateTime"));
		if (temp == "cpu")
			modules.push_back(new CpuModule("Cpu"));
		if (temp == "ram")
			modules.push_back(new RamModule("Ram"));
		if (temp == "network")
			modules.push_back(new NetworkModule("Network"));
		if (temp == "disk")
			modules.push_back(new DisksModule("Disks"));
		if (temp == "memregions")
			modules.push_back(new MemRegionsModule("MemRegions"));
		if (temp == "vm")
			modules.push_back(new VmModule("Vm"));
	}
	return (true);
}

int main(int ac, char *av[]) {
	std::vector<Module *> modules;
	Display display;
	std::vector<std::string> data;
	bool n = false;
	bool s = false;

	if (!parseInput(ac, av, modules, &n, &s))
		std::cout << "./ft_gkrellm -[ns] " <<
				  "hostname|osinfo|time|cpu|ram|network|disk|memregions|vm"
				  << std::endl;
	if (n)
		display.updateDisplay(modules, 'n');
	else if (s)
		display.updateDisplay(modules, 's');
	return (0);
}
