/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csakamot <csakamot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 14:21:20 by csakamot          #+#    #+#             */
/*   Updated: 2024/04/29 13:55:21 by csakamot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "Print.hpp"

bool	Contact::inputContactInfo() {
	std::cout << REGISTER << std::endl;
	std::cout << FIRST_NAME << std::endl;
	std::cin >> info.first_name;
	if (std::cin.fail())
		return (false);
	std::cout << LAST_NAME << std::endl;
	std::cin >> info.last_name;
	if (std::cin.fail())
		return (false);
	std::cout << NICKNAME << std::endl;
	std::cin >> info.nickname;
	if (std::cin.fail())
		return (false);
	std::cout << PHONENUMBER << std::endl;
	std::cin >> info.phonenumber;
	if (std::cin.fail())
		return (false);
	std::cout << SECRET << std::endl;
	std::cin >> info.dark_secret;
	if (std::cin.fail())
		return (false);
	std::cout << REGISTER_END << std::endl;
	return (true);
}
