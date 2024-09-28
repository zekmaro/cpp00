/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   includes.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anarama <anarama@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 20:22:36 by anarama           #+#    #+#             */
/*   Updated: 2024/09/28 20:22:37 by anarama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX01_HPP
# define EX01_HPP

# include "PhoneBook.hpp"

# define ERROR_EMPTY_STRING "Too bad :_). No empty strings allowed"
# define ERROR_WRONG_NUMBER "TOO BAD! Wrong number! Try again. (Only digits are allowed)"
# define ERROR_GETLINE "Get line failed"
# define ERROR_EOF "Input stream was ended with CTRL-D"

void	handle_main_loop(PhoneBook phone_book);

#endif //EX01_HPP