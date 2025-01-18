#include "FragTrap.class.hpp"

std::string itoa (int N );

FragTrap::FragTrap( void ):ClapTrap() //constructor by default
{
	std::cout << RED << "FragTrap " << _name << " default constructor called." << RESET << std::endl;
	_hit = 100;
	_energy = 100;
	_attack = 30;
}

FragTrap::FragTrap(const FragTrap& other):ClapTrap() //constructor by copy
{
	std::cout << RED << "FragTrap " << _name << " copy constructor from "<< other._name <<" called." << RESET << std::endl;
	_name = other._name;
	_hit = other._hit;
	_energy = other._energy;
	_attack = other._attack;
}

FragTrap &  FragTrap::operator=(const FragTrap & other)
{
	std::cout <<  RED << "ScavTrap " << _name << " copy assignment operator from "<< other._name <<" called." << RESET << std::endl;
	if (this != &other)
	{
	_name = other._name;
	_hit = other._hit;
	_energy = other._energy;
	_attack = other._attack;		
	}
	return *this; 
}

FragTrap::~FragTrap( void ) // destructor
{
	std::cout <<  RED << "ScavTrap " << _name << " Destructor called." << RESET << std::endl;
	return ;
}

// Constructor(s)
FragTrap::FragTrap( const std::string thename):ClapTrap(thename) //constructor with parameters
{
	_hit = 100;
	_energy = 100;
	_attack = 30;
	std::cout <<  RED << "ScavTrap " << _name << " parametric constructor called." << RESET << std::endl;
}


// Getters

// Setters

// Comparison operators

// member function
void FragTrap::highFivesGuys(void){
	std::cout << RED << "FragTrap " << _name << " Claims: Believe in yourself! High five!" << RESET << std::endl;
}

// Helper functions for canonicalization


std::ostream& operator<<(std::ostream& os, const FragTrap& obj)
{
	os << RED << "FragTrap " << obj.canonizeme() << RESET << std::endl;
	return os;
};
/*
std::string itoa (int N )
{
	std::string resultado;
	char		num;

	if (N == 0)
		resultado.insert(0, 1, '0');
	else if (N > 0)
	{ 
		if (N  > 9)
		{
			resultado = itoa(N / 10);
			num = static_cast<char>(48 + N % 10);
		}
		num = static_cast<char>(48 + N % 10);
		resultado.append(1,  num);
	}
	return (resultado);
}

*/
