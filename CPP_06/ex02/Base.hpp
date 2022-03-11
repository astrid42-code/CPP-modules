#ifndef BASE_HPP
#define BASE_HPP

#include <iostream>

class Base{
	public:
		Base();
		Base(const Base &base_cp);
		~Base();

		Base & operator=(const Base &base_op);

		void	identify(Base* p);
		void	identify(Base& p);

	private:

};

#endif