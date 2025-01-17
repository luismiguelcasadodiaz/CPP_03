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
	std::cout << "----Pruebas ClapTrap prints print different messages" << std::endl;
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


	std::cout << "----Pruebas ScavTrap prints print different messages" << std::endl;
	ClapTrap ct= ClapTrap("Pepe");
	std::cout << ct << std::endl;
	ScavTrap st= ScavTrap("Luis");
	std::cout << st << std::endl;
	ct.attack("to one");
	st.attack("to two");
	std::cout << ct << std::endl;
	std::cout << st << std::endl;
	ct.takeDamage(1);
	st.takeDamage(1);
	std::cout << ct << std::endl;
	std::cout << st << std::endl;
	ct.beRepaired(1);
	st.beRepaired(1);
	std::cout << ct << std::endl;
	std::cout << st << std::endl;
	st.guardGate();
	return (0);
}
