#include "DiamondTrap.class.hpp"



DiamondTrap::DiamondTrap( void ): //constructor by default
	ClapTrap("Anonymous_Clap_name"),
 	FragTrap("Anonymous_Frag_name"), 
	ScavTrap("Anonymous_Scav_name"),
	_name("Anonymous")
{
	std::cout << YELLOW << "DiamTrap " << this->_name << " default constructor called." << RESET << std::endl;
}


DiamondTrap::DiamondTrap(const DiamondTrap& other) //constructor by copy
{
	std::cout <<  YELLOW << "DiamTrap " << this->_name << " copy constructor from "<< other._name <<" called." << RESET << std::endl;
	this->_name = other._name;
	return;
}

DiamondTrap &  DiamondTrap::operator=(const DiamondTrap & other)
{
std::cout <<  YELLOW << "DiamTrap " << this->_name << " copy assignment operator from "<< other._name <<" called." << RESET << std::endl;
	if (this != &other)	
	if (this != &other)
	{
		*this = other;
	}
	return *this; 
}

DiamondTrap::~DiamondTrap( void ) // destructor
{
	std::cout <<  YELLOW << "DiamTrap " << this->_name << " Destructor called." << RESET << std::endl;
}

// Constructor(s)
DiamondTrap::DiamondTrap(const std::string thename):
 	FragTrap(thename + "_clap_name"), 
	ScavTrap(thename + "_clap_name"),
	_name(thename)
{
	std::cout <<  YELLOW << "DiamTrap " << this->_name << " parametric constructor called." << RESET << std::endl;
}

// Getters

// Setters

// Comparison operators

// Canonicalization function
void DiamondTrap::whoAmI() const
{
	std::cout << YELLOW << "DiamTrap's name is " << this->_name;
	std::cout << " and ClapTrap's name is " << ClapTrap::getName() << "." << std::endl;
}

void DiamondTrap::attack (const std::string & target )
{
	std::cout << YELLOW << "DiamTrap attack using ScavTrap's attack " << RESET;
	ScavTrap::attack(target);
}


// Helper functions for canonicalization
std::string DiamondTrap::canonizeme( void ) const {
	std::stringstream resultado;
	resultado << this->_name << " [hit ==>(" << FragTrap::getHit();
	resultado << ") energy ==>(" << ScavTrap::getEnergy();
	resultado << ") attack ==>(" << FragTrap::getAttack() << ")]" << std::endl;
	return (resultado.str());
}

std::ostream& operator<<(std::ostream& os, const DiamondTrap& obj)
{
	os << YELLOW << "DiamTrap " <<obj.canonizeme()  << RESET << std::endl;
	return os;
};

