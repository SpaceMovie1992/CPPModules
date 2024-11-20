/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahusic <ahusic@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 18:30:43 by ahusic            #+#    #+#             */
/*   Updated: 2024/11/20 22:34:54 by ahusic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"

class	Dog : public Animal
{
public:
	Dog();
	~Dog();
	Dog(const Dog &other);
	Dog &operator=(const Dog &other);

	void makeSound() const;
};

#endif // DOG_HPP
