#ifndef ClapTrap_H
# define ClapTrap_H

#include <iostream>
#include <string>

class ClapTrap {
public:
    ClapTrap( void ); //constructor by default
    ClapTrap(const ClapTrap& other); //constructor by copy
    ClapTrap & operator=(const ClapTrap & other);
    ~ClapTrap( void ); // destructor

    // Constructor(s)
    ClapTrap( const std::string thename );

    // Getters
    std::string getName( void ) const;
    int getHit( void ) const;
    int getEnergy( void ) const;
    int getAttack( void ) const;    
    // Setters
    void setName(std::string const value);
    void setHit(int const value);
    void setEnergy(int const value);
    void setAttack(int const value);            

    // Comparison operators

    // member functions
	void attack (const std::string & target );
	void takeDamage ( unsigned int amount );
	void beRepaired ( unsigned int amount );

    // Helper functions for canonicalization
	std::string canonizeme( void ) const ;

private:
	std::string	_name;
	int	_hit;
	int _energy;
	int _attack;
};

std::ostream& operator<<(std::ostream& os, const ClapTrap& obj);
std::string itoa (int N );
#endif // ClapTrap_H
