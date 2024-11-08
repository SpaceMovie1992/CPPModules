/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahusic <ahusic@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 21:35:54 by ahusic            #+#    #+#             */
/*   Updated: 2024/11/06 22:09:54 by ahusic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
private:
    std::string  _name;

public:
    Zombie();
    Zombie( std::string name );
    ~Zombie();
    void    announce( void );
    std::string   getName(void);
    void    setName(std::string name);
};

Zombie* newZombie( std::string name );
void    randomChump( std::string name );

#endif // ZOMBIE_HPP