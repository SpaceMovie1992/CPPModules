/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahusic <ahusic@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 16:57:02 by ahusic            #+#    #+#             */
/*   Updated: 2024/11/24 22:55:31 by ahusic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() : _type("default")
{
	std::cout << "AMateria default constructor called." << std::endl;
}

AMateria::AMateria(std::string const &type) : _type(type)
{
	std::cout << "AMateria name constructor called." << std::endl;
}

AMateria::AMateria(const AMateria &other)
{
	std::cout << "AMateria copy constructor called." << std::endl;
	*this = other;
}

AMateria &AMateria::operator=(const AMateria &other)
{
	std::cout << "AMateria assignation operator called." << std::endl;
	if (this != &other)
	{
		this->_type = other._type;
	}
	return (*this);
}

AMateria::~AMateria()
{
	std::cout << "AMateria destructor called." << std::endl;
}

void	AMateria::use(ICharacter &target)
{
	std::cout << "AMateria use function called on " << target.getName() << std::endl;
}

std::string	const &AMateria::getType() const
{
	return (this->_type);
}
