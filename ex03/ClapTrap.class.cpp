#include "ClapTrap.class.hpp"

std::string itoa (int N );

ClapTrap::ClapTrap( void )://constructor by default
	_name("anonymous"),
	_hit(10),
	_energy(10),
	_attack(0) {
	std::cout << GREEN << "Default constructor called for ClapTrap " << RESET << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other) //constructor by copy
{
	std::cout << GREEN << "Copy constructor called for ClapTrap " << RESET << std::endl;
	*this = other;
	return;
}

ClapTrap &  ClapTrap::operator=(const ClapTrap & other)
{
	std::cout << GREEN << "Copy assignment operator called for ClapTrap " << RESET << std::endl;
	if (this != &other)
	{
		this->_name = other._name;
		this->_hit = other._hit;
		this->_energy = other._energy;
		this->_attack = other._attack;						
	}
	return *this; 
}

ClapTrap::~ClapTrap( void ) // destructor
{
	std::cout << GREEN << "Destructor called for ClapTrap " << RESET << std::endl;
	return ;
}

// Constructor(s)
ClapTrap::ClapTrap( const std::string thename): //constructor with parameters
	_name(thename),
	_hit(10),
	_energy(10),
	_attack(0) {
	std::cout << GREEN << "Parametric constructor called for ClapTrap " << RESET << std::endl;
}
	

// Getters

// Setters

// Comparison operators

// member functions

void ClapTrap::attack (const std::string & target ){
	if (this->_energy > 0){
		if (this->_hit > 0) {
			this->_energy -=1;
			std::cout <<  GREEN <<"ClapTrap " << this->_name ;
			std::cout << " attacks " << target ;
			std::cout << ", causing " << this->_attack;
			std::cout << " poinst of damage!" << RESET << std::endl;
		} else {
			std::cout <<  GREEN <<" ClapTrap has not health to attack." << RESET << std::endl;
		}
	} else {
		std::cout <<  GREEN <<"ClapTrap has no energy to attack." << RESET << std::endl;
	}
}
void ClapTrap::takeDamage ( unsigned int amount ){
	this->_hit -= amount;
	std::cout <<  GREEN <<"ClapTrap " << this->_name ;
	std::cout << " takes a damage of  " << amount ;
	std::cout << " points. Current health level is  " << this->_hit;
	std::cout << " poinst of damage!" << RESET << std::endl;
}

void ClapTrap::beRepaired ( unsigned int amount ){
	if (this->_energy > 0){
		if (this->_hit > 0) {
			this->_energy -=1;
			this->_hit += amount;
			std::cout <<  GREEN <<"ClapTrap " << this->_name ;
			std::cout << " repairs itself getting " << amount ;
			std::cout << " points. Current health level is  " << this->_hit;
			std::cout << " poinst of damage!" << RESET << std::endl;
		} else {
			std::cout <<  GREEN <<"ClapTrap has not health to attack ." << RESET << std::endl;
		}
	} else {
		std::cout <<  GREEN <<"ClapTrap has no energy to auto repair" << RESET << std::endl;
	}
}


// Helper functions for canonicalization
std::string ClapTrap::canonizeme( void ) const {
	std::string hit_txt = itoa(this->_hit);
	std::string ene_txt = itoa(this->_energy);
	std::string att_txt = itoa(this->_attack);
	std::string _str_ = "ClapTrap " + this->_name + " hit ==>(" + hit_txt;
	return (_str_  + ") energy(" + ene_txt + ") attack (" + att_txt + ")");
}

std::ostream& operator<<(std::ostream& os, const ClapTrap& obj)
{
	os <<  GREEN <<obj.canonizeme()  << RESET << std::endl;
	return os;
};


std::string itoa (int N )
{
	std::string resultado;
	char		num;

	if (N == 0)
		resultado.insert(0, 1, '0');
	else if (N > 0)
	{ 
		if (9 < N)
		{
			resultado = itoa(N / 10);
			num = static_cast<char>(48 + N % 10);
		}
		num = static_cast<char>(48 + N % 10);
		resultado.append(1,  num);
	} else {
		if (N  < -9)
		{
			resultado = itoa(N / 10);
			num = static_cast<char>(48 + (-N) % 10);
		}
		num = static_cast<char>(48 + (-N) % 10);
		resultado.append(1,  num);
		resultado = '-' + resultado;

	}
	return (resultado);
}