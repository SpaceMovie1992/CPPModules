/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahusic <ahusic@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 21:26:38 by ahusic            #+#    #+#             */
/*   Updated: 2024/11/20 22:30:57 by ahusic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int	main()
{
	const Animal* meta = new Animal();
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();

	std::cout << "---------------------------------" << std::endl;

	std::cout << "Type is : " << dog->getType() << std::endl;
	std::cout << "Type is : " << cat->getType() << std::endl;
	std::cout << "Type is : " << meta->getType() << std::endl;

	std::cout << "---------------------------------" << std::endl;

	dog->makeSound();
	cat->makeSound();
	meta->makeSound();

	std::cout << "---------------------------------" << std::endl;

	delete dog;
	delete cat;
	delete meta;

	std::cout << "---------------------------------" << std::endl;

	std::cout << "Testing WrongAnimal and WrongCat" << std::endl;
	std::cout << std::endl;

	const WrongAnimal* wrongMeta = new WrongAnimal();
	const WrongAnimal* wrongCat = new WrongCat();

	std::cout << "---------------------------------" << std::endl;

	std::cout << "Type is : " << wrongCat->getType() << std::endl;
	wrongCat->makeSound();

	std::cout << "---------------------------------" << std::endl;

	delete wrongMeta;
	delete wrongCat;

	return (0);
}
