/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahusic <ahusic@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 22:32:49 by ahusic            #+#    #+#             */
/*   Updated: 2024/11/06 22:38:20 by ahusic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

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

Zombie* zombieHorde( int N, std::string name );

#endif //ZOMBIE_HPP