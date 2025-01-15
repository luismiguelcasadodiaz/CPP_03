#include "ScavTrap.class.hpp"



ScavTrap::ScavTrap( void ) //constructor by default
{
	std::cout << "Default constructor called for ScavTrap " << std::endl;
	return ;
}

ScavTrap::ScavTrap(const ScavTrap& other) //constructor by copy
{
	std::cout << "Copy constructor called for ScavTrap " << std::endl;
	*this = other;
	return;
}

ScavTrap &  ScavTrap::operator=(const ScavTrap & other)
{
	std::cout << "Copy assignment operator called for ScavTrap " << std::endl;
	if (this != &other)
	{
		*this = other;
	}
	return *this; 
}

ScavTrap::~ScavTrap( void ) // destructor
{
	std::cout << "Destructor called for ScavTrap " << std::endl;
	return ;
}

// Constructor(s)
//ScavTrap::ScavTrap(${ARGS_LIST});

// Getters

// Setters

// Comparison operators

// Canonicalization function



// Helper functions for canonicalization

std::ostream& operator<<(std::ostream& os, const ScavTrap& obj)
{
	os << "my attribute list"  << std::endl;
	return os;
};

