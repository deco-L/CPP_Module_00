/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csakamot <csakamot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 14:21:20 by csakamot          #+#    #+#             */
/*   Updated: 2024/02/17 01:56:00 by csakamot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

static void	print_phonebook(PhoneBook *phonebook, Print *print)
{
	int		index;
	Contact	tmp;

	print->draw_terminal_line();
	std::cout << INDEX << std::endl;
	std::cin >> index;
	if (std::cin.fail() || index < 1 || index > 8){
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		print->draw_terminal_line();
		return ;
	}
	std::cout << DISPLAY << std::endl;
	tmp = phonebook->getContact(index - 1);
	print->print_row(phonebook->getindex(index), false);
	print->print_row(tmp.info.first_name, false);
	print->print_row(tmp.info.last_name, false);
	print->print_row(tmp.info.nickname, true);
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
