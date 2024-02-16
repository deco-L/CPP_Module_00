/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Print.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csakamot <csakamot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 14:21:20 by csakamot          #+#    #+#             */
/*   Updated: 2024/02/17 00:58:29 by csakamot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINT_H
# define PRINT_H

# include "structure.hpp"
# include <sys/ioctl.h>
# include <unistd.h>
# include <iostream>
# include <cstddef>

class Print{
	public:
		size_t	terminal_col;
		winsize terminal_size;

		size_t	get_term_line(){
			ioctl(STDOUT_FILENO, TIOCGWINSZ, &terminal_size);
			terminal_col = terminal_size.ws_col;
			return (terminal_col);
		}

		void	draw_terminal_line(){
			for (size_t i = 0; i < terminal_col; i++)
				std::cout << "=";
			std::cout << std::endl;
			return ;
		}

		void	print_row(std::string str, bool flag){
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
};

#endif
