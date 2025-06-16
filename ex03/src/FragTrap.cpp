/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enetxeba <enetxeba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 13:16:47 by enetxeba          #+#    #+#             */
/*   Updated: 2025/06/16 09:10:42 by enetxeba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"

FragTrap::FragTrap():ClapTrap() 
{   
    set_def_energy ();
    set_def_damage();
    set_def_health();
    set_maxhealth (get_health());
    std::cout << "ClapTrap base named " << get_name() << "now is FragTrap model"<< std::endl;
    show_info();
} 

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
    set_damage (30);
    set_energy (100);
    set_health (100);
    set_maxhealth (100);
    std::cout << "ClapTrap base named " << get_name() << " now is FragTrap model"<< std::endl;
    show_info();
}

FragTrap::FragTrap(const FragTrap& other): ClapTrap(other)
{
    *this = other;
}

FragTrap& FragTrap::operator=(const FragTrap& other)
{
    if (this != &other)
    {
        ClapTrap::operator=(other);
    }
    return *this;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap named " << get_name() << " has been disconected!" << std::endl;
}

void FragTrap::highFivesGuys()
{
    std::cout << "Hey my friend, high five" << std::endl;
}

void FragTrap::set_def_health()
{
    _health = 100;
}
void FragTrap::set_def_energy()
{
    _energy = 100;
}
void FragTrap::set_def_damage()
{
    _damage = 30;
}