
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>

#define RED "\033[31m"
#define ORANGE "\033[38;5;208m"
#define GREEN "\033[32m"
#define DEFAULT "\033[0m"

// error.c
void	ft_perror(char *error_message, char *func_name);
void	ft_pus_error(char *error_message);
