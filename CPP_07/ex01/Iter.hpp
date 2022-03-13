#ifndef ITER_HPP
#define ITER_HPP

# include <iostream>

template< typename T >
void	writeTab(T const & tab){
	std::cout << tab << std::endl;
}

template< typename T >
void	iter(T const tab[], const int n, void writeTab(T const &)){
	for (int i = 0; i < n; i++){
		writeTab(tab[i]);
	}
}

#endif