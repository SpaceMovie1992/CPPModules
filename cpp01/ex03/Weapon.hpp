/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahusic <ahusic@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 17:33:00 by ahusic            #+#    #+#             */
/*   Updated: 2024/11/07 17:44:59 by ahusic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>

class   Weapon
{
private:
    std::string _type;

public:
    Weapon();
    Weapon(std::string type);
    ~Weapon();
    const std::string &getType(void) const;
    void    setType(std::string type);
};
#endif
