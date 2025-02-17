#ifndef ClapTrap_H
# define ClapTrap_H

# define GREEN      "\033[0;92m"
# define RESET  	"\033[0;39m"
# define GRAY		"\033[0;90m"
# define RED		"\033[0;91m"
# define GREEN		"\033[0;92m"
# define YELLOW		"\033[0;93m"
# define BLUE		"\033[0;94m"

#include <iostream>
#include <string>

class ClapTrap {
public:
    ClapTrap( void ); //constructor by default
    ClapTrap(const ClapTrap &other); //constructor by copy
    ClapTrap & operator=(const ClapTrap &other);
    virtual ~ClapTrap( void ); // destructor

    // Constructor(s)
    ClapTrap( const std::string &thename,
            const int,
            const int,
            const int);
    ClapTrap( const std::string &thename);

    // Getters
    std::string getName( void ) const;
    int getHit( void ) const;
    int getEnergy( void ) const;
    int getAttack( void ) const;    
    // Setters
    void setName(const std::string &value);
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

#endif // ClapTrap_H
