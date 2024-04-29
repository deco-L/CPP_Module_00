/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csakamot <csakamot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 14:21:20 by csakamot          #+#    #+#             */
/*   Updated: 2024/04/29 17:57:30 by csakamot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Print.hpp"

static bool	print_phonebook(PhoneBook *phonebook) {
	int		index;

  index = 0;
	Print::draw_terminal_line();
	std::cout << DISPLAY << std::endl;
  Print::print_list(index, *phonebook);
  do {
    std::cout << INDEX << std::endl;
    std::cin >> index;
    if (std::cin.fail()) {
      if (std::cin.eof())
      {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << ERROR << std::endl;
        Print::draw_terminal_line();
        return (false);
      }
      std::cin.clear();
      std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
  }
  while (index <= 0 || index > 8);
  if (!Print::print_contact(index, *phonebook))
    std::cout << NO_CONTACTS << std::endl;
	Print::draw_terminal_line();
	return (true);
}

int	main(void) {
	PhoneBook	phonebook;
	Contact		contact;
	std::string	readcommand;

  std::cout << MANUAL << std::endl;
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
