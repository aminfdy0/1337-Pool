/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdycoding <aminefdy@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 14:41:23 by fdycoding         #+#    #+#             */
/*   Updated: 2026/01/29 14:49:17 by fdycoding        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
/*int main(void)
{
	ft_putchar('X');
}*/
/*
? #include <library.h> Include library declarations and macros so you can use its functions (pre-processor(gcc))

* void	ft_putchar(char c) means func don't return any value because its void
                         * and take a var in type char called c as a parameter

! ssize_t write(int fd, const void *buf, size_t count);  included from <unistd.h> library
				*ssize_t write : means the function returns a signed number
				                *used because it can return -1 if there is an error

                *int fd : number that tells where to write (1 = screen, 2 = error output, or a file)

				*const void *buf : pointer to the buffer in memory that contains the data to write

				*size_t count : number of bytes to write from the buffer
								* if count > const void *buf program will write the massage and add garbage until finish bytes
								* if count = 0 nothing gonna printed
								* if count < 0 will change auto to large size_t and became a big number and result mostly crash / segmentation fault
*/
