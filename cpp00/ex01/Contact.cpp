/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahusic <ahusic@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 16:28:14 by ahusic            #+#    #+#             */
/*   Updated: 2024/10/27 16:33:02 by ahusic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

std::string Contact::getFirst(void) {return (firstName);}
std::string Contact::getLast(void) {return (lastName);}
std::string Contact::getNick(void) {return (nickName);}
std::string Contact::getPhone(void) {return (phoneNumber);}
std::string Contact::getSecret(void) {return (darkestSecret);}
