/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Print.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csakamot <csakamot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 14:21:20 by csakamot          #+#    #+#             */
/*   Updated: 2024/02/19 21:12:03 by csakamot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef PRINT_H
#define PRINT_H

#include "structure.hpp"
#include <sys/ioctl.h>
#include <unistd.h>
#include <iostream>
#include <cstddef>

class Print{
public:

	static size_t	get_term_line();
	static void	draw_terminal_line();
	static void	print_row(std::string str, bool flag);

};

#endif
