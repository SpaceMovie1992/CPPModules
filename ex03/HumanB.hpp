/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahusic <ahusic@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 17:00:08 by ahusic            #+#    #+#             */
/*   Updated: 2024/11/08 17:02:21 by ahusic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class   HumanB
{
private:
    std::string _name;
    Weapon      *_weapon;

public:
    HumanB(std::string name);
    ~HumanB();
    void    attack(void);
    void    setWeapon(Weapon &weapon);
    void    setName(std::string name);
    Weapon  getWeapon(void) const;
    std::string getName(void) const;
};

#endif // HUMANB_HPP