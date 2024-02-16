/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   structure.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csakamot <csakamot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 14:21:20 by csakamot          #+#    #+#             */
/*   Updated: 2024/02/15 18:16:34 by csakamot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>
#include <cstdlib>

#define	MAX_CONTACT	8
#define ADD			"ADD"
#define SEARCH		"SEARCH"
#define EXIT		"EXIT"

struct ContactInfo{
	std::string	family_name;
	std::string	first_name;
	std::string	nickname;
	std::string	phonenumber;
	std::string	dark_secret;
};
