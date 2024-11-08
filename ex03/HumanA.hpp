/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahusic <ahusic@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 20:03:25 by ahusic            #+#    #+#             */
/*   Updated: 2024/11/08 16:36:03 by ahusic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"

class   HumanA
{
private:
    std::string _name;
    Weapon      *_weapon;

public:
    HumanA();
    HumanA(std::string name, Weapon &weapon);
    ~HumanA();
    void    attack(void);
    void    setWeapon(Weapon &weapon);
    void    setName(std::string name);
    Weapon  getWeapon(void) const;
    std::string getName(void) const;    
};

#endif // HUMANA_HPP
