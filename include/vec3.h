/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec3.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crenault <crenault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/12 22:27:27 by crenault          #+#    #+#             */
/*   Updated: 2016/02/07 21:41:55 by crenault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VEC3_H
# define VEC3_H

# ifdef __cplusplus
extern "C" {
# endif

/*
** vec3 struct
*/
typedef struct		s_vec3
{
	float			x;
	float			y;
	float			z;

}					t_vec3;

/*
** vec3/simple.c
*/
t_vec3				vec3(float x, float y, float z);
t_vec3				vec3_normal(t_vec3 vector);
float				vec3_len(t_vec3 vec);

/*
** vec3/operators.c
*/
t_vec3				vec3_add(t_vec3 vec_a, t_vec3 vec_b);
t_vec3				vec3_sub(t_vec3 vec_a, t_vec3 vec_b);

/*
** vec3/advanced.c
*/
t_vec3				vec3_cross(t_vec3 vec_a, t_vec3 vec_b);
float				vec3_dot(t_vec3 vec_a, t_vec3 vec_b);

# ifdef __cplusplus
}
# endif

#endif
