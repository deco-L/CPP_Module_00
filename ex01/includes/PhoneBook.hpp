/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csakamot <csakamot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 14:21:20 by csakamot          #+#    #+#             */
/*   Updated: 2024/02/17 01:59:46 by csakamot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include "structure.hpp"
# include "Contact.hpp"
# include "Print.hpp"
# include <cstdlib>
# include <limits>
# include <sstream>

class	PhoneBook : Contact{
	private:
		int				count;
		Contact			emptycontact;
		Contact 		contacts[MAX_CONTACT];

	public:
		PhoneBook() :
		count(0),
		emptycontact(),
		contacts() {}

		bool	addContact(const Contact &contact){
			if (count == 8)
				count = 0;
			contacts[count] = contact;
			count++;
			return true;
		}

		const Contact	&getContact(int index){
			if (0 <= index && index <= MAX_CONTACT)
				return contacts[index];
			return emptycontact;
		}

		const std::string	getindex(int index){
			std::stringstream	sstream;
			sstream << index;
			return (sstream.str());
		}
};

#endif
