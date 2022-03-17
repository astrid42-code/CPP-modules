#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <iomanip>

class MutantStack{
	public:
		MutantStack();
		MutantStack(const MutantStack & mut_cp);
		~MutantStack();

		MutantStack & operator=(const MutantStack & mut_op);
		

	private:

};

#endif