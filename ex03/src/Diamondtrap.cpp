/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Diamondtrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enetxeba <enetxeba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 12:49:38 by enetxeba          #+#    #+#             */
/*   Updated: 2025/06/16 09:16:23 by enetxeba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap(), FragTrap(), ScavTrap()
{
    FragTrap::set_def_health();
    ScavTrap::set_def_energy();
    FragTrap::get_damage();
    set_maxhealth(get_health());
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), FragTrap(name), ScavTrap(name)
{
    std::cout << "DiamondTrap Name constructor called" << std::endl;
    this->set_name(name + + "_clap_name"); 
    FragTrap::set_def_health();
    ScavTrap::set_def_energy();
    FragTrap::set_def_damage();
   _max_health = (get_health());
}
DiamondTrap::DiamondTrap(const DiamondTrap& other): ClapTrap(other),
                            FragTrap(other), ScavTrap(other)
{
    *this = other;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& other)
{
    if (this != &other)
    {
        //_name = other._name;
        ClapTrap::operator=(other);
    }
    return *this;
}

DiamondTrap::~DiamondTrap(){}

void DiamondTrap::attack(std::string enemy)
{
    ScavTrap::attack(enemy);
}

void DiamondTrap::whoAmI ()
{
    std::cout << "I am el puto amo de la barraca" << std::endl;
}