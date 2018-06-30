#include "sysmonitor.hpp"

bool parseInput(int ac, char *av[]) {
    if (ac < 3)
        return (false);
    return true;
}

int main(int ac, char *av[]) {
    std::string modules;
    if (!parseInput(ac, av)) {
        std::cout << "./ft_gkrellm -[ns] " <<
                  "hostname|osinfo|time|cpu|ram|network|disk|processes|memregions|vm" << std::endl;
    }
    return (0);
}