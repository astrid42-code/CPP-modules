/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astridgaultier <astridgaultier@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 21:03:26 by astridgault       #+#    #+#             */
/*   Updated: 2022/03/17 14:58:42 by astridgault      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

// exemple de main (à augmenter en changeant stack par list et autre trucs)
int main()
{

	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	mstack.pop();
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	std::cout << "Top : " << mstack.top() << std::endl;
	std::cout << "Size : " << mstack.size() << std::endl;
	
	MutantStack<int>::iter it = mstack.begin();
	MutantStack<int>::iter ite = mstack.end();
	
	std::cout << "iterator begin-end : " << std::endl;
	++it;
	--it;
	//--ite;

	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	MutantStack<int>::rev_iter rit = mstack.rbegin();
	MutantStack<int>::rev_iter rite = mstack.rend();
	
	std::cout << "reverse iterator begin-end : " << std::endl;
	++rit;
	--rit;
	--rite;

	while (rit != rite)
	{
		std::cout << *rit << std::endl;
		++rit;
	}
	std::stack<int> s(mstack);
	return 0;
}