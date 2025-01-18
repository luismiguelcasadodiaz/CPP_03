#include "ScavTrap.class.hpp"

	std::string itoa (int N );

	ScavTrap::ScavTrap( void ):ClapTrap() //constructor by default
	{
		std::cout << BLUE << "ScavTrap " << _name << " default constructor called." << RESET << std::endl;
		_hit = 100;
		_energy = 50;
		_attack = 20;
	}

	ScavTrap::ScavTrap(const ScavTrap& other):ClapTrap() //constructor by copy
	{
		std::cout << BLUE << "ScavTrap " << _name << " copy constructor from "<< other._name <<" called." << RESET << std::endl;
		_name = other._name;
		_hit = other._hit;
		_energy = other._energy;
		_attack = other._attack;
	}

	ScavTrap &  ScavTrap::operator=(const ScavTrap & other)
	{
	std::cout <<  BLUE << "ScavTrap " << _name << " copy assignment operator from "<< other._name <<" called." << RESET << std::endl;
		if (this != &other)
	{
		_name = other._name;
		_hit = other._hit;
		_energy = other._energy;
		_attack = other._attack;					
	}
	return *this; 
}

ScavTrap::~ScavTrap( void ) // destructor
{
	std::cout <<  BLUE << "ScavTrap " << _name << " Destructor called." << RESET << std::endl;
	return ;
}

// Constructor(s)
ScavTrap::ScavTrap( const std::string thename):ClapTrap(thename) //constructor with parameters
{
	_hit = 100;
	_energy = 50;
	_attack = 20;
	std::cout <<  BLUE << "ScavTrap " << _name << " parametric constructor called." << RESET << std::endl;
}

// Getters

// Setters

// Comparison operators

// Canonicalization function

// member functions
void ScavTrap::attack (const std::string & target ){
	if (_energy > 0){
		if (_hit > 0) {
			_energy  -= 1;
			std::cout <<BLUE <<  "ScavTrap " << _name;
			std::cout << " attacks " << target ;
			std::cout << ", causing " << _attack;
			std::cout << " points of damage!" << RESET << std::endl;
		} else {
			std::cout <<  BLUE << "ScavTrap " << _name << " has not health to attack." << RESET << std::endl;
		}
	} else {
			std::cout <<  BLUE << "ScavTrap " << _name << " has no energy to attack." << RESET << std::endl;
	}
}

void ScavTrap::guardGate(){
	std::cout <<  BLUE << "ScavTrap " << _name << " is in gate keeper mode" << RESET << std::endl;
}

// Helper functions for canonicalization



std::ostream& operator<<(std::ostream& os, const ScavTrap& obj)
{
	os << BLUE << "ScavTrap " << obj.canonizeme() << RESET << std::endl;
	return os;
};

