#ifndef DiamondTrap_H
# define DiamondTrap_H

# define GREEN      "\033[0;92m"
# define RESET  	"\033[0;39m"
# define GRAY		"\033[0;90m"
# define RED		"\033[0;91m"
# define GREEN		"\033[0;92m"
# define YELLOW		"\033[0;93m"
# define BLUE		"\033[0;94m"

#include <iostream>
#include <string>
#include <sstream>
#include "FragTrap.class.hpp"
#include "ScavTrap.class.hpp"

class DiamondTrap: public FragTrap, public ScavTrap {
public:

    DiamondTrap(const DiamondTrap& other); //constructor by copy
    DiamondTrap & operator=(const DiamondTrap & other);
    ~DiamondTrap( void ); // destructor

    // Constructor(s)
    DiamondTrap(const std::string thename);

    // Getters

    // Setters

    // Comparison operators

    // member functions
    void whoAmI() const;
    void attack (const std::string & target );

    // Helper functions for canonicalization
    std::string canonizeme( void ) const ;


private:
    std::string _name;
    DiamondTrap( void ); //constructor by default
    
};

std::ostream& operator<<(std::ostream& os, const DiamondTrap& obj);

#endif // DiamondTrap_H
