#pragma once

#include <SFML/Graphics.hpp>

#include "WindowConfigs.h"

const sf::Color WHITE_SQUARE_COLOR(230, 230, 230);
const sf::Color BLACK_SQUARE_COLOR(171, 108, 56);

static float squareSize = WINDOW_WIDTH / 8;

class Board {
public:
	static Board& instance();

	void draw(sf::RenderWindow& target);

private:
	sf::RectangleShape whiteSquare;
	sf::RectangleShape blackSquare;

	Board();
	~Board() {}
	Board(const Board&) {}
	Board& operator=(const Board&) {}
};
