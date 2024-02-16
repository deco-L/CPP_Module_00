/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csakamot <csakamot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 14:21:20 by csakamot          #+#    #+#             */
/*   Updated: 2024/02/16 15:00:36 by csakamot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "structure.hpp"
#include "Contact.hpp"

class	PhoneBook: Contact{
	private:
		int				count;
		Contact			emptycontact;
		Contact 		contacts[MAX_CONTACT];

	public:
		PhoneBook(){}

		bool	addContact(const Contact &contact){
			contacts[count] = contact;
			count++;
			return true;
		}

		const Contact	&getContact(int index){
			if (0 <= index && index <= MAX_CONTACT)
				return contacts[index];
			return emptycontact;
		}
};
