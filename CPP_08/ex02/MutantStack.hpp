#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <iomanip>
#include <stack>
#include <iterator>

template<typename T>
class MutantStack : public std::stack<T>{ // fait hériter ma class de la classe std::stack de type T
	public:
		MutantStack(){}
		MutantStack(const MutantStack & mut_cp) : std::stack<T>(mut_cp){}
		~MutantStack(){
}

		MutantStack & operator=(const MutantStack & mut_op);

		typedef typename std::stack<T>::container_type::iterator iter; // récupérer la classe iterator (++it) pour un type de container
		typedef typename std::stack<T>::container_type::reverse_iterator rev_iter;

		iter	begin(){
			//return (this->c.begin());
			return (std::begin(this->c));
			// c est un attribut protégé (un container) de la class stack
			// la fct retourne la valeur de fin de mon container après ++it
			// attention : nécessité du this-> ici car c est extérieur à la class Mutant
		}

		iter	end(){
			//return (this->c.end());
			return (std::end(this->c));
		}

		rev_iter	rbegin(){
			return (this->c.rbegin());
		}

		rev_iter	rend(){
			return (this->c.rend());
		}

	private:

};

#endif

// https://stackoverflow.com/questions/525365/does-stdstack-expose-iterators
