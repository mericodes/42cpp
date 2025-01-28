/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 08:44:19 by codespace         #+#    #+#             */
/*   Updated: 2025/01/23 15:50:09 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

# include <iostream>
# include <algorithm>
# include <list>
# include <vector>
# include <set>

template <typename T>
int easyfind(T &cont, int tofind)
{
	typename T::iterator	it = std::find(cont.begin(), cont.end(), tofind);

	if (it == cont.end())
		throw std::out_of_range("Value not found");
	return (std::distance(cont.begin(), it));
}

#endif