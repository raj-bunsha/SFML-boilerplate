#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>

class Game
{
    private:
        //Variables
        sf::RenderWindow* window;
        sf::Event ev;
        sf::VideoMode videoMode;

        // To init window and variables
        void initVariables();
        void initWindow();
    public:
        // constructors
        Game();
        virtual ~Game();
        
        // accessors
        const bool running() const;
        void pollEvents();

        //update and render
        void update();
        void render();
};