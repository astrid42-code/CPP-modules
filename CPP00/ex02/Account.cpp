/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astridgaultier <astridgaultier@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 10:13:52 by astridgault       #+#    #+#             */
/*   Updated: 2022/02/05 13:24:01 by astridgault      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "account.h"

// données globales, utilisées pour différentes fcts
int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(){
}

Account::Account(int initial_deposit){
    
}

Account::~Account(void){

}

static void	Account::displayAccountsInfos(void){
    //enregistrer les infos (index et amount) des 8 comptes
}

void	displayStatus( void ) const{
    //effectuer l'affichage des données dans "for_eacg"
}