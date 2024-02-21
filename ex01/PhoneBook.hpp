/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csakamot <csakamot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 14:21:20 by csakamot          #+#    #+#             */
/*   Updated: 2024/02/19 21:23:21 by csakamot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include "structure.hpp"
#include "Contact.hpp"
#include "Print.hpp"
#include <cstdlib>
#include <limits>
#include <sstream>

class	PhoneBook : Contact {
private:
	int				count;
	Contact			emptycontact;
	Contact 		contacts[MAX_CONTACT];

public:
	PhoneBook() :
	count(0),
	emptycontact(),
	contacts() {}

	bool	addContact(const Contact &contact);
	const Contact	&getContact(int index);
	const std::string	getindex(int index) const;
};

#endif
