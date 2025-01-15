#ifndef FragTrap_H
# define FragTrap_H

#include <iostream>

class FragTrap {
public:
    FragTrap( void ); //constructor by default
    FragTrap(const FragTrap& other); //constructor by copy
    FragTrap & operator=(const FragTrap & other);
    ~FragTrap( void ); // destructor

    // Constructor(s)
    //FragTrap(${ARGS_LIST});

    // Getters

    // Setters

    // Comparison operators

    // member functions


private:

    // Helper functions for canonicalization
};

std::ostream& operator<<(std::ostream& os, const FragTrap& obj);

#endif // FragTrap_H
