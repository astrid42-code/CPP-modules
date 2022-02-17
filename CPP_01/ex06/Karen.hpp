/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asgaulti <asgaulti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 12:38:44 by astridgault       #+#    #+#             */
/*   Updated: 2022/02/15 18:28:58 by asgaulti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_HPP
#define KAREN_HPP

#include <iostream>
#include <string>

class Karen{
    public :
        Karen(void);
        ~Karen(void);

        void	complain(std::string level);
    private :
        void debug( void );
        void info( void );
        void warning( void );
        void error( void );
};
//typedef void (Karen::*Karen_ptr) (void);

#endif