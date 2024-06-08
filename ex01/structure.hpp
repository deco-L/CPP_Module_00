/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   structure.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csakamot <csakamot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 14:21:20 by csakamot          #+#    #+#             */
/*   Updated: 2024/06/08 15:45:12 by csakamot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCTURE_H
#define STRUCTURE_H

#include <string>
#include <iostream>

#define MAX_CONTACT	8
#define COL_LEN		10
#define MANUAL        "Enter ADD or SEARCH or EXIT."
#define ADD			      "ADD"
#define SEARCH			  "SEARCH"
#define EXIT			    "EXIT"
#define REGISTER		  "Register your contact information."
#define INDEX			    "Please enter the index of contacts \
you would like to display. (1 ~ 8)"
#define ERROR         "Error cin failed."
#define INDEX_ERR		  "Please enter an index from one to eight."
#define NO_CONTACTS   "No contacts registered."
#define FIRST_NAME		"Please enter your first name."
#define LAST_NAME		  "Please enter your last name."
#define NICKNAME		  "Please enter your nickname."
#define PHONENUMBER	  "Please enter your phone number."
#define SECRET			  "Please enter your darkest secret."
#define REGISTER_END	"The contact have been registered."
#define DISPLAY		    "Displays registered contacts."

struct ContactInfo
{
	std::string	first_name;
	std::string	last_name;
	std::string	nickname;
	std::string	phonenumber;
	std::string	dark_secret;

	ContactInfo() :
	first_name(""),
	last_name(""),
	nickname(""),
	phonenumber(""),
	dark_secret("") {}
};

#endif
