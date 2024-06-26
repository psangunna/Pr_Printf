/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_digits.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psanguna <psanguna@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 16:31:21 by psanguna          #+#    #+#             */
/*   Updated: 2024/05/07 16:31:29 by psanguna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
#include <limits.h>

int main(void)
{  
	int c;

	printf("\nTEST de U\n");
	ft_printf(" %u ", 0);
	ft_printf(" %u ", -1);
	ft_printf(" %u ", 1);
	ft_printf(" %u ", -100);
	ft_printf(" %u ", -101);
	ft_printf(" %u ", INT_MAX);
	ft_printf(" %u ", INT_MIN);
	ft_printf(" %u ", LONG_MAX);
	ft_printf(" %u ", LONG_MIN);
	ft_printf(" %u ", UINT_MAX);
	ft_printf(" %u ", ULONG_MAX);
	ft_printf(" %u ", 9223372036854775807LL);
	c = ft_printf(" %u %u %u %u %u %u %u", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	printf("\nMyCount%i\n", c);

	printf("Printf standar\n");
	printf(" %u ", 0);
	printf(" %u ", -1);
	printf(" %u ", 1);
	printf(" %u ", -100);
	printf(" %u ", -101);
	printf(" %u ", INT_MAX);
	printf(" %u ", INT_MIN);
	printf(" %u ", LONG_MAX);
	printf(" %u ", LONG_MIN);
	printf(" %u ", UINT_MAX);
	printf(" %u ", ULONG_MAX);
	printf(" %u ", 9223372036854775807LL);
	c = printf(" %u %u %u %u %u %u %u", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	printf("\nCount%i\n", c);
  
	printf("\nTEST de i\n");
	ft_printf(" %i ", 0);
	ft_printf(" %i ", -1);
	ft_printf(" %i ", 1);
	ft_printf(" %i ", -100);
	ft_printf(" %i ", -101);
	ft_printf(" %i ", INT_MAX);
	ft_printf(" %i ", INT_MIN);
	ft_printf(" %i ", LONG_MAX);
	ft_printf(" %i ", LONG_MIN);
	ft_printf(" %i ", UINT_MAX);
	ft_printf(" %i ", ULONG_MAX);
	ft_printf(" %i ", 9223372036854775807LL);
	c = ft_printf(" %i %i %i %i %i %i %i", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	printf("\nMyCount%i\n", c);
 
	printf("Printf standar\n");
	printf(" %i ", 0);
	printf(" %i ", -1);
	printf(" %i ", 1);
	printf(" %i ", -100);
	printf(" %i ", -101);
	printf(" %i ", INT_MAX);
	printf(" %i ", INT_MIN);
	printf(" %i ", LONG_MAX);
	printf(" %i ", LONG_MIN);
	printf(" %i ", UINT_MAX);
	printf(" %i ", ULONG_MAX);
	printf(" %i ", 9223372036854775807LL);
	c = printf(" %i %i %i %i %i %i %i", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	printf("\nCount%i\n", c);
  
	printf("\nTEST de d\n");
	ft_printf(" %d ", 0);
	ft_printf(" %d ", -1);
	ft_printf(" %d ", 1);
	ft_printf(" %d ", -100);
	ft_printf(" %d ", -101);
	ft_printf(" %d ", INT_MAX);
	ft_printf(" %d ", INT_MIN);
	ft_printf(" %d ", LONG_MAX);
	ft_printf(" %d ", LONG_MIN);
	ft_printf(" %d ", UINT_MAX);
	ft_printf(" %d ", ULONG_MAX);
	ft_printf(" %d ", 9223372036854775807LL);
	c = ft_printf(" %d %d %d %d %d %d %d", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	printf("\nMyCount%i\n", c); 

	printf("Printf standar\n");
	printf(" %d ", 0);
	printf(" %d ", -1);
	printf(" %d ", 1);
	printf(" %d ", -100);
	printf(" %d ", -101);
	printf(" %d ", INT_MAX);
	printf(" %d ", INT_MIN);
	printf(" %d ", LONG_MAX);
	printf(" %d ", LONG_MIN);
	printf(" %d ", UINT_MAX);
	printf(" %d ", ULONG_MAX);
	printf(" %d ", 9223372036854775807LL);
	c = printf(" %d %d %d %d %d %d %d", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	printf("\nCount%i\n", c);  

	printf("\nTEST de porcentaje\n");
	ft_printf(" %% ");
	ft_printf(" %%%% ");
	ft_printf(" %% %% %% ");
	ft_printf(" %%  %%  %% ");
	ft_printf(" %%   %%   %% ");
	ft_printf("%%");
	c = ft_printf("%% %%");
	printf("\nMyCount%i\n", c); 
	printf("Printf standar\n");
	printf(" %% ");
	printf(" %%%% ");
	printf(" %% %% %% ");
	printf(" %%  %%  %% ");
	printf(" %%   %%   %% ");
	printf("%%");
	c = printf("%% %%");
	printf("\nCount%i\n", c);
}   
