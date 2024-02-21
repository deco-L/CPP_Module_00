/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csakamot <csakamot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 14:21:20 by csakamot          #+#    #+#             */
/*   Updated: 2024/02/19 21:23:08 by csakamot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

bool	PhoneBook::addContact(const Contact &contact) {
	if (count == 8)
		count = 0;
	contacts[count] = contact;
	count++;
	return true;
}

const Contact	&PhoneBook::getContact(int index) {
	if (0 <= index && index <= MAX_CONTACT)
		return contacts[index];
	return emptycontact;
}

const std::string	PhoneBook::getindex(int index) const{
	std::stringstream	sstream;
	sstream << index;
	return (sstream.str());
}
