#ifndef ScavTrap_H
# define ScavTrap_H

#include <iostream>

class ScavTrap {
public:
    ScavTrap( void ); //constructor by default
    ScavTrap(const ScavTrap& other); //constructor by copy
    ScavTrap & operator=(const ScavTrap & other);
    ~ScavTrap( void ); // destructor

    // Constructor(s)
    //ScavTrap(${ARGS_LIST});

    // Getters

    // Setters

    // Comparison operators

    // member functions


private:

    // Helper functions for canonicalization
};

std::ostream& operator<<(std::ostream& os, const ScavTrap& obj);

#endif // ScavTrap_H
