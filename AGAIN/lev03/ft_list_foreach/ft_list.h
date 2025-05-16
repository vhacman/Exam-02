/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhacman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 12:40:04 by vhacman           #+#    #+#             */
/*   Updated: 2025/05/16 12:46:29 by vhacman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
#define FT_LIST_H

typedef struct s_list
{
	struct s_list	*next;
	void		*data;
}		t_list;

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

#endif
