/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   book.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smago <smago@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 13:04:11 by smago             #+#    #+#             */
/*   Updated: 2021/02/06 12:53:39 by smago            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BOOK_HPP
# define BOOK_HPP

# include "all.hpp"

class book
{
public:
	book(void);
	~book();
	size_t new_contact_info(int index);
	void display_list(void);
	void display_all(void);

private:
	int index;
	std::string fields[11];
	void display_names(std::string str);
};


#endif
