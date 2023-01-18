#include <iostream>
// #include<unistd.h>
#include "Game.h"
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>

int main() {
    Game game;
    // sleep(5);
    while(game.running()) 
    {
        game.update();
        game.render();
        // while(window.pollEvent(ev)) {
        //     if(ev.type == sf::Event::Closed) {
        //         window.close();
        //     }
        //     if(ev.type == sf::Event::KeyPressed) {
        //         if(ev.key.code == sf::Keyboard::Escape) {
        //             window.close();
        //         }
        //     }
        // }
        // window.clear(sf::Color::Blue);
        // window.display();
    }
}