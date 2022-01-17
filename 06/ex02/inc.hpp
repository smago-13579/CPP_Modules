/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inc.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smago <smago@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/13 17:27:33 by smago             #+#    #+#             */
/*   Updated: 2021/03/13 17:32:42 by smago            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INC_HPP
# define INC_HPP


# include <iostream>
# include <string>
# include <cstdlib>
# include "Base.hpp"
# include "A.hpp"
# include "B.hpp"
# include "C.hpp"

class Base;
class A;
class B;
class C;

Base*	generate(void);
void	identify_from_pointer(Base *p);
void	identify_from_reference(Base &p);

#endif

