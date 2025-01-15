#include "FragTrap.class.hpp"



FragTrap::FragTrap( void ) //constructor by default
{
	std::cout << "Default constructor called for FragTrap " << std::endl;
	return ;
}

FragTrap::FragTrap(const FragTrap& other) //constructor by copy
{
	std::cout << "Copy constructor called for FragTrap " << std::endl;
	*this = other;
	return;
}

FragTrap &  FragTrap::operator=(const FragTrap & other)
{
	std::cout << "Copy assignment operator called for FragTrap " << std::endl;
	if (this != &other)
	{
		*this = other;
	}
	return *this; 
}

FragTrap::~FragTrap( void ) // destructor
{
	std::cout << "Destructor called for FragTrap " << std::endl;
	return ;
}

// Constructor(s)
//FragTrap::FragTrap(${ARGS_LIST});

// Getters

// Setters

// Comparison operators

// Canonicalization function



// Helper functions for canonicalization

std::ostream& operator<<(std::ostream& os, const FragTrap& obj)
{
	os << "my attribute list"  << std::endl;
	return os;
};

