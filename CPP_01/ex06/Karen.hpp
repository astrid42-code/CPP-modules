/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astridgaultier <astridgaultier@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 12:38:44 by astridgault       #+#    #+#             */
/*   Updated: 2022/02/12 12:42:11 by astridgault      ###   ########.fr       */
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

        void complain( std::string level );

    private :
        void debug( void );
        void info( void );
        void warning( void );
        void error( void );
};
//typedef void (Karen::*Karen_ptr) (void);

#endif