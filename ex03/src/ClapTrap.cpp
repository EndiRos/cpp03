/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enetxeba <enetxeba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 09:03:59 by enetxeba          #+#    #+#             */
/*   Updated: 2025/06/16 09:10:13 by enetxeba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap():   _name("unamed")
{
    set_def_energy ();
    set_def_damage();
    set_def_health();
    set_maxhealth(get_health());
    set_name("unamed");
    std::cout << "ClampTrap was created, but need bautism" << std::endl;
    show_info();
}

ClapTrap::ClapTrap(std::string name) : _name(name)
{
    set_energy (10);
    set_health(10);
    set_damage(0);
    set_maxhealth(10);
    std::cout << "ClapTrap named "<< get_name() << " was created" << std::endl;
    show_info();
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
        set_health (0);
    else 
        set_health( get_health() - amount);
    show_info();

 }

void ClapTrap::beRepaired(unsigned int ammount)
{
    unsigned int max_health;
    unsigned int usable_energy;
    unsigned int repair_amount;
    
    if (_energy == 0 || _health == 0 || _health == _max_health)
        return;
    max_health = _max_health - ammount;
    usable_energy = get_energy();
    repair_amount = std::min(ammount, std::min(usable_energy, max_health));
    set_health(get_health() + repair_amount);
    set_energy(get_energy() - repair_amount);
    show_info();
}

void ClapTrap::attack(const std::string& target)
{
    if (_energy == 0)
    {
        std::cout << "ClapTrap " << get_name() << "can not attack due to insufuciente energy" << std::endl;
    } 
    _energy --;
    std::cout   << "ClapTrap " << get_name() << " attacks " <<  target << ", causing " 
                << get_damage()  << " points of damage!"<< std::endl;
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

void ClapTrap::set_maxhealth(unsigned int health)
{
    _max_health = health;
}
unsigned int ClapTrap::get_maxhealth()
{
    return _max_health;
}

void ClapTrap::show_info()
{
    std::cout << "Robot info" << std::endl;
    std::cout   << "Robot name: " << _name
                << " Health: " << _health
                << " Energy: " << _energy
                << " Damage: " << _damage
                << std::endl;
}

void ClapTrap::set_def_health()
{
    _health = 10;
}
void ClapTrap::set_def_energy()
{
    _energy = 10;
}
void ClapTrap::set_def_damage()
{
    _damage = 0;
}