/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enetxeba <enetxeba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 09:03:59 by enetxeba          #+#    #+#             */
/*   Updated: 2025/06/11 10:48:21 by enetxeba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap():  _energy(10), _health(10), _name("")
{
    _damage = 1;
    std::cout << "ClampTrap was created, but need bautism" << std::endl;
    std::cout << "Energy: "<< _energy << std::endl;
    std::cout << "Health: "<< _health << std::endl;
    std::cout << "Attack power: "<< _damage << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _energy(10), _health(10), _name(name)
{
    std::cout << "ClapTrap named "<< name << " was created" << std::endl;
    std::cout << "Energy: "<< _energy << std::endl;
    std::cout << "Health: "<< _health << std::endl;
    std::cout << "Attack power: "<< _damage << std::endl;
}

ClapTrap::ClapTrap (const ClapTrap& other)
{
    *this = other;
}

ClapTrap::~ClapTrap ()
{
    std::cout << "ClmapTrap named " << get_name() << " has been disconected!" << std::endl;
}

ClapTrap& ClapTrap::operator=(ClapTrap& other)
{
    if (this != &other)
    {
        this->_energy = other._energy;
        this->_health = other._health;
    }
    return *this
}

void ClapTrap::takeDamage(unsigned int amount)
{ 
    if (_health - amount < 0)
        _health = 0;
    else 
        _health -= amount;

 }

void ClapTrap::beRepaired(unsigned int ammount)
{
    unsigned int max_health;
    unsigned int usable_energy;
    unsigned int repair_amount;
    
    if (_energy == 0 || _health == 0)
        return;
    max_health = 10 - ammount;
    usable_energy = _energy;
    repair_amount = std::min(ammount, std::min(usable_energy, max_health));
    _health -= repair_amount;
    _energy -=  repair_amount;
}

void ClapTrap::attack(const std::string& target)
{
    _energy --;
    std::cout   << "ClapTrap " << _name << " attacks " <<  target << ", causing " 
                << _damage  << " points of damage!"<< std::endl;
}

void ClapTrap::set_name(std::string name)
{
    _name = name;
}
std::string ClapTrap::get_name()
{
    return _name;
}

void ClapTrap::set_energy(unsigned int energy)
{
    _energy = energy;
}
unsigned int ClapTrap::get_energy()
{
    return _energy;
}

void ClapTrap::set_health(unsigned int health)
{
    _health = health;
}
unsigned int ClapTrap::get_health()
{
    return _health;
}

void ClapTrap::set_damage(unsigned int damage)
{
    _damage = damage;
}
unsigned int ClapTrap::get_damage()
{
    return _damage;
}
