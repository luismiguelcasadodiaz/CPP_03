/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luicasad <luicasad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 19:38:03 by luicasad          #+#    #+#             */
/*   Updated: 2025/01/16 16:55:31 by luicasad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.class.hpp"
#include "FragTrap.class.hpp"
int main( void )
{
	FragTrap a;
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

	a = FragTrap("DELL");
	std::cout << a << std::endl;
	a.highFivesGuys();	

	std::cout << "----Pruebas ClapTrap prints print different messages" << std::endl;
	ClapTrap ct= ClapTrap("Luis");
	std::cout << ct << std::endl;
	FragTrap dd= FragTrap("Pedro");
	std::cout << dd << std::endl;
	ct.attack("to one");
	dd.attack("to two");
	return (0);
}
