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

class DiamondTrap {
public:
    DiamondTrap( void ); //constructor by default
    DiamondTrap(const DiamondTrap& other); //constructor by copy
    DiamondTrap & operator=(const DiamondTrap & other);
    ~DiamondTrap( void ); // destructor

    // Constructor(s)
    //DiamondTrap(${ARGS_LIST});

    // Getters

    // Setters

    // Comparison operators

    // member functions


private:

    // Helper functions for canonicalization
};

std::ostream& operator<<(std::ostream& os, const DiamondTrap& obj);

#endif // DiamondTrap_H
