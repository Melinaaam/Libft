/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melinamotylewski <melinamotylewski@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 11:38:49 by memotyle          #+#    #+#             */
/*   Updated: 2024/07/25 19:30:33 by melinamotyl      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_attributions(va_list argument, char c)
{
	int	len;

	len = 0;
	if (c == 'c')
		len = len + ft_putchar(va_arg(argument, int));// len = len + etc... et pour mettre a jour la valeur de len
	if (c == 's')
		len = len + ft_putstr(va_arg(argument, char *));
	if (c == 'd' || c == 'i')
		len = len + ft_putnbr(va_arg(argument, int));
	if (c == 'u')
		len = len + ft_putunsi_dec(va_arg(argument, unsigned int));
	if (c == 'X')
		len = len + ft_putnbr_base("0123456789ABCDEF", va_arg(argument, int));
	if (c == 'x')
		len = len + ft_putnbr_base("0123456789abcdef", va_arg(argument, int));
	if (c == 'p')
		len = len + ft_putptr(va_arg(argument, void *), "0123456789abcdef", 0);
	if (c == '%')
		len = len + ft_putchar('%');
	return (len);//retourne len cad le nombre de caractere imprimes
}

//printf est une fonction avec un nombre d'arguments variable
//on ne connait pas en avance le nombre d'arguments, ce sera l'utilisateur qui choisira
int	ft_printf(const char *s, ...)
{
	int		i;
	va_list	argument;//declare une variabledont le nom est argument
	int		len_print;

	i = 0;
	len_print = 0;
	va_start(argument, s);//obligation si on veut utliser va_arg
	// if (!s)
	// 	return (-1);
	while (s[i])
	{
		if (s[i] == '%')
		{
			len_print = len_print + ft_attributions(argument, s[i + 1]);//si on rencontre le %, on applique la fontion ft_attributions a i+1(apres le %)
			i++;
		}
		else
			len_print = len_print + ft_putchar(s[i]);//sinon on ecrit
		i++;
	}
	va_end(argument);//obligatoire si on a utiliser va_start
	return (len_print);
}


// #include <stdio.h>
// int	main()
// {
// 	char	c = 'c';
// 	char	s = 0;
// 	char	v = '\0';
// 	char	*str = "Hello you";
// 	char	*ptr = "po";
// 	int	i = -2147483648;
// 	int	imax = 2147483647;
// 	int zero = 0;
// 	unsigned int u = 285236;
// 	int	low = 4660;
// 	int	upp = 45698123;

// 	ft_printf("Test 1 :\n");
// 	ft_printf("size ft_printf : %d\n",ft_printf("Print a char :%c\n", c));
// 	printf("size Printf : %d\n", printf("Print a char :%c\n", c));

// 	printf("\n\n");

// 	ft_printf("Test 2 :\n");
// 	ft_printf("size ft_printf : %d\n",ft_printf("Print a string : %s\n", str));
// 	printf("size Printf : %d\n",printf("Print a string : %s\n", str));

// 	printf("\n\n");

// 	ft_printf("Test 3 :\n");
// 	ft_printf("size ft_printf : %d\n",ft_printf("Print a pointer : %p\n", ptr));
// 	printf("size Printf : %d\n",printf("Print a pointer : %p\n", ptr));

// 	printf("\n\n");

// 	ft_printf("Test 4 :\n");
// 	ft_printf("size ft_printf : %d\n",ft_printf("Prints decimal numbers : %d %d %d\n", i, imax, zero));
// 	printf("size Printf : %d\n",printf("Prints decimal numbers : %d %d %d\n", i, imax, zero));

// 	printf("\n\n");

// 	ft_printf("Test 5 :\n");
// 	ft_printf("size ft_printf : %d\n",ft_printf("Prints int(base 10) : %i %i %i\n", i, imax, zero));
// 	printf("size Printf : %d\n",printf("Prints int(base 10) : %i %i %i\n", i, imax, zero));

// 	printf("\n\n");

// 	ft_printf("Test 6 :\n");
// 	ft_printf("size ft_printf : %d\n",ft_printf("Prints an unsigned decimal number : %u\n", u));
// 	printf("size Printf : %d\n",printf("Prints an unsigned decimal number : %u\n", u));

// 	printf("\n\n");

// 	ft_printf("Test 7 :\n");
// 	ft_printf("size ft_printf : %d\n",ft_printf("Prints a number in Hexa lowercase : %x\n", low));
// 	printf("size Printf : %d\n",printf("Prints a number in Hexa lowercase : %x\n", low));

// 	printf("\n\n");

// 	ft_printf("Test 8 :\n");
// 	ft_printf("size ft_printf : %d\n",ft_printf("Prints a number in Hexa uppercase : %X\n", upp));
// 	printf("size Printf : %d\n",printf("Prints a number in Hexa uppercase : %X\n", upp));

// 	printf("\n\n");

// 	ft_printf("Test 9 :\n");
// 	ft_printf("size ft_printf : %d\n",ft_printf("Prints a percent sign : %%\n"));
// 	printf("size Printf : %d\n",printf("Prints a percent sign : %%\n"));

// 	printf("\n\n");

// 	ft_printf("Test 10 :\n");
// 	ft_printf("size ft_printf : %d\n",ft_printf("printf\n"));
// 	printf("size Printf : %d\n",printf("Printf\n"));

// 	printf("\n\n");

// 	ft_printf("Test 11 :\n");
// 	ft_printf("size ft_printf : %d\n",ft_printf("Prints 0 with string : %c\n", s));
// 	printf("size Printf : %d\n",printf("Prints 0 with string : %c\n", s));

// 	printf("\n\n");

// 	ft_printf("Test 12 :\n");
// 	ft_printf("size ft_printf : %d\n",ft_printf("Prints char null : %c\n", v));
// 	printf("size Printf : %d\n",printf("Prints char null : %c\n", v));

// 	printf("\n\n");
// 	return (0);
// }
