/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asgaulti <asgaulti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 18:22:10 by astridgault       #+#    #+#             */
/*   Updated: 2022/03/12 16:35:29 by asgaulti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <cstdlib>
# include <time.h>

// forme canonique de Coplien à ne pas faire dans cet ex (voir sujet)
// le dynamic cast se fait uniquement à l'exécution (et non à la compilation)


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
	// créer des ptrs sur A, B, C puis vérifier en les castant par ptr (vers une adresse de mon objet) lequel est correct
	A *a; 
	B *b;
	C *c;
	
	if ((a = dynamic_cast<A *>(p)) != NULL)
		std::cout << "Conversion to A ptr is successfull" << std::endl;
	else if ((b = dynamic_cast<B *>(p)) != NULL)
		std::cout << "Conversion to B ptr is successfull" << std::endl;
	else if ((c = dynamic_cast<C *>(p)) != NULL)
		std::cout << "Conversion to C ptr is successfull" << std::endl;
	else // si c'est NULL ie si la conversion n'a pas été possible
		std::cout << "Conversion failed" << std::endl;
}

// try catch (car une réf ne peut être nulle (enfin si mais non...) et donc en cas de nul, ça sort avec l'exception)
// ATTENTION : interdit d'utiliser le catch (std::badcast) car dans la lib typeinfo
// donc uniquement catch (...) et faire le msg d'exception
void	identify(Base& p){
	// créer des objets de class A B C
	// puis caster ces nouveaux objets pour voir si le cast par réf fctionne ou pas (si le type est bon ou non)
	A a;
	B b;
	C c;
	try{
		a = dynamic_cast<A &>(p); 
		std::cout << "Conversion to A ref is successfull" << std::endl;
	}
	catch (...)
	{
		try{
			b = dynamic_cast<B &>(p);
			std::cout << "Conversion to A ref failed" << std::endl;
			std::cout << "Conversion to B ref is successfull" << std::endl;
		}
		catch (...)
		{
			try{
				c = dynamic_cast<C &>(p);
				std::cout << "Conversion to A and B ref failed" << std::endl;
				std::cout << "Conversion to C ref is successfull" << std::endl;
			}
			catch (...){
				std::cout << "Conversion failed" << std::endl;
			}
		}
	}
}

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
	std::cout << std::endl;
	std::cout << "<<<<<<<<<< References tests >>>>>>>>>>" << std::endl;
	for (int i = 1; i < 5; i++){
		std::cout << "test " << i << std::endl;
		base = generate();
		identify(*base); // * pour récupérer la référence sur base
		std::cout << std::endl;
	}
	delete base;
	return (0);
}