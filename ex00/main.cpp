/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luicasad <luicasad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 19:38:03 by luicasad          #+#    #+#             */
/*   Updated: 2025/01/15 22:52:45 by luicasad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.class.hpp"
int main( void )
{
	ClapTrap a;
	std::cout << a << std::endl;
	a.attack("Juan");
	std::cout << a << std::endl;	
	a.takeDamage(1);
	std::cout << a << std::endl;
	a.takeDamage(1);
	std::cout << a << std::endl;	
	a.takeDamage(1);
	std::cout << a << std::endl;	
	a.takeDamage(1);
	std::cout << a << std::endl;
	a.takeDamage(1);
	std::cout << a << std::endl;	
	a.takeDamage(1);
	std::cout << a << std::endl;	
	a.takeDamage(1);
	std::cout << a << std::endl;	
	a.takeDamage(1);
	std::cout << a << std::endl;
	a.takeDamage(1);
	std::cout << a << std::endl;
	a.takeDamage(1);
	std::cout << a << std::endl;
	a.takeDamage(1);
	a.attack("Pepe");
	std::cout << a << std::endl;					
	a.beRepaired(321);
	std::cout << a << std::endl;

	a = ClapTrap("DELL");
	std::cout << a << std::endl;	

	return (0);
}
