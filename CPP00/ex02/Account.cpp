/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astridgaultier <astridgaultier@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 10:13:52 by astridgault       #+#    #+#             */
/*   Updated: 2022/02/06 13:15:50 by astridgault      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "account.hpp"
#include <iomanip> //setfill et setw
#include <iostream> //standard lib


// données globales, utilisées pour différentes fcts
int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

// Constructeur par defaut
// quand j appelle ma classe pour creer une instance avec aucun parametre
Account::Account(): _accountIndex(0), _amount(0),
	_nbDeposits(0), _nbWithdrawals(0){
	
}

// Constructeur avec surcharge 
// (pour les fois ou on envoie un ou des parametres en creant l instance de classe)
Account::Account(int initial_deposit) : _accountIndex(0), _amount(0),
	_nbDeposits(0), _nbWithdrawals(0){
    
}

// destructeur pour supprimer de la memoire ce qui est dans les objets crees
// generelament delete pour les malloc et autres verifications
//  un seul destructeur a faire
// ne peut etre surcharge
// peut etre vide (ici necessite de detruire les objets crees)
Account::~Account(void){

}

//enregistrer les infos (index et amount) des 8 comptes
static void	Account::displayAccountsInfos(void){
	
}

//effectuer l'affichage des données dans "for_each"
void	Account::displayStatus(void) const{
}

static int	Account::getNbAccounts(void){
	return (Account::_nbAccounts);
}

static int	Account::getTotalAmount(void){
	return (Account::_totalAmount);
}

static int	Account::getNbDeposits(void){
	return (Account::_totalNbDeposits;)
}

static int	Account::getNbWithdrawals(void){
	return (Account::_totalNbWithdrawals);
}

//setfill pour donner les char à mettre (pk setfill('0')?)
//setw pour dire combien
// time pour récuperer le current time
static void	_displayTimestamp(void){
    time_t  time_ptr;
    tm  *tm_local;
    
    time(&time_ptr);
    tm_local = localtime(&time_ptr);
	std::cout << "[";
    std::cout << std::setfill('0') << std::setw (4) << tm_local->tm->year;
    std::cout << std::setfill('0') << std::setw (2) << tm_local->tm_month;
    std::cout << std::setfill('0') << std::setw (2) << tm_local->tm_day;
    std::cout << "_";
    std::cout << std::setfill('0') << std::setw (2) << tm_local->tm_hour;
    std::cout << std::setfill('0') << std::setw (2) << tm_local->tm_min;
    std::cout << std::setfill('0') << std::setw (2) << tm_local->tm_sec;
    std::cout << "] ";
}

