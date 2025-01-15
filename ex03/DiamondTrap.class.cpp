#include "DiamondTrap.class.hpp"



DiamondTrap::DiamondTrap( void ) //constructor by default
{
	std::cout << "Default constructor called for DiamondTrap " << std::endl;
	return ;
}

DiamondTrap::DiamondTrap(const DiamondTrap& other) //constructor by copy
{
	std::cout << "Copy constructor called for DiamondTrap " << std::endl;
	*this = other;
	return;
}

DiamondTrap &  DiamondTrap::operator=(const DiamondTrap & other)
{
	std::cout << "Copy assignment operator called for DiamondTrap " << std::endl;
	if (this != &other)
	{
		*this = other;
	}
	return *this; 
}

DiamondTrap::~DiamondTrap( void ) // destructor
{
	std::cout << "Destructor called for DiamondTrap " << std::endl;
	return ;
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
	os << "my attribute list"  << std::endl;
	return os;
};

