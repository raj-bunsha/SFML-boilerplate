#include "Game.h"
//init variables
void Game::initVariables() 
{
    this->window = nullptr;
}
void Game::initWindow() 
{
    this->videoMode.height = 600;
    this->videoMode.width = 800;

    this->window = new sf::RenderWindow(this->videoMode,"Game 1",sf::Style::Titlebar | sf::Style::Close);
}

//constructors
Game::Game() 
{
    this->initVariables();
    this->initWindow();
}
Game::~Game() 
{
    delete this->window;
}

//accessors
const bool Game::running() const 
{
    return this->window->isOpen();
}

//handle events
void Game::pollEvents()
{
    while(this->window->pollEvent(this->ev)) 
    {
        if(this->ev.type == sf::Event::Closed) 
        {
            this->window->close();
        }
        if(this->ev.type == sf::Event::KeyPressed) 
        {
            if(this->ev.key.code == sf::Keyboard::Escape) 
            {
                this->window->close();
            }
        }
    }
}

//main parts of the game
void Game::update() 
{
    this->pollEvents();
}
void Game::render() 
{
    /*
        #@return void
        - Clear old frame
        - Render objects
        - Display frame in window
        - Reset clock
    */
    this->window->clear(sf::Color(255,255,255,255));
    this->window->display();
}
