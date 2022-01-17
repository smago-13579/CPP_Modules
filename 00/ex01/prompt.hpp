/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prompt.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smago <smago@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 13:40:16 by smago             #+#    #+#             */
/*   Updated: 2021/02/05 16:13:01 by smago            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PROMPT_HPP
# define PROMPT_HPP

# include "book.hpp"

class prompt
{
public:
	prompt(void);
	~prompt();
	void enter(void);
	int new_contact(int i);
	void search(void);

private:
	book contacts[8];
	int index;
};


#endif
