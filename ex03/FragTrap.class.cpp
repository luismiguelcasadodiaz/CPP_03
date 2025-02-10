#include "FragTrap.class.hpp"

std::string itoa (int N );

FragTrap::FragTrap( void ):ClapTrap() //constructor by default
{
	std::cout << RED << "FragTrap " << getName() << " default constructor called." << RESET << std::endl;
	setHit(100);
	setEnergy(100);
	setAttack(30);
}

FragTrap::FragTrap(const FragTrap& other):ClapTrap() //constructor by copy
{
	std::cout << RED << "FragTrap " << getName() << " copy constructor from "<< other.getName() <<" called." << RESET << std::endl;
	setHit(other.getHit());
	setEnergy(other.getEnergy());
	setAttack(other.getAttack());
}

FragTrap &  FragTrap::operator=(const FragTrap & other)
{
	std::cout <<  RED << "FragTrap " << getName() << " copy assignment operator from "<< other.getName() <<" called." << RESET << std::endl;
	if (this != &other)
	{
		this->setName(other.getName());
		this->setHit(other.getHit());
		this->setEnergy(other.getEnergy());
		this->setAttack(other.getAttack());		
	}
	return *this; 
}

FragTrap::~FragTrap( void ) // destructor
{
	std::cout <<  RED << "FragTrap " << getName() << " Destructor called." << RESET << std::endl;
	return ;
}

// Constructor(s)
FragTrap::FragTrap( const std::string thename):ClapTrap(thename) //constructor with parameters
{
	setHit(100);
	setEnergy(100);
	setAttack(30);
	std::cout <<  RED << "FragTrap " << getName() << " parametric constructor called." << RESET << std::endl;
}


// Getters

// Setters

// Comparison operators

// member function
void FragTrap::highFivesGuys(void){
	std::cout << RED << "FragTrap " << getName() << " Claims: Believe in yourself! High five!" << RESET << std::endl;
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
