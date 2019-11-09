#include <SFML/Graphics.hpp>

int Setup()
{

}



int main()
{


    //Main game Window
    sf::RenderWindow window(sf::VideoMode(600, 600), "Game of Life");


    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();

        window.display();
    }

    return 0;
}
