/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csakamot <csakamot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 14:21:20 by csakamot          #+#    #+#             */
/*   Updated: 2024/02/19 13:27:02 by csakamot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

static void	print_phonebook(PhoneBook *phonebook) {
	int		index;
	Contact	tmp;

	Print::draw_terminal_line();
	std::cout << INDEX << std::endl;
	std::cin >> index;
	if (std::cin.fail() || index < 1 || index > 8) {
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cout << INDEX_ERR << std::endl;
		Print::draw_terminal_line();
		return ;
	}
	std::cout << DISPLAY << std::endl;
	tmp = phonebook->getContact(index - 1);
	Print::print_row(phonebook->getindex(index), false);
	Print::print_row(tmp.info.first_name, false);
	Print::print_row(tmp.info.last_name, false);
	Print::print_row(tmp.info.nickname, true);
	Print::draw_terminal_line();
	return ;
}

int	main(void) {
	PhoneBook	phonebook;
	Contact		contact;
	std::string	readcommand;

	while (true) {
		std::cin >> readcommand;
		if (readcommand == ADD) {
			Print::draw_terminal_line();
			contact.inputContactInfo(contact.info);
			Print::draw_terminal_line();
			phonebook.addContact(contact);
		}
		else if (readcommand == SEARCH) {
			print_phonebook(&phonebook);
		}
		else if (readcommand == EXIT)
			break ;
	}
	return (EXIT_SUCCESS);
}
