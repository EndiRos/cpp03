/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enetxeba <enetxeba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 11:24:22 by enetxeba          #+#    #+#             */
/*   Updated: 2025/06/11 12:00:16 by enetxeba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main (int argc, char **argv)
{
    (void) argc;
    (void) argv;
    ClapTrap robot1;
    ClapTrap robot2("memo");
    robot1.set_name("bobo");
    robot1.attack("memo");
    robot2.takeDamage(0);
    robot2.attack("bobo");
    robot1.takeDamage(0);
    robot1.beRepaired(5);
    robot2.beRepaired(1);
    
}