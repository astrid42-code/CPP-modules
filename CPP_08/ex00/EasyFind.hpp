#ifndef EASYFIND_HPP
#define EASYFIND_HPP

# include <iostream>
# include <vector>
# include <list>
# include <cstdlib>
# include <time.h>

class ValueNotFound : public std::exception{
	public:
		virtual const char * what() const throw(){
			return ("No occurrence finds");
		}
};

template< typename T >
int	easyFind(T v1, int value){
	typename T::iterator it;

	// itérer du début à la fin du tableau pour voir si on trouve la value
	it = std::find(v1.begin(), v1.end(), value);
	// si it arrive à .end(), c'est qu'il n'y a pas d'occurence
	if (it == v1.end())
		throw ValueNotFound();
	//sinon on retourne it (l'endroit où it est arrivé )
	return (*it); // pk retourne t on *it ? 
}

#endif

// find : https://www.cplusplus.com/reference/algorithm/find/?kw=find
// containers : https://www.cplusplus.com/reference/stl/

