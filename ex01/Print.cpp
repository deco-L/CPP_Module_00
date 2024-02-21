/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Print.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csakamot <csakamot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 14:21:20 by csakamot          #+#    #+#             */
/*   Updated: 2024/02/19 21:11:40 by csakamot         ###   ########.fr       */
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

void	Print::print_row(std::string str, bool flag) {
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
