/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enetxeba <enetxeba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 08:47:28 by enetxeba          #+#    #+#             */
/*   Updated: 2025/06/11 12:46:18 by enetxeba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include<string>
#include<math.h>
#include <iostream>

static const unsigned int MAX_VALUE = 10;

class ClapTrap
{
    public:
        ClapTrap();
        ClapTrap(std::string name);
        ~ClapTrap ();
        ClapTrap& operator=(const ClapTrap& other);
        ClapTrap (const ClapTrap& other);
        
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);

        void set_name(std::string name);
        std::string get_name();

        

    private:
        unsigned int _energy;
        unsigned int _health;
        std::string  _name;
        unsigned int _damage;

        void _set_energy(unsigned int energy);
        unsigned int _get_energy();

        void _set_health(unsigned int health);
        unsigned int _get_health();

        void _set_damage(unsigned int damage);
        unsigned int _get_damage();

        void _show_info();
};

#endif