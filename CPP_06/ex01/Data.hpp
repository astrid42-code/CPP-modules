#ifndef DATA_HPP
#define DATA_HPP

# include <iostream>
# include <stdint.h>

class Data{

	public:
		Data();
		Data(int data);
		Data(const Data &data_cp);
		~Data();

		Data & operator=(const Data &data_op);

		int			getData() const;
		uintptr_t 	serialize(Data* ptr);
		Data* 		deserialize(uintptr_t raw);
	
	private:
	int	_data_int;
};

#endif