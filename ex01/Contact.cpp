/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csakamot <csakamot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 14:21:20 by csakamot          #+#    #+#             */
/*   Updated: 2024/02/19 21:10:51 by csakamot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void	Contact::inputContactInfo() {
	std::cout << REGISTER << std::endl;
	std::cout << FIRST_NAME << std::endl;
	std::cin >> info.first_name;
	std::cout << LAST_NAME << std::endl;
	std::cin >> info.last_name;
	std::cout << NICKNAME << std::endl;
	std::cin >> info.nickname;
	std::cout << PHONENUMBER << std::endl;
	std::cin >> info.phonenumber;
	std::cout << SECRET << std::endl;
	std::cin >> info.dark_secret;
	std::cout << REGISTER_END << std::endl;
	return ;
}
