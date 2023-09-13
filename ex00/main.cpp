#include "Zombie.hpp"

int main() {
    Zombie zm("ooh");
    zm.announce();
    Zombie tata;
    tata.setname("zaml");
    tata.announce();
    Zombie* tt = NULL;
    tt = tt->newZombie("ff");
    tt->announce();
    Zombie gg;
    gg.randomChump("negga");
}