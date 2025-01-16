#include "FragTrap.class.hpp"

std::string itoa (int N );

FragTrap::FragTrap( void ):ClapTrap("FragTrap") //constructor by default
{
	std::cout << "Default constructor called for FragTrap " << std::endl;
	setHit(100);
	setEnergy(100);
	setAttack(30);
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
		this->setName(other.getName());
		this->setHit(other.getHit());
		this->setEnergy(other.getEnergy());
		this->setAttack(other.getAttack());		
	}
	return *this; 
}

FragTrap::~FragTrap( void ) // destructor
{
	std::cout << "Destructor called for FragTrap " << std::endl;
	return ;
}

// Constructor(s)
FragTrap::FragTrap( const std::string thename):ClapTrap(thename) //constructor with parameters
{
	setHit(100);
	setEnergy(100);
	setAttack(30);
	std::cout << "Parametric constructor called for FragClap " << std::endl;
}

// Getters

// Setters

// Comparison operators

// member function
void FragTrap::highFivesGuys(void){
	std::cout << "FragTrap Claims: Believe in yourself! High five!" << std::endl;
}

// Helper functions for canonicalization

std::string FragTrap::canonizeme( void ) const {
	std::string hit_txt = itoa(this->getHit());
	std::string ene_txt = itoa(this->getEnergy());
	std::string att_txt = itoa(this->getAttack());
	std::string _str_ = "FragTrap " + this->getName() + " [hit ==>(" + hit_txt;
	return (_str_  + ") energy(" + ene_txt + ") attack (" + att_txt + ")]");
}

std::ostream& operator<<(std::ostream& os, const FragTrap& obj)
{
	os << obj.canonizeme() << std::endl;
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
