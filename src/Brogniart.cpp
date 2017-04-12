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
        std::cout << "Est-ce que ca veut dire que les femmes ne savent pas faires de cabandes ?" << '\n';
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
        sf::Music music;
        if (!music.openFromFile("audio/AH.ogg"))
                return; // erreur
        music.play();
        std::cout << "HA !!!" << '\n';
}
