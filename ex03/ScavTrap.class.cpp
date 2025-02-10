#include "ScavTrap.class.hpp"

	std::string itoa (int N );

	ScavTrap::ScavTrap( void ):ClapTrap() //constructor by default
	{
		std::cout << BLUE << "ScavTrap " << getName() << " default constructor called." << RESET << std::endl;
		setHit(100);
		setEnergy(50);
		setAttack(20);
		return ;
	}

	ScavTrap::ScavTrap(const ScavTrap& other):ClapTrap(other) //constructor by copy
	{
		std::cout << BLUE << "ScavTrap " << getName() << " copy constructor from "<< other.getName() <<" called." << RESET << std::endl;
		setName(other.getName());
		setHit(other.getHit());
		setEnergy(other.getEnergy());
		setAttack(other.getAttack());
	}

	ScavTrap &  ScavTrap::operator=(const ScavTrap & other)
	{
	std::cout <<  BLUE << "ScavTrap " << getName() << " copy assignment operator from "<< other.getName() <<" called." << RESET << std::endl;
		if (this != &other)
	{
		this->setName(other.getName());
		this->setHit(other.getHit());
		this->setEnergy(other.getEnergy());
		this->setAttack(other.getAttack());						
	}
	return *this; 
}

ScavTrap::~ScavTrap( void ) // destructor
{
	std::cout <<  BLUE << "ScavTrap " << getName() << " Destructor called." << RESET << std::endl;
	return ;
}

// Constructor(s)
ScavTrap::ScavTrap( const std::string thename):ClapTrap(thename) //constructor with parameters
{
	setHit(100);
	setEnergy(50);
	setAttack(20);
	std::cout <<  BLUE << "ScavTrap " << getName() << " parametric constructor called." << RESET << std::endl;
}

// Getters

// Setters

// Comparison operators

// Canonicalization function

// member functions
void ScavTrap::attack (const std::string & target ){
	if (this->getEnergy() > 0){
		if (this->getHit() > 0) {
			this->setEnergy(this->getEnergy() - 1);
			std::cout <<BLUE <<  "ScavTrap " << this->getName();
			std::cout << " attacks " << target ;
			std::cout << ", causing " << this->getAttack();
			std::cout << " points of damage!" << RESET << std::endl;
		} else {
			std::cout <<  BLUE << "ScavTrap " << getName() << " has not health to attack." << RESET << std::endl;
		}
	} else {
			std::cout <<  BLUE << "ScavTrap " << getName() << " has no energy to attack." << RESET << std::endl;
	}
}

void ScavTrap::guardGate(){
	std::cout <<  BLUE << "ScavTrap " << getName() << " is in gate keeper mode" << RESET << std::endl;
}

// Helper functions for canonicalization



std::ostream& operator<<(std::ostream& os, const ScavTrap& obj)
{
	os << BLUE << "ScavTrap " << obj.canonizeme() << RESET << std::endl;
	return os;
};

