#include "Zombie.hpp"

Zombie::Zombie(void) {
  std::cout << "Object no_name is Created\n";
}

Zombie::~Zombie(void) {
  std::cout << m_name << " Destrooooooooyed\n";
}

void Zombie::announce(void) {
  std::cout << m_name << ": BraiiiiiiinnnzzzZ...\n";
}

void Zombie::set_Name(std::string name) {
  m_name = name;
}
