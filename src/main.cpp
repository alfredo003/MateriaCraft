#include <iostream>

#include "../inc/IMateriaSource.hpp"
#include "../inc/MateriaSource.hpp"

#include "../inc/Character.hpp"
#include "../inc/ICharacter.hpp"
#include "../inc/Cure.hpp"
#include "../inc/Ice.hpp"
#include "../inc/Fire.hpp"

int main(void)
{
   
    ICharacter *player = new Character("Alfredo");
    
    Fire *materia = new Fire();
    materia->use(*player);
   // std::cout << "player = " << player->getName() << std::endl;
    return (0);
}