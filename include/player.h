#pragma once
#include <SFML/Graphics.hpp>

class player {
    private:
    sf::RectangleShape shape;
    float speed;
    public:
    player()
    void handleInput();
    void update();
    void render(sf::RenderWindow& window);
};