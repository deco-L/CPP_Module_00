/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csakamot <csakamot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 14:21:20 by csakamot          #+#    #+#             */
/*   Updated: 2024/02/15 18:16:38 by csakamot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int	main(void)
{
	PhoneBook	phonebook;
	std::string	readcommand;

	while (true)
	{
		std::cin >> readcommand;
		if (readcommand == ADD)
			std::cout << "add" << std::endl;
		else if (readcommand == SEARCH)
			std::cout << "search" << std::endl;
		else if (readcommand == EXIT)
		{
			std::cout << "exit" << std::endl;
			break ;
		}
	}
	return (EXIT_SUCCESS);
}
