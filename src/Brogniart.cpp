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
        while (getline(std::cin, reponse))
        {
                if (reponse == "oui")
                {
                        ha();
                        break;
                }
                else
                {
                        std::cout << "Est-ce que ca veut dire que les femmes ne savent pas faires de cabanes ?" << '\n';

                }
        }
}

void		Brogniart::ha()
{
        std::cout << "HA !!!" << '\n';
        system("cvlc --play-and-exit audio/AH.ogg 2> /dev/null");
}
