#include "ScavTrap.class.hpp"

std::string itoa (int N );

ScavTrap::ScavTrap( void ):ClapTrap("ScavTrap") //constructor by default
{
	std::cout << "Default constructor called for ScavTrap " << std::endl;
	setHit(100);
	setEnergy(50);
	setAttack(20);
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
		this->setName(other.getName());
		this->setHit(other.getHit());
		this->setEnergy(other.getEnergy());
		this->setAttack(other.getAttack());						
	}
return *this; 
}

ScavTrap::~ScavTrap( void ) // destructor
{
	std::cout << "Destructor called for ScavTrap " << std::endl;
	return ;
}

// Constructor(s)
ScavTrap::ScavTrap( const std::string thename):ClapTrap(thename) //constructor with parameters
{
	setHit(100);
	setEnergy(50);
	setAttack(20);
	std::cout << "Parametric constructor called for ScavTrap " << std::endl;
}

// Getters

// Setters

// Comparison operators

// Canonicalization function

std::string ScavTrap::canonizeme( void ) const {
	std::string hit_txt = itoa(this->getHit());
	std::string ene_txt = itoa(this->getEnergy());
	std::string att_txt = itoa(this->getAttack());
	std::string _str_ = "ScavTrap " + this->getName() + " hit ==>(" + hit_txt;
	return (_str_  + ") energy(" + ene_txt + ") attack (" + att_txt + ")");
}

// member functions
void ScavTrap::attack (const std::string & target ){
	if (this->getEnergy() > 0){
		if (this->getHit() > 0) {
			this->setEnergy(this->getEnergy() - 1);
			std::cout << "ScavTrap " << this->getName();
			std::cout << " is willing to attack " << target ;
			std::cout << ", causing " << this->getAttack();
			std::cout << " points of damage!" << std::endl;
		} else {
			std::cout << " ScavTrap has not health to attack." << std::endl;
		}
	} else {
		std::cout << "ScavTrap has no energy to attack." << std::endl;
	}
}

void ScavTrap::guardGate(){
	std::cout << "ScavTrap is in gate keeper mode" << std::endl;
}

// Helper functions for canonicalization

std::ostream& operator<<(std::ostream& os, const ScavTrap& obj)
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