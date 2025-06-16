/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enetxeba <enetxeba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 13:16:47 by enetxeba          #+#    #+#             */
/*   Updated: 2025/06/16 09:11:29 by enetxeba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

ScavTrap::ScavTrap():ClapTrap() , _guardmode(false)  
{   
    set_def_energy ();
    set_def_damage();
    set_def_health();
    set_maxhealth (get_health());
    std::cout << "ClapTrap base named " << get_name() << "now is ScavTrap model"<< std::endl;
    show_info();
} 

ScavTrap::ScavTrap(std::string name): ClapTrap(name), _guardmode(false)
{
    set_damage (10);
    set_energy (50);
    set_health (100);
    set_maxhealth (100);
    std::cout << "ClapTrap base named " << get_name() << " now is ScavTrap model"<< std::endl;
    show_info();
}

ScavTrap::ScavTrap(const ScavTrap& other): ClapTrap(other)
{
    *this = other;
}
ScavTrap& ScavTrap::operator=(const ScavTrap& other)
{
    if (this != &other)
    {
        ClapTrap::operator=(other);
        _guardmode = other._guardmode;
    }
    return *this;
}
ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap named " << get_name() << " has been disconected!" << std::endl;
}

void ScavTrap::guardGate()
{
    if (_guardmode)
    {   
        _guardmode = false;
        std::cout << "Gate kepper mode OFF" << std::endl;
    }
    else
   {     
        _guardmode = true;
        std::cout << "Gate kepper mode ON" << std::endl;
    }
}
void ScavTrap::set_def_health()
{
    _health = 100;
}
void ScavTrap::set_def_energy()
{
    _energy = 50;
}
void ScavTrap::set_def_damage()
{
    _damage = 10;
}