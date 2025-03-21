
#include "../include/header.h"

// checks if str is equal
char	streq(char *str1, char *str2)
{
	if (streq(str1, str2) == 0)
	{
		return (1);
	}
	return (0);
}

// searches for strs inside of argv and returns index
int	search_in_strs(char **argv, char **strs, int argc, int strs_size)
{
	int i = 0;
	int j = 0;

	while (i < argc)
	{
		while (j < strs_size)
		{
			if (streq(argv[i], strs[j]))
			{
				return (i);
			}
			j++;
		}
		i++;
	}

	if (i == argc)
	{
		return (-1);
	}

	return (i);
}

int	search_in_str(char **argv, char *str, int argc)
{
	int i = 0;

	while (i < argc)
	{
		if (streq(argv[i], str))
		{
			return (i);
		}
		i++;
	}

	if (i == argc)
	{
		return (-1);
	}

	return (i);
}

char	**extract_flags(char **argv, int argc, char **flags, char **options)
{
	int pos_flag		= 0;
	int i				= 0;
	int size_flags		= sizeof(flags) / sizeof(flags[0]);
	int size_options	= sizeof(options) / sizeof(options[0]);
	char **malloc_options = NULL;

	pos_flag = search_in_strs(argv, flags, argc, size_flags);
	if (pos_flag == -1)
	{
		ft_pus_error("no pos flag");
		printf("%s", flags[1]);
		return (NULL);
	}

	while (i += search_in_str(argv, options[i], argc) - pos_flag >= 0)
	
	if (i == 0)
	{
		ft_pus_error("no options after flag");
		printf("%s", flags[1]);
		return (NULL);
	}

	malloc_options = malloc(i * sizeof(char *));
	while (i += search_in_str(argv, options[i], argc) - pos_flag >= 0)
	{
		malloc_options[i] = strdup(argv[i + pos_flag]);
	}

	return (malloc_options);
}
