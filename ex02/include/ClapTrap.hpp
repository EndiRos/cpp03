/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enetxeba <enetxeba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 08:47:28 by enetxeba          #+#    #+#             */
/*   Updated: 2025/06/12 08:48:13 by enetxeba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include<string>
#include<math.h>
#include <iostream>

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

        void set_energy(unsigned int energy);
        unsigned int get_energy();

        void set_health(unsigned int health);
        unsigned int get_health();

        void set_damage(unsigned int damage);
        unsigned int get_damage();
        void show_info();
        void set_maxhealth(unsigned int health);
        unsigned int get_maxhealth();
    private:
        unsigned int _energy;
        unsigned int _health;
        std::string  _name;
        unsigned int _damage;
        unsigned int _max_health;
};

#endif