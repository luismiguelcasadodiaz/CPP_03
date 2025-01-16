#ifndef FragTrap_H
# define FragTrap_H
#include "ClapTrap.class.hpp"
#include <iostream>

class FragTrap : public ClapTrap {
public:
    FragTrap( void ); //constructor by default
    FragTrap(const FragTrap& other); //constructor by copy
    FragTrap & operator=(const FragTrap & other);
    ~FragTrap( void ); // destructor

    // Constructor(s)
    FragTrap( const std::string thename );

    // Getters

    // Setters

    // Comparison operators

    // member functions
    void highFivesGuys(void);

    // Helper functions for canonicalization
    std::string canonizeme( void ) const ;

private:

};

std::ostream& operator<<(std::ostream& os, const FragTrap& obj);

#endif // FragTrap_H
