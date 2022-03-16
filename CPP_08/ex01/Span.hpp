#ifndef SPAN_HPP
#define SPAN_HPP

# include <iostream>
# include <vector>
# include <list>
# include <cstdlib>
# include <ctime>

class Span{
	public:
		Span(unsigned int N);
		Span(const Span & span_cp);
		~Span();

		Span & operator=(const Span &span_op);

		void	addNumber(int nb);
		int		shortestSpan();
		int		longestSpan();

		class	FullSpan : public std::exception{
			public:
				virtual const char * what() const throw(){
					return ("Span is already full");
				}
		};

		class	NoDistance : public std::exception{
			public:
				virtual const char * what() const throw(){
					return ("No distance can be find");
				}
		};

	private:
		unsigned int	_n;
		Span();

};

#endif