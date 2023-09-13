#include "Zombie.hpp"

Zombie* Zombie::newZombie(std::string name) {
    Zombie* zm;

    zm = new Zombie;
    zm->setname(name);
    return (zm);
}
