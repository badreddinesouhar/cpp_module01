#include "Zombie.hpp"

Zombie::Zombie() {

}

Zombie::Zombie(std::string theName) {
    _name = theName;
}

void Zombie::setname(std::string name) {
    _name = name;
}

void Zombie::announce (void) {
    std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie() {
    std::cout << "this Zombie " << _name << " is destroyed." << std::endl;
}
