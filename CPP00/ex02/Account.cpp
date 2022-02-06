/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astridgaultier <astridgaultier@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 10:13:52 by astridgault       #+#    #+#             */
/*   Updated: 2022/02/06 19:25:01 by astridgault      ###   ########.fr       */
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
// + calcule au fur et à mesure les données globales (les infos générales calculées après chaque action)
Account::Account(int initial_deposit) : _accountIndex(0), _amount(0),
	_nbDeposits(0), _nbWithdrawals(0){
    // lancer l'index et les données qui vont avec pour chaque compte (et donc chaque instance de ma classe)
    Account::_accountIndex = _nbAccounts; // initialise pour chaque instance l'index
    _nbAccounts++; // puis incrémente la globale pour l'instance suivante
	_amount = initial_deposit; // initialiser amount de l'instance a l'initial deposit
	Account::_totalAmount += checkAmount(); // ajouter au fur et à mesure les montants des comptes
	Account::_totalNbDeposits += getNbDeposits(); // ajouter le nombre de depots
	Account::_totalNbWithdrawals += getNbWithdrawals();
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
	std::cout << "index:" << this->_accountIndex;
	std::cout << ";amount:" << this->_amount;
    std::cout << ";closed" << std::endl;
}

// comment cela se fait il qu'on doive changer de static à non static
// entre la déclaration dans la classe et le .cpp??
//afficher le statut actuel de l'ensemble des comptes
// ex [19920104_091532] accounts:8;total:20049;deposits:0;withdrawals:0
void	Account::displayAccountsInfos(void){
	Account::_displayTimestamp();
	std::cout << "accounts:" << Account::getNbAccounts();
	std::cout << ";total:" << Account::getTotalAmount();
	std::cout << ";deposits:" << Account::getNbDeposits();
	std::cout << ";withdrawals:" << Account::getNbWithdrawals();
	std::cout << std::endl;
}

//effectuer l'affichage des données dans "for_each"
void	Account::displayStatus(void) const{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex;
	std::cout << ";amount:" << this->_amount;
	std::cout << ";deposits:" << this->_nbDeposits;
	std::cout << ";withdrawals:" << this->_nbWithdrawals;
	std::cout << std::endl;
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

int		Account::checkAmount( void ) const{
	return (this->_amount);		
}

// etape 3 : faire les depots (et calculs associés) et afficher
// calculs associes : augmenter les globales concernees (amount et totalNbDeposits)
void	Account::makeDeposit( int deposit ){
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex;
	std::cout << ";p_amount:" << this->_amount; // previous amount
	std::cout << ";deposit:" << deposit;
	_amount += deposit;
	Account::_totalAmount += deposit;
	std::cout << ";amount:" << this->_amount;
	if (deposit != 0){
		Account::_nbDeposits++;
		Account::_totalNbDeposits++;
	}
	std::cout << ";nb_deposits:" << _nbDeposits;
	std::cout << std::endl;
}

// etape 4 : faire les retraits (et calculs associes) et les afficher
// calculs associes : augmenter les globales concernees (amount et totalNbWithdrawals)
bool	Account::makeWithdrawal( int withdrawal ){
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex;
	std::cout << ";p_amount:" << this->_amount; // previous amount
	if (withdrawal > this->_amount){
		std::cout << ";withdrawal:refused" << std::endl;
		return (0);
	}
	std::cout << ";withdrawal:" << withdrawal;
	_amount -= withdrawal;
	Account::_totalAmount -= withdrawal;
	std::cout << ";amount:" << this->_amount;
	if (withdrawal != 0){
		Account::_nbWithdrawals++;
		Account::_totalNbWithdrawals++;
	}
	std::cout << ";nb_withdrawals:" << _nbWithdrawals;
	std::cout << std::endl;
	return (1);
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
