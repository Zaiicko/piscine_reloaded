/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaiicko <meskrabe@student.s19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 16:27:35 by zaiicko           #+#    #+#             */
/*   Updated: 2024/04/06 23:43:48 by zaiicko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(2, &str[i], 1);
		i++;
	}
}

int	main(int ac, char **av)
{
	int		f;
	char	c;

	if (ac < 2)
		ft_putstr("File name missing.\n");
	else if (ac > 2)
		ft_putstr("Too many arguments.\n");
	else
	{
		f = open(av[1], O_RDONLY);
		if (f < 0)
			ft_putstr("Cannot read file.\n");
		else
		{
			while (read(f, &c, 1))
				ft_putchar(c);
			close(f);
		}
	}
	return (0);
}
