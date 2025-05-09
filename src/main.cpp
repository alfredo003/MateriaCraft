#include <iostream>

#include "../inc/IMateriaSource.hpp"
#include "../inc/MateriaSource.hpp"

#include "../inc/Character.hpp"
#include "../inc/ICharacter.hpp"
#include "../inc/Cure.hpp"
#include "../inc/Ice.hpp"

int main(void)
{
    I
    ICharacter *player = new Character("Alfredo");
    
    Cure *materia = new Cure();
    materia->use(*player);
   // std::cout << "player = " << player->getName() << std::endl;
    return (0);
}