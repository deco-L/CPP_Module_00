/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csakamot <csakamot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 14:21:20 by csakamot          #+#    #+#             */
/*   Updated: 2024/02/19 12:57:13 by csakamot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef CONTACT_H
#define CONTACT_H

#include "structure.hpp"

class	Contact {
public:
	ContactInfo info;

	Contact() : info() {}

	void	inputContactInfo(ContactInfo &input) {
		std::cout << REGISTER << std::endl;
		std::cout << FIRST_NAME << std::endl;
		std::cin >> input.first_name;
		std::cout << LAST_NAME << std::endl;
		std::cin >> input.last_name;
		std::cout << NICKNAME << std::endl;
		std::cin >> input.nickname;
		std::cout << PHONENUMBER << std::endl;
		std::cin >> input.phonenumber;
		std::cout << SECRET << std::endl;
		std::cin >> input.dark_secret;
		std::cout << REGISTER_END << std::endl;
	}
};

#endif
