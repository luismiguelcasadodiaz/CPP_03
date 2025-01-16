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
#include "ScavTrap.class.hpp"
int main( void )
{
	ScavTrap a;
	std::cout << a << std::endl;
	a.attack("hola");
	std::cout << a << std::endl;	
	a.takeDamage(1);
	std::cout << a << std::endl;
	a.takeDamage(1);
	std::cout << a << std::endl;	
	a.takeDamage(1);
	std::cout << a << std::endl;	
	a.takeDamage(1);
	std::cout << a << std::endl;	
	a.beRepaired(321);
	std::cout << a << std::endl;

	a = ScavTrap("DELL");
	std::cout << a << std::endl;
	a.guardGate();	

	std::cout << "----Pruebas ClapTrap prints print different messages" << std::endl;
	ClapTrap ct= ClapTrap("Luis");
	std::cout << ct << std::endl;
	ScavTrap dd= ScavTrap("Pedro");
	std::cout << dd << std::endl;
	ct.attack("to one");
	dd.attack("to two");
	return (0);
}
