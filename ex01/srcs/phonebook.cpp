/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csakamot <csakamot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 14:21:20 by csakamot          #+#    #+#             */
/*   Updated: 2024/02/16 17:37:33 by csakamot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

static void	print_phonebook(PhoneBook *phonebook, Print *print)
{
	Contact	tmp;

	print->draw_terminal_line();
	std::cout << DISPLAY << std::endl;
	for (int index = 0; index < MAX_CONTACT; index++){
		tmp = phonebook->getContact(index);
		std::cout << tmp.info.family_name << std::endl;
		std::cout << tmp.info.first_name << std::endl;
		std::cout << tmp.info.nickname << std::endl;
		std::cout << tmp.info.phonenumber << std::endl;
		std::cout << tmp.info.dark_secret << std::endl;
	}
	print->draw_terminal_line();
	return ;
}

int	main(void)
{
	PhoneBook	phonebook;
	Contact		contact;
	std::string	readcommand;
	Print		print;

	print.get_term_line();
	while (true)
	{
		std::cin >> readcommand;
		if (readcommand == ADD){
			print.draw_terminal_line();
			contact.inputContactInfo(contact.info);
			print.draw_terminal_line();
			phonebook.addContact(contact);
		}
		else if (readcommand == SEARCH){
			print_phonebook(&phonebook, &print);
		}
		else if (readcommand == EXIT)
			break ;
	}
	return (EXIT_SUCCESS);
}
