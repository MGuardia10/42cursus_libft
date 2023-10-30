#include "libft.h"

/**
 * The function `ft_print_error` prints an error message to the standard error output and exits the
 * program with a failure status.
 * 
 * @param error The parameter "error" is a pointer to a character array (string) that represents the
 * error message to be printed.
 */
void	ft_print_error(char *error)
{
	write(STDERR, "Error: ", 7);
	ft_putstr_fd(error, STDERR);
	exit(EXIT_FAILURE);
}