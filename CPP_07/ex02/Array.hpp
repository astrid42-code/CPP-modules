#ifndef ARRAY_HPP
#define ARRAY_HPP

# include <iostream>
# include <cstdlib>
# include <time.h>

template< typename T >

class Array{
	public:
		Array();
		Array(unsigned int n) : _size(n){
			_array = new T[n]; // _array est alloue a la taille n de type T
		}
		Array(const Array & array_cp) : _size(array_cp._size){ // deep copy
			// delete _array;
			_array = new T[_size];
		}
		~Array();

		Array & operator=(const Array & array_op){
			_size = array_op._size;
			delete _array;
			_array = new T[_size];
			return (*this);
		}

		unsigned int	size() const{
			return (_size);
		}


	private:
		unsigned int	_size;
		T	 			*_array;
};

#endif