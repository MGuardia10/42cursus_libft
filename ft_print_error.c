#include "libft.h"

void	ft_print_error(char *error)
{
	write(STDERR, "Error: ", 7);
	ft_putstr_fd(error, STDERR);
	exit(EXIT_FAILURE);
}