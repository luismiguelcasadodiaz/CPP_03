#ifndef ScavTrap_H
# define ScavTrap_H
#include "ClapTrap.class.hpp"
#include <iostream>

class ScavTrap : public ClapTrap {
public:
    ScavTrap( void ); //constructor by default
    ScavTrap(const ScavTrap& other); //constructor by copy
    ScavTrap & operator=(const ScavTrap & other);
    ~ScavTrap( void ); // destructor

    // Constructor(s)
    ScavTrap( const std::string thename );

    // Getters

    // Setters

    // Comparison operators

    // member functions
    void attack (const std::string & target );
	void guardGate();

    // Helper functions for canonicalization
    std::string canonizeme( void ) const ;


private:


};

std::ostream& operator<<(std::ostream& os, const ScavTrap& obj);

#endif // ScavTrap_H
