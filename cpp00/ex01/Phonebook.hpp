/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahusic <ahusic@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 16:35:50 by ahusic            #+#    #+#             */
/*   Updated: 2024/10/29 22:28:02 by ahusic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"
# include <iostream>
# include <sstream>

class PhoneBook
{
private:
    Contact _contacts[8];
    int     _index;
    int     _full;

public:
    PhoneBook(void);
    ~PhoneBook(void);
    bool    add(void);
    int     search(void);
    void    printIndex(int index);
    int     searchIndex(void);
};

int         countWords(const std::string &str);
std::string actualString(std::string &str);
    
#endif