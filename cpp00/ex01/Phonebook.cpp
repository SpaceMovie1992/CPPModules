/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahusic <ahusic@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 16:44:55 by ahusic            #+#    #+#             */
/*   Updated: 2024/11/02 18:09:19 by ahusic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

PhoneBook::PhoneBook(void)
{
    _index = 0;
    _full = 0;
}

PhoneBook::~PhoneBook(void)
{
    std::cout << "\n Byeee" << std::endl;
}

std::string getInput(const std::string &prompt)
{
    std::string input;
    
    while (true)
    {
        std::cout << prompt << ": " << std::ends;
        if (std::getline(std::cin, input))
        {
            input = actualString(input);
            if (countWords(input) == 0)
                std::cout << "Field cannot be empty." << std::endl;
            else
                return (input);
        }
        else
            break;
        std::cout << "Try again." << std::endl;
    }
    return ("");
}

bool PhoneBook::add(void)
{
    std::string firstName, lastName, nickName, phoneNumber, darkestSecret;

    firstName = getInput("First Name");
    if (firstName.empty())
        return (false);
    lastName = getInput("Last Name");
    if (lastName.empty())
        return (false);
    nickName = getInput("Nickname");
    if (nickName.empty())
        return (false);
    phoneNumber = getInput("Phone Number");
    if (phoneNumber.empty())
        return (false);
    darkestSecret = getInput("Darkest Secret");
    if (darkestSecret.empty())
        return (false);
    _contacts[_index] = Contact(firstName, lastName, nickName, phoneNumber, darkestSecret);
    _index = (++_index) % 8;
    if (_index == 0)
        _full = 1;
    return (true);
}

std::string rightAlign(std::string str)
{
    std::string::iterator   iter;
    std::string             ret = "";
    int                     i;

    if (str.length() > 10)
    {
        i = 9;
        iter = str.begin();
        while (--i >= 0)
        {
            ret.push_back(*iter);
            iter++;
        }
        ret.push_back('.');
        return (ret);
    }
    if (str.length() <= 10)
    {
        i = 10 - str.length();
        while (--i >= 0)
            str.insert(str.begin(), ' ');
        return (str);
    }
    std::cout << "shit went wrong.." << std::endl;
    return ("");
}

void    PhoneBook::printIndex(int index)
{
    std::cout << rightAlign(std::to_string(index + 1));
	std::cout << "|" << rightAlign(_contacts[index].getFirst());
	std::cout << "|" << rightAlign(_contacts[index].getLast());
	std::cout << "|" << rightAlign(_contacts[index].getNick()) << std::endl;
}

int PhoneBook::searchIndex(void)
{
    std::string             input;
    std::string::iterator   iter;
    // int                     index;
    
    std::cout << "Who you wanna check? Type 'STOP' to get tf out." << std::endl;
    while(true)
    {
        if (std::getline(std::cin, input))
        {
            input = actualString(input);
            iter = input.begin();
            if ((input.length() != 1 && input.length() != 4) || *iter < '0' || *iter >= '8')
            {
                if (input.length() == 4 && input == "STOP")
                    return (-1);
                std::cout << "Invalid index. Try again." << std::endl;
                std::cout << "Enter contact index to view details or type 'STOP' to get tf out." << std::endl;
            }
            else
            {
                int index = *iter - '0';
                if ((_full && index >= 0 && _index <= 7) || (!_full && index >= 0 && index < _index))
                {
                    printIndex(index);
                    return (1);
                }
                else
                {
                    std::cout << "Invalid index. Try again mf." << std::endl;
                    std::cout << "Enter conctact index to view details or type 'STOP' ot get tf out." << std::endl;
                }
            }
        }
        else
            return (0);
    }
    std::cout << "Yeah smth went wrong w searchIndex idk" << std::endl;
    return (0);
}

int PhoneBook::search(void)
{
    int i;
    int j;

    if (_index == 0 && _full == 0)
    {
        std::cout << "Maybe add smth first mf.." << std::endl;
        return (1);
    }
    j = 8;
    if (_full == 0)
        j = _index;
    i = 0;
    std::cout << "-------------------------------------------" << std::endl;
    std::cout << rightAlign("  Index  ");
    std::cout << "|" << rightAlign(" FirstName");
    std::cout << "|" << rightAlign(" LastName ");
    std::cout << "|" << rightAlign(" NickName ") << std::endl;
    std::cout << rightAlign("----------");
    std::cout << "|" << rightAlign("----------");
    std::cout << "|" << rightAlign("----------");
    std::cout << "|" << rightAlign("----------") << std::endl;
    while(i < j)
    {
        std::cout << rightAlign(std::to_string(i));
        std::cout << "|" << rightAlign(_contacts[i].getFirst());
        std::cout << "|" << rightAlign(_contacts[i].getLast());
        std::cout << "|" << rightAlign(_contacts[i].getNick()) << std::endl;
        i++;
    }
    std::cout << "-------------------------------------------" << std::endl;
    return (this->searchIndex());
}
