/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astridgaultier <astridgaultier@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 21:03:26 by astridgault       #+#    #+#             */
/*   Updated: 2022/03/18 08:59:46 by astridgault      ###   ########.fr       */
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

	std::cout << "<<<<< Test 2 >>>>>" << std::endl;
	// test a faire avec une liste (mais sans mutantstack?)
	std::list<int>	l1;
	std::list<int>::iterator	itl;
	
	srand(time(NULL));
	for (int i = 0; i < 12; i++){
		l1.push_back(rand() % 12);
	}
	std::cout << "l1 = ";
	for (itl = l1.begin(); itl != l1.end(); ++itl){
		std::cout << *itl << ", ";	
	}
	std::cout << "Size list l1 : " << l1.size() << std::endl;
	
	std::list<int>::iterator it_l = l1.begin();
	std::list<int>::iterator ite_l = l1.end();
	
	std::cout << "list iterator begin-end : " << std::endl;
	++it_l;
	--it_l;
	//--ite;

	while (it_l != ite_l)
	{
		std::cout << *it_l << ", ";
		++it_l;
	}
	std::cout << std::endl;
	std::list<int>::reverse_iterator rit_l = l1.rbegin();
	std::list<int>::reverse_iterator rite_l = l1.rend();
	
	std::cout << "list reverse iterator begin-end : " << std::endl;
	++rit;
	--rit;
	--rite;

	while (rit_l != rite_l)
	{
		std::cout << *rit_l << ", ";
		++rit_l;
	}
	std::cout << std::endl;
	return 0;
}