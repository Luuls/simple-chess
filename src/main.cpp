#include <iostream>
#include <string>

#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>

#include "WindowConfigs.h"
#include "Board.h"

int main() {
	sf::RenderWindow window(sf::VideoMode(WINDOW_WIDTH, WINDOW_HEIGHT), "Chess");

	std::cout << "hello world";

	bool draw = true;
	while (window.isOpen()) {
		sf::Event event;
		while (window.pollEvent(event)) {
			if (event.type == sf::Event::Closed) {
				window.close();
			}

			else if (event.type == sf::Event::KeyPressed) {
				if (event.key.code == sf::Keyboard::Escape) {
					window.close();
				}
			}
		}

		if (draw) {
			window.clear();
			Board::instance().draw(window);
			window.display();
			draw = false;
		}
	}

	return 0;
}
