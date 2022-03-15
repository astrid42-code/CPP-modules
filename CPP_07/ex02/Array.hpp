#ifndef ARRAY_HPP
#define ARRAY_HPP

# include <iostream>
# include <cstdlib>
# include <time.h>
# include <iomanip>

template< typename T >

class Array{
	public:
		Array() : _size(0){
			_array = new T[_size];
		}
		Array(unsigned int n) : _size(n){
			if (_size < 0)
				throw IndexNull();
			_array = new T[n]; // _array est alloue a la taille n de type T
		}
		Array(const Array & array_cp) : _size(array_cp._size){ // deep copy
			if (_size < 0)
				throw IndexNull();
			_array = new T[_size];
		}
		~Array(){
			delete [] _array;
		};

		Array & operator=(const Array & array_op){
			_size = array_op._size;
			delete [] _array;
			_array = new T[_size];
			return (*this);
		}

		T & operator[](unsigned int index){
			if (_size <= 0)
				throw IndexNull();
			if (index > _size - 1){
				throw IndexTooHigh();
			}
			return (_array[index]);
		}

		class IndexTooHigh : public std::exception{
			public:
				virtual const char * what() const throw(){
					return ("Index too high");
				}
		};

		class IndexNull : public std::exception{
			public:
				virtual const char * what() const throw(){
					return ("Index null");
				}
		};

		unsigned int	size() const{
			return (_size);
		}


	private:
		unsigned int	_size;
		T	 			*_array;
};

#endif