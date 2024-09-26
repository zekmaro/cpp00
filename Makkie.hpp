/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Makkie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anarama <anarama@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 20:27:37 by anarama           #+#    #+#             */
/*   Updated: 2024/09/26 20:49:45 by anarama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAKKIE_HPP
# define MAKKIE_HPP


# include <string>

# define DEFAULT_NAME "pes"

class Makkie {
	private:
		std::string _name;
	public:
		Makkie(void);
		Makkie(std::string name);
		~Makkie();
		std::string	getName() const;
		void		setName(std::string new_name);
};


#endif // MAKKIE_HPP