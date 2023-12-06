/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babonnet <babonnet@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 02:01:55 by bbonnet           #+#    #+#             */
/*   Updated: 2023/12/06 16:59:13 by babonnet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PARSING_H
#define PARSING_H

#include "fdf.h"

int is_valid_map(int fd);
t_vertex *parsing_map(char *file);
t_vertex *create_map(int fd, int size);

#endif
