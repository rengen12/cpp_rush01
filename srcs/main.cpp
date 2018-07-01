#include "sysmonitor.hpp"
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

bool parseInput(int ac, char *av[], std::vector<Module *> &modules, bool *n, bool *s) {
	std::string opt;

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
	return (true);
}

std::vector<Module *> initializeModules(std::vector<Module *> modules)
{
	modules.push_back(new CpuModule("CpuModule"));
	modules.push_back(new DateTimeModule("DateTimeModule"));
	modules.push_back(new DisksModule("DisksModule"));
	modules.push_back(new HostnameModule("HostnameModule"));
	modules.push_back(new MemRegionsModule("MemRegionsModule"));
	modules.push_back(new NetworkModule("NetworkModule"));
	modules.push_back(new OSinfoModule("OSinfoModule"));
	modules.push_back(new RamModule("RamModule"));
	modules.push_back(new VmModule("VmModule"));
	return (modules);
}

int main(int ac, char *av[]) {
	std::vector<Module *>		modules;
	Display						display;
	std::vector<std::string>	data;
	bool						n = false;
	bool						s = false;

	if (!parseInput(ac, av, modules, &n, &s)) {
		std::cout << "./ft_gkrellm -[ws] " <<
				  "hostname|osinfo|time|cpu|ram|network|disk|processes|memregions|vm"
				  << std::endl;
	}
	if (n)
		display.updateDisplay(modules, 'n');
	else if (s)
		display.updateDisplay(modules, 's');
	return (0);
}


