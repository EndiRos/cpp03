/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enetxeba <enetxeba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 11:24:22 by enetxeba          #+#    #+#             */
/*   Updated: 2025/06/13 11:44:30 by enetxeba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main (int argc, char **argv)
{
    (void) argc;
    (void) argv;
    std::cout << "-----------claptrap--------" << std::endl;
    ClapTrap *robot1 = new ClapTrap("bobo");;
    std::cout << "-----------scavtrap--------" << std::endl;
    ScavTrap *robot2 = new ScavTrap("memo");
    robot2->show_info();
    std::cout << "-----------fragtrap--------" << std::endl;
    FragTrap *robot3 = new FragTrap("Alelao");
    robot3->show_info();
    std::cout << "-----------Diamond--------" << std::endl;
    DiamondTrap *robot4 = new DiamondTrap("pokemomn");
    robot4->show_info();
    /* robot4->guardGate();
    robot4->highFivesGuys();
    robot4->attack("memo");
    robot4->beRepaired(2);
    robot4->beRepaired(2);
    robot3->attack("memo");
    robot1.set_name("bobo");
    robot1.attack("memo");
    robot2->takeDamage(0);
    robot2->attack("bobo");
    robot1.takeDamage(0);
    robot1.beRepaired(5);
    robot2->beRepaired(1);
    robot2->guardGate();
    robot4->beRepaired(2); */
    //robot5->show_info();
    delete robot1;
    delete robot2;
    delete robot3;
    delete robot4;
}