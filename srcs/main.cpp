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

bool parseInput(int ac, char *av[])
{
	std::string opt;

	if (ac < 3)
	{
		return (false);
	}
	opt = av[1];
	if (opt.empty())
	{
		return (false);
	}
	if (opt.find('-') == std::string::npos)
	{
		return (false);
	}
//		if (opt.find('n'))

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

/*
int makeWindow(std::vector<Module *> &modules)
{
	// создаём окно
	sf::RenderWindow window(sf::VideoMode(300, 300), "SFML - modules");
	// получение текущего размера монитора
	sf::Vector2u size = window.getSize();
	// сетим позижн окнам
	window.setPosition(sf::Vector2i(size.x, size.y - 300));

	sf::RenderWindow window2(sf::VideoMode(300, 300), "SFML - module");
	window2.setPosition(sf::Vector2i(size.x, size.y + 80));

	sf::RenderWindow window3(sf::VideoMode(300, 300), "SFML - module");
	window3.setPosition(sf::Vector2i(size.x, size.y + 400));

	sf::RenderWindow window4(sf::VideoMode(300, 300), "SFML - module");
	window4.setPosition(sf::Vector2i(size.x, size.y + 720));

	sf::RenderWindow window5(sf::VideoMode(300, 300), "SFML - module");
	window5.setPosition(sf::Vector2i(size.x, size.y + 1040));

	sf::RenderWindow window6(sf::VideoMode(300, 300), "SFML - module");
	window6.setPosition(sf::Vector2i(size.x, size.y + 1360));
	// контроль кадровой чистоты
	window.setVerticalSyncEnabled(true);
	// бэкграунд
	sf::Image image;
	image.loadFromFile("siniy.jpg");
	sf::Texture image2;
	image2.loadFromImage(image);
	sf::Sprite image3;
	image3.setTexture(image2);
	// кушаем нужный шрифт
	sf::Font font;
	font.loadFromFile("comicz.ttf");
	// создание окн
	sf::Text text("", font, 40);
	text.setColor(sf::Color::Red);
	text.setStyle(sf::Text::Bold);
	sf::Text text2("", font, 40);
	text2.setColor(sf::Color::Green);
	text2.setStyle(sf::Text::Bold);
	sf::Text text3("", font, 40);
	text3.setColor(sf::Color::White);
	text3.setStyle(sf::Text::Bold);
	sf::Text text4("", font, 40);
	text4.setColor(sf::Color::Yellow);
	text4.setStyle(sf::Text::Bold);
	sf::Text text5("", font, 40);
	text5.setColor(sf::Color::White);
	text5.setStyle(sf::Text::Bold);
	sf::Text text6("", font, 40);
	text6.setColor(sf::Color::White);
	text6.setStyle(sf::Text::Bold);
	// основной цикл
	while (window.isOpen())
	{
		// проверяем события (нажатие кнопки, закрытие окна и т.д.)
		sf::Event event;
		while (window.pollEvent(event))
		{
			// если событие "закрытие окна":
			if (event.type == sf::Event::Closed)
				// закрываем окно
				window.close();
		}
		// очищаем экран, и заливаем его синим цветом
		// window.clear(sf::Color(255,0,0));
		window.draw(image3);
		window2.draw(image3);
		window3.draw(image3);
		window4.draw(image3);
		window5.draw(image3);
		window6.draw(image3);

		// отображаем на экран текст
		text.setString("Raz infa");
		text2.setString("Dva infa");
		text3.setString("Three infa");
		text4.setString("Four infa");
		text5.setString("Five infa");
		text6.setString("Six infa");
		// возможность сменить текст позишн
		//text.setPosition(100, 100);
		// отображаем на экран
		window.draw(text);
		window2.draw(text2);
		window3.draw(text3);
		window4.draw(text4);
		window5.draw(text5);
		window6.draw(text6);
		window.display();
		window2.display();
		window3.display();
		window4.display();
		window5.display();
		window6.display();
	}
	return (0);
}
*/



int main(int ac, char *av[]) {
	std::vector<Module *> modules;
	Display display;
	std::vector<std::string> data;

	if (!parseInput(ac, av))
	{
		std::cout << "./ft_gkrellm -[ws] " <<
				  "hostname|osinfo|time|cpu|ram|network|disk|processes|memregions|vm"
				  << std::endl;
	}
	modules = initializeModules(modules);

	display.updateDisplay(modules);

	system("leaks a.out");

//	while (1) {
//
//		for (unsigned long module = 0; module < modules.size(); module++) {
//			modules[module]->updateData();
//		}
//
//		for (unsigned long module = 0; module < modules.size(); module++) {
//			std::cout << modules[module]->getName() << std::endl;
//			data = modules[module]->getData();
//			for (unsigned long i = 0; i < data.size(); i++) {
//				std::cout << data[i] << std::endl;
//			}
//			std::cout << std::endl;
//		}
//	}
	return (0);
}


