/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahusic <ahusic@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 17:21:22 by ahusic            #+#    #+#             */
/*   Updated: 2024/11/24 17:24:28 by ahusic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
	std::cout << "Cure default constructor called." << std::endl;
}

Cure::Cure(const Cure &other) : AMateria(other)
{
	std::cout << "Cure copy constructor called." << std::endl;
}

Cure &Cure::operator=(const Cure &other)
{
	std::cout << "Cure copy assignment operator called." << std::endl;
	if (this != &other)
	{
		AMateria::operator=(other);
	}
	return (*this);
}

Cure::~Cure()
{
	std::cout << "Cure destructor called." << std::endl;
}

Cure	*Cure::clone() const
{
	std::cout << "Cure clone called." << std::endl;
	return (new Cure(*this));
}

void	Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
