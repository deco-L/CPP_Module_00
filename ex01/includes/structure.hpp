/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   structure.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csakamot <csakamot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 14:21:20 by csakamot          #+#    #+#             */
/*   Updated: 2024/02/16 17:31:08 by csakamot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCTURE_H
# define STRUCTURE_H

# include <string>
# include <iostream>

# define MAX_CONTACT	8
# define ADD			"ADD"
# define SEARCH			"SEARCH"
# define EXIT			"EXIT"
# define REGISTER		"Register your contact information"
# define LAST_NAME		"Please enter your last name"
# define FIRST_NAME		"Please enter your first name"
# define NICKNAME		"Please enter your nickname"
# define PHONENUMBER	"Please enter your phone number"
# define SECRET			"Please enter your darkest secret"
# define REGISTER_END	"The contact have been registered."
# define DISPLAY		"Displays registered contacts"

struct ContactInfo{
	std::string	family_name;
	std::string	first_name;
	std::string	nickname;
	std::string	phonenumber;
	std::string	dark_secret;
};

#endif
