/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csakamot <csakamot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 14:21:20 by csakamot          #+#    #+#             */
/*   Updated: 2024/04/29 15:47:04 by csakamot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

static bool	print_phonebook(PhoneBook *phonebook) {
	int		index;
	Contact	tmp;

	Print::draw_terminal_line();
	std::cout << INDEX << std::endl;
	std::cin >> index;
	if (std::cin.fail() || index < 1 || index > 8) {
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cout << ERROR << std::endl;
		Print::draw_terminal_line();
		return (false);
	}
	std::cout << DISPLAY << std::endl;
	tmp = phonebook->getContact(index - 1);
	Print::print_row(phonebook->getindex(index), false);
	Print::print_row(tmp.info.first_name, false);
	Print::print_row(tmp.info.last_name, false);
	Print::print_row(tmp.info.nickname, true);
	Print::draw_terminal_line();
	return (true);
}

int	main(void) {
	PhoneBook	phonebook;
	Contact		contact;
	std::string	readcommand;

	while (true) {
		std::cin >> readcommand;
		if (readcommand == ADD) {
			Print::draw_terminal_line();
			if (!contact.inputContactInfo()) {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << ERROR << std::endl;
        Print::draw_terminal_line();
        return (EXIT_FAILURE);
      }
			Print::draw_terminal_line();
			phonebook.addContact(contact);
		}
		else if (readcommand == SEARCH) {
			if (!print_phonebook(&phonebook))
        return (EXIT_FAILURE);
		}
		else if (readcommand == EXIT)
			break ;
	}
	return (EXIT_SUCCESS);
}
