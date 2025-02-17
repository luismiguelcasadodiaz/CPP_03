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
#include "ScavTrap.class.hpp"
#include "FragTrap.class.hpp"
#include "DiamondTrap.class.hpp"

int main( void )
{

	// {std::cout << "----Pruebas ClapTrap prints print different messages" << std::endl;
	// ClapTrap a;
	// std::cout << a << std::endl;
	// a.attack("Juan");
	// std::cout << a << std::endl;	
	// a.takeDamage(1);
	// std::cout << a << std::endl;
	// a.takeDamage(1);
	// std::cout << a << std::endl;	
	// a.takeDamage(1);
	// std::cout << a << std::endl;	
	// a.takeDamage(1);
	// std::cout << a << std::endl;
	// a.takeDamage(1);
	// std::cout << a << std::endl;	
	// a.takeDamage(1);
	// std::cout << a << std::endl;	
	// a.takeDamage(1);
	// std::cout << a << std::endl;	
	// a.takeDamage(1);
	// std::cout << a << std::endl;
	// a.takeDamage(1);
	// std::cout << a << std::endl;
	// a.takeDamage(1);
	// std::cout << a << std::endl;
	// a.takeDamage(1);
	// a.attack("Pepe");
	// std::cout << a << std::endl;					
	// a.beRepaired(321);
	// std::cout << a << std::endl;

	// a = ClapTrap("DELL");
	// std::cout << a << std::endl;	
	// }
	// {

	// std::cout << "----Pruebas ScavTrap prints print different messages" << std::endl;
	// ClapTrap ct= ClapTrap("Pepe");
	// std::cout << ct << std::endl;
	// ScavTrap st= ScavTrap("Luis");
	// std::cout << st << std::endl;
	// ct.attack("to one");
	// st.attack("to two");
	// std::cout << ct << std::endl;
	// std::cout << st << std::endl;
	// ct.takeDamage(1);
	// st.takeDamage(1);
	// std::cout << ct << std::endl;
	// std::cout << st << std::endl;
	// ct.beRepaired(1);
	// st.beRepaired(1);
	// std::cout << ct << std::endl;
	// std::cout << st << std::endl;
	// st.guardGate();
	// }
	// {
	// std::cout << "----Pruebas FragTrap prints print different messages" << std::endl;
	// FragTrap a = FragTrap("DELL");
	// std::cout << a << std::endl;
	// a.attack("Juan");
	// std::cout << a << std::endl;	
	// a.takeDamage(10);
	// std::cout << a << std::endl;
	// a.takeDamage(10);
	// std::cout << a << std::endl;	
	// a.takeDamage(10);
	// std::cout << a << std::endl;	
	// a.takeDamage(10);
	// std::cout << a << std::endl;
	// a.takeDamage(10);
	// std::cout << a << std::endl;	
	// a.takeDamage(10);
	// std::cout << a << std::endl;	
	// a.takeDamage(10);
	// std::cout << a << std::endl;	
	// a.takeDamage(10);
	// std::cout << a << std::endl;
	// a.takeDamage(10);
	// std::cout << a << std::endl;
	// a.takeDamage(10);
	// std::cout << a << std::endl;
	// a.takeDamage(1);
	// a.attack("Pepe");
	// std::cout << a << std::endl;					
	// a.beRepaired(321);
	// std::cout << a << std::endl;

	// a.highFivesGuys();	
	
	// ClapTrap ct= ClapTrap("Luis");
	// std::cout << ct << std::endl;
	// FragTrap ft= FragTrap("Paco");
	// std::cout << ft << std::endl;
	// ct.attack("to one");
	// ft.attack("to two");
	// }


	{
	std::cout << "---------------------------- Entorno 1 ------------------------------ " << std::endl;
	ClapTrap ct=ClapTrap("Clap Trap Alfonso");
	ClapTrap ct2;
	std::cout <<ct << std::endl;
	ct.attack("Luis");	
	ct2 = ct;
	std::cout <<ct2 << std::endl;
	}
	{
	std::cout << "---------------------------- Entorno 2 ------------------------------ " << std::endl;
	FragTrap ft=FragTrap("Frag Trap Alfonso");
	FragTrap ft2;
	std::cout <<ft << std::endl;
	ft.attack("Luis");	
	ft2 = ft;
	std::cout <<ft2 << std::endl;
	}
	{
	std::cout << "---------------------------- Entorno 3 ------------------------------ " << std::endl;
	ScavTrap st=ScavTrap("Scav Trap Alfonso");
	ScavTrap st2;
	std::cout <<st << std::endl;
	st.attack("Luis");
	st2 = st;	
	std::cout <<st2 << std::endl;
	}
	{
	std::cout << "---------------------------- Entorno 4 ------------------------------ " << std::endl;
	DiamondTrap dt=DiamondTrap("Luis Miguel");
	DiamondTrap dt2=DiamondTrap("Alfonso");
	std::cout <<dt << std::endl;
	std::cout <<dt2 << std::endl;
	dt.attack("to three");
	dt.whoAmI();
	dt2 = dt;
	std::cout <<dt2 << std::endl;
	}
	return (0);
}
