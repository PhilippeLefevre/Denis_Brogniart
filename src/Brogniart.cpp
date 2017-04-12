#include	<SFML/Audio.hpp>
#include	<SFML/System.hpp>
#include	<iostream>
#include	"Brogniart.hpp"

Brogniart::Brogniart()
{
        std::cout << "Bienvenue au conseil." << '\n';
}

Brogniart::~Brogniart()
{

}


void		Brogniart::cabane()
{
        std::string reponse = "non";
        std::cout << "Est-ce que ca veut dire que les femmes ne savent pas faires de cabanes ?" << '\n';
        std::cin >> reponse;
        if (reponse == "oui")
        {
                ha();
        }
        else
        {
                cabane();
        }
}

void		Brogniart::ha()
{
        sf::SoundBuffer buffer;
        if (!buffer.loadFromFile("audio/AH.ogg"))
        {
                return;
        }
        sf::Sound sound;
        sound.setBuffer(buffer);
        sound.play();
        std::cout << "HA !!!" << '\n';
}
