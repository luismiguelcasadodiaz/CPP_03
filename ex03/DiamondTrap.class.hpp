#ifndef DiamondTrap_H
# define DiamondTrap_H

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
