/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astridgaultier <astridgaultier@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 18:22:10 by astridgault       #+#    #+#             */
/*   Updated: 2022/03/12 11:53:42 by astridgault      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <cstdlib>
# include <time.h>

// forme canonique de Coplien à ne pas faire dans cet ex (voir sujet)

class Base{
	public:
		virtual ~Base() {}; // ajout de {} car sinon le constructeur par défault n'est pas défini
		// cf https://stackoverflow.com/questions/31861803/a-missing-vtable-usually-means-the-first-non-inline-virtual-member-function-has
};

class A : public Base {};
class B : public Base {};
class C : public Base {};

Base	*generate(void){
	// créer aléatoirement une des 3 classes enfants (A, B ou C)
	// voir https://www.cplusplus.com/reference/cstdlib/rand/
	// puis la retourne en pointeur sur Base
	Base	*base = NULL; // nécessité d'initialiser à NULL si les randoms ne marchent pas
	int		random;
	
	random = rand() % 3; // génère un nombre random entre 0 et 3
	if (random == 0){
		base = new A;
		std::cout << "A instance created" << std::endl;
	}
	else if (random == 1){
		base = new B;
		std::cout << "B instance created" << std::endl;
	}
	else if (random == 2){
		base = new C;
		std::cout << "C instance created" << std::endl;
	}
	return (base);
}

// if else
void	identify(Base* p){
	// reçoit le ptr sur la base créée dans generate
	if (dynamic_cast<A *>(p) != NULL)
		std::cout << "Conversion to A ptr is successfull" << std::endl;
	else if (dynamic_cast<B *>(p) != NULL)
		std::cout << "Conversion to B ptr is successfull" << std::endl;
	else if (dynamic_cast<C *>(p) != NULL)
		std::cout << "Conversion to C ptr is successfull" << std::endl;
	else
		std::cout << "No instance has been defined" << std::endl;
}

// try catch
//void	identify(Base& p);

int main (void){
	Base	*base;

	srand(time(NULL)); // initialise le mode random
	std::cout << "<<<<<<<<<< Pointers tests >>>>>>>>>>" << std::endl;
	for (int i = 1; i < 5; i++){
		std::cout << "test " << i << std::endl;
		base = generate();
		identify(base);
		std::cout << std::endl;
	}
//	identify(&base);
	delete base;
	return (0);
}