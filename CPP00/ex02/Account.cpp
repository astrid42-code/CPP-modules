/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asgaulti <asgaulti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 10:13:52 by astridgault       #+#    #+#             */
/*   Updated: 2022/02/05 17:24:51 by asgaulti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "account.hpp"

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
/*
static void	_displayTimestamp(void){
	std::cout << "[" << 
}
*/