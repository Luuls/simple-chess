#include "Board.h"

Board::Board(): whiteSquare({ squareSize, squareSize }), blackSquare({ squareSize, squareSize }) {
	whiteSquare.setFillColor(WHITE_SQUARE_COLOR);
	blackSquare.setFillColor(BLACK_SQUARE_COLOR);
}

Board& Board::instance() {
	static Board instance;
	return instance;
}

void Board::draw(sf::RenderWindow& target) {
	sf::RectangleShape squares[] = { whiteSquare, blackSquare };

	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			auto& square = squares[(i + j) % 2];
			square.setPosition({ i * squareSize, j * squareSize });
			target.draw(square);
		}
	}
}
