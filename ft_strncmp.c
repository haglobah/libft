/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhagenlo <bhagenlo@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 19:10:18 by bhagenlo          #+#    #+#             */
/*   Updated: 2022/04/04 19:08:10 by bhagenlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	unsigned char	*d_s1;
	unsigned char	*d_s2;

	d_s1 = (unsigned char *) s1;
	d_s2 = (unsigned char *) s2;
	i = 0;
	while (i < n)
	{
		if (s1[i] != s2[i])
			return (d_s1[i] - d_s2[i]);
		if (!s1[i])
			break ;
		i++;
	}
	return (0);
}

int	ft_strcmp(char *s1, char *s2)
{
	unsigned char	*u1;
	unsigned char	*u2;

	u1 = (unsigned char *)s1;
	u2 = (unsigned char *)s2;
	while (*u1 && *u2)
	{
		if (*u1 != *u2)
			return (*u1 - *u2);
		u1++;
		u2++;
	}
	return (*u1 - *u2);
}
