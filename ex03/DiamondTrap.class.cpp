#include "DiamondTrap.class.hpp"



DiamondTrap::DiamondTrap( void ) //constructor by default
{
	std::cout << YELLOW << "DiamTrap " << this->_name << " default constructor called." << RESET << std::endl;
}
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
//DiamondTrap::DiamondTrap(${ARGS_LIST});

// Getters

// Setters

// Comparison operators

// Canonicalization function



// Helper functions for canonicalization

std::ostream& operator<<(std::ostream& os, const DiamondTrap& obj)
{
	os << YELLOW << "DiamTrap " <<obj.canonizeme()  << RESET << std::endl;
	return os;
};

