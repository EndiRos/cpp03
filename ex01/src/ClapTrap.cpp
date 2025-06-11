/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enetxeba <enetxeba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 09:03:59 by enetxeba          #+#    #+#             */
/*   Updated: 2025/06/11 12:50:30 by enetxeba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap():  _energy(10), _health(10), _name("unamed"), _damage(0)
{
    std::cout << "ClampTrap was created, but need bautism" << std::endl;
    _show_info();
}

ClapTrap::ClapTrap(std::string name) : _energy(10), _health(10), _name(name), _damage(0)
{
    std::cout << "ClapTrap named "<< get_name() << " was created" << std::endl;
    _show_info();
}

ClapTrap::ClapTrap (const ClapTrap& other)
{
    *this = other;
}

ClapTrap::~ClapTrap ()
{
    std::cout << "ClmapTrap named " << get_name() << " has been disconected!" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
    if (this != &other)
    {
        this->_energy = other._energy;
        this->_health = other._health;
        this->_damage = other._damage;
        this->_name = other._name;
    }
    return *this;
}

void ClapTrap::takeDamage(unsigned int amount)
{ 
    if (static_cast<int>(_health) - static_cast<int>(amount) < 0)
        _health = 0;
    else 
        _health -= amount;
    _show_info();

 }

void ClapTrap::beRepaired(unsigned int ammount)
{
    unsigned int max_health;
    unsigned int usable_energy;
    unsigned int repair_amount;
    
    if (_energy == 0 || _health == 0 || _health == MAX_VALUE)
        return;
    max_health = MAX_VALUE - ammount;
    usable_energy = _energy;
    repair_amount = std::min(ammount, std::min(usable_energy, max_health));
    _health += repair_amount;
    _energy -=  repair_amount;
    _show_info();
}

void ClapTrap::attack(const std::string& target)
{
    if (_energy == 0)
    {
        std::cout << "ClapTrap " << get_name() << "can not attack due to insufuciente energy" << std::endl;
    } 
    _energy --;
    std::cout   << "ClapTrap " << _name << " attacks " <<  target << ", causing " 
                << _damage  << " points of damage!"<< std::endl;
}

void ClapTrap::set_name(std::string name)
{
    std::string old_name = _name;
    _name = name;
    std::cout << "ClapTrap named " << old_name << " now is " << _name << std::endl;
}
std::string ClapTrap::get_name()
{
    return _name;
}

void ClapTrap::_set_energy(unsigned int energy)
{
    _energy = energy;
}
unsigned int ClapTrap::_get_energy()
{
    return _energy;
}

void ClapTrap::_set_health(unsigned int health)
{
    _health = health;
}
unsigned int ClapTrap::_get_health()
{
    return _health;
}

void ClapTrap::_set_damage(unsigned int damage)
{
    _damage = damage;
}
unsigned int ClapTrap::_get_damage()
{
    return _damage;
}

void ClapTrap::_show_info()
{
    std::cout << "Robot info" << std::endl;
    std::cout   << "Robot name: " << _name
                << " Health: " << _health
                << " Energy: " << _energy
                << " Damage: " << _damage
                << std::endl;
}
