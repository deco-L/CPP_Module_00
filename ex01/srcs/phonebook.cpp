/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csakamot <csakamot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 14:21:20 by csakamot          #+#    #+#             */
/*   Updated: 2024/02/16 15:02:07 by csakamot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int	main(void)
{
	PhoneBook	phonebook;
	Contact		contact;
	Contact		tmp;
	std::string	readcommand;

	while (true)
	{
		std::cin >> readcommand;
		if (readcommand == ADD){
			std::cout << "add" << std::endl;
			std::cin >> contact.info.family_name;
			std::cin >> contact.info.first_name;
			std::cin >> contact.info.nickname;
			std::cin >> contact.info.phonenumber;
			std::cin >> contact.info.dark_secret;
			phonebook.addContact(contact);
		}
		else if (readcommand == SEARCH){
			std::cout << "search" << std::endl;
			tmp = phonebook.getContact(0);
			std::cout << tmp.info.family_name;
			std::cout << tmp.info.first_name;
			std::cout << tmp.info.nickname;
			std::cout << tmp.info.phonenumber;
			std::cout << tmp.info.dark_secret;
		}
		else if (readcommand == EXIT){
			std::cout << "exit" << std::endl;
			break ;
		}
	}
	return (EXIT_SUCCESS);
}
