/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahusic <ahusic@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 16:49:47 by ahusic            #+#    #+#             */
/*   Updated: 2024/11/02 16:35:37 by ahusic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

std::string actualString(std::string &str)
{
    std::string result;
    bool    inWhitespace = true;
    std::string::const_iterator iter = str.begin();
    
    while (iter != str.end())
    {
        if (isspace(*iter))
        {
            if (!inWhitespace)
            {
                result.push_back(' ');
                inWhitespace = true;
            }
        }
        else
        {
            result.push_back(*iter);
            inWhitespace = false;
        }
        iter++;
    }
    if (!result.empty() && result.back() == ' ')
        result.pop_back();
    return (result);
}

int countWords(const std::string &str)
{
    int count = 0;
    std::istringstream stream(str);
    std::string word;
    
    while (stream >> word)
        count++;
    return (count);
}

int main(void)
{
    PhoneBook   phoneBook;
    std::string input;
    
    while(true)
    {
        std::cout << "What u tryna do? ADD, SEARCH or EXIT? " << std::ends;
        if (!std::getline(std::cin, input))
            break;
        if (input == "ADD")
        {
            if (phoneBook.add())
                std::cout << "Contact added successfully." << std::endl;
            else
                std::cout << "Failed to add contact." << std::endl;
        }
        else if (input == "SEARCH")
            phoneBook.search();
        else if (input == "EXIT")
            return (0);
        else
            std::cout << "Invalid command. Type either ADD, SEARCH or EXIT." << std::endl;
    }
    return (0);
}
