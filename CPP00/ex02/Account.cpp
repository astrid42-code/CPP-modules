/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astridgaultier <astridgaultier@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 10:13:52 by astridgault       #+#    #+#             */
/*   Updated: 2022/02/06 16:25:14 by astridgault      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iomanip> //setfill et setw
#include <iostream> //standard lib


// données globales, utilisées pour différentes fcts
// informations générales sur l'ensemble des comptes
// à la différence des données non globales (accountindex, amount, ...) 
// qui seront utilisées pour chaque compte
// et set en fct des données envoyées pour chaque instance
int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

// Constructeur avec surcharge 
// (pour les fois ou on envoie un ou des parametres en creant l instance de classe)
// se lance à la création de chaque objet, donc imprimer ici les 8 premières lignes du log
Account::Account(int initial_deposit) : _accountIndex(0), _amount(0),
	_nbDeposits(0), _nbWithdrawals(0){
    // lancer l'index et les données qui vont avec pour chaque compte (et donc chaque instance de ma classe)
    Account::_accountIndex = _nbAccounts; // initialise pour chaque instance l'index
    _nbAccounts++; // puis incrémente la globale pour l'instance suivante
	_amount = initial_deposit;
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex;
	std::cout << ";amount:" << this->_amount;
    std::cout << ";created" << std::endl;
}

// destructeur pour supprimer de la memoire ce qui est dans les objets crees
// generelament delete pour les malloc et autres verifications
//  un seul destructeur a faire
// ne peut etre surcharge
// peut etre vide (ici necessite de detruire les objets crees)
Account::~Account(void){
	Account::_displayTimestamp();
//	std::cout << "index:" << this->_accountIndex;
//	std::cout << "amount:" << this->_amount;
    std::cout << ";closed" << std::endl;
}

// comment cela se fait il qu'on doive changer de static à non static
// entre la déclaration dans la classe et le .cpp??
//enregistrer les infos (index et amount) des 8 comptes
void	Account::displayAccountsInfos(void){
	
}

//effectuer l'affichage des données dans "for_each"
void	Account::displayStatus(void) const{
}

int	Account::getNbAccounts(void){
	return (Account::_nbAccounts);
}

int	Account::getTotalAmount(void){
	return (Account::_totalAmount);
}

int	Account::getNbDeposits(void){
	return (Account::_totalNbDeposits);
}

int	Account::getNbWithdrawals(void){
	return (Account::_totalNbWithdrawals);
}

//setfill pour donner les char à mettre (pk setfill('0')?)
//setw pour dire combien
// time pour récuperer le current time
void	Account::_displayTimestamp(void){
    time_t  time_ptr;
    tm  *tm_local;
    
    time(&time_ptr);
    tm_local = localtime(&time_ptr);
	std::cout << "[";
    std::cout << std::setfill('0') << std::setw (4) << 1900 + tm_local->tm_year;
    std::cout << std::setfill('0') << std::setw (2) << 1 + tm_local->tm_mon;
    std::cout << std::setfill('0') << std::setw (2) << tm_local->tm_mday;
    std::cout << "_";
    std::cout << std::setfill('0') << std::setw (2) << tm_local->tm_hour;
    std::cout << std::setfill('0') << std::setw (2) << tm_local->tm_min;
    std::cout << std::setfill('0') << std::setw (2) << tm_local->tm_sec;
    std::cout << "] ";
}

void	Account::makeDeposit( int deposit ){
	(void)deposit;
}

bool	Account::makeWithdrawal( int withdrawal ){
	(void)withdrawal;
	return (0);
}

int		Account::checkAmount( void ) const{
	return (0);		
}
