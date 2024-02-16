/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Print.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csakamot <csakamot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 14:21:20 by csakamot          #+#    #+#             */
/*   Updated: 2024/02/16 17:11:10 by csakamot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINT_H
# define PRINT_H

# include <sys/ioctl.h>
# include <unistd.h>
# include <iostream>
# include <cstddef>

class Print{
	public:
		size_t	terminal_col;
		winsize terminal_size;

		size_t	get_term_line(void){
			ioctl(STDOUT_FILENO, TIOCGWINSZ, &terminal_size);
			terminal_col = terminal_size.ws_col;
			return (terminal_col);
		}

		void	draw_terminal_line(void){
			for (size_t i = 0; i < terminal_col; i++)
				std::cout << "=";
			std::cout << std::endl;
		}
};

#endif
