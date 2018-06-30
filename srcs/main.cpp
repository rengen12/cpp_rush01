#include "sysmonitor.hpp"
#include "Module.hpp"
#include "HostnameModule.hpp"


bool parseInput(int ac, char *av[]) {
	std::string opt;

    if (ac < 3)
        return (false);
	opt = av[1];
	if (opt.empty())
		return (false);
    if (opt.find('-') == std::string::npos)
		return (false);
//		if (opt.find('n'))

	return (true);
}

int main(int ac, char *av[]) {
	std::vector<Module *> modules;

	std::string st = "Hostname";
	modules.push_back(new HostnameModule(st));

	modules[0]->updateData();
	std::cout << modules[0]->getData()[0] << std::endl;

    if (!parseInput(ac, av)) {
        std::cout << "./ft_gkrellm -[ws] " <<
                  "hostname|osinfo|time|cpu|ram|network|disk|processes|memregions|vm" << std::endl;
    }
    return (0);
}