/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Print.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csakamot <csakamot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 14:21:20 by csakamot          #+#    #+#             */
/*   Updated: 2024/04/29 17:35:58 by csakamot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef PRINT_H
#define PRINT_H

#include "Contact.hpp"
#include "PhoneBook.hpp"
#include <sys/ioctl.h>
#include <unistd.h>
#include <iostream>
#include <cstddef>

class Print{
public:

	static size_t	get_term_line( void );
	static void	draw_terminal_line( void );
  static bool print_contact( int index , PhoneBook& list );
	static void	print_column( std::string str, bool flag );
  static bool print_row( int index, PhoneBook& list);
  static void print_list( int index, PhoneBook& list);
};

#endif
