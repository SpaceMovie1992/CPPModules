/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahusic <ahusic@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 20:40:32 by ahusic            #+#    #+#             */
/*   Updated: 2024/10/27 16:27:42 by ahusic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <string>

class Contact
{
private:
    std::string firstName;
    std::string lastName;
    std::string nickName;
    std::string phoneNumber;
    std::string darkestSecret;

public:
    Contact() {}
    ~Contact() {}
    Contact(std::string first, std::string last, std::string nick, std::string phone, std::string secret):
        firstName(first), lastName(last), nickName(nick), phoneNumber(phone), darkestSecret(secret) {}
    
    std::string getFirst(void);
    std::string getLast(void);
    std::string getNick(void);
    std::string getPhone(void);
    std::string getSecret(void);
};

#endif