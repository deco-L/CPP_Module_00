/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Print.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csakamot <csakamot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 14:21:20 by csakamot          #+#    #+#             */
/*   Updated: 2024/04/29 17:56:34 by csakamot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Print.hpp"

size_t	Print::get_term_line() {
	winsize	terminal_size;
	ioctl(STDOUT_FILENO, TIOCGWINSZ, &terminal_size);
	return (terminal_size.ws_col);
}

void	Print::draw_terminal_line() {
	size_t	terminal_col;

	terminal_col = get_term_line();
	for (size_t i = 0; i < terminal_col; i++)
		std::cout << "=";
	std::cout << std::endl;
	return ;
}

bool  Print::print_contact(int index, PhoneBook& list) {
  Contact contact;

  contact = list.getContact(index - 1);
  if (contact.info.first_name.empty())
    return (false);
  std::cout << "first_name:" << contact.info.first_name << std::endl;
  std::cout << "last_name:" << contact.info.last_name << std::endl;
  std::cout << "nickname:" << contact.info.nickname << std::endl;
  std::cout << "phonenumber:" << contact.info.phonenumber << std::endl;
  std::cout << "dark_secret:" << contact.info.dark_secret << std::endl;
  return (true);
}

void	Print::print_column(std::string str, bool flag) {
	int	space;

	space = COL_LEN - str.length();
	std::cout << '|';
	for (int index = 0; index < space; index++)
			std::cout << ' ';
	if (space > 0)
		std::cout << str;
	else if (space <= 0)
		std::cout << str.substr(0, 9) << '.';
	if (flag)
		std::cout << '|' << std::endl;
	return ;
}

bool Print::print_row(int index, PhoneBook& list) {
  Contact contact;

  contact = list.getContact(index - 1);
  if (contact.info.first_name.empty())
    return (false);
	Print::print_column(list.getindex(index), false);
	Print::print_column(contact.info.first_name, false);
	Print::print_column(contact.info.last_name, false);
	Print::print_column(contact.info.nickname, true);
  return (true);
}

void Print::print_list(int index, PhoneBook& list) {
  Contact tmp;

  if (list.getContact(index).info.first_name.empty()) {
    std::cout << NO_CONTACTS << std::endl;
    return ;
  }
  for (int i = 0; i < 45; i++)
    std::cout << '-';
  std::cout << std::endl;
  for (int i = index; i < 9; i++) {
    tmp = list.getContact(index);
    if (list.getContact(index).info.first_name.empty())
      break ;
    print_row(i, list);
  }
  for (int i = 0; i < 45; i++)
    std::cout << '-';
  std::cout << std::endl;
}
