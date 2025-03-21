
#include "../include/header.h"

// error
void ft_perror(char *error_message, char *func_name)
{
	printf(RED"%s : %s\n"DEFAULT, error_message, func_name);	
	return ;
}

// user error
void ft_pus_error(char *error_message)
{
	printf(ORANGE"%s\n"DEFAULT, error_message);
	return ;
}
