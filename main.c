#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

static void	print_split(char **tab)
{
	int	i;

	i = 0;
	if (tab == NULL)
	{
		printf("NULL\n");
		return ;
	}
	while (tab[i])
	{
		printf("tab[%d] = [%s]\n", i, tab[i]);
		i++;
	}
	printf("tab[%d] = NULL\n", i);
}

static void	free_split_test(char **tab)
{
	int	i;

	if (tab == NULL)
		return ;
	i = 0;
	while (tab[i])
	{
		free(tab[i]);
		i++;
	}
	free(tab);
}

int	main(void)
{
	char	**tab;

	printf("\n--- TEST 1 : normal ---\n");
	tab = ft_split("hello world 42", ' ');
	print_split(tab);
	free_split_test(tab);

	printf("\n--- TEST 2 : plusieurs separateurs ---\n");
	tab = ft_split("___hello___world__42___", '_');
	print_split(tab);
	free_split_test(tab);

	printf("\n--- TEST 3 : separateur debut/fin ---\n");
	tab = ft_split("  hello world  ", ' ');
	print_split(tab);
	free_split_test(tab);

	printf("\n--- TEST 4 : aucun separateur ---\n");
	tab = ft_split("hello", ' ');
	print_split(tab);
	free_split_test(tab);

	printf("\n--- TEST 5 : uniquement separateurs ---\n");
	tab = ft_split("     ", ' ');
	print_split(tab);
	free_split_test(tab);

	printf("\n--- TEST 6 : chaine vide ---\n");
	tab = ft_split("", ' ');
	print_split(tab);
	free_split_test(tab);

	printf("\n--- TEST 7 : un caractere ---\n");
	tab = ft_split("a", ' ');
	print_split(tab);
	free_split_test(tab);

	printf("\n--- TEST 8 : separateur entre chaque caractere ---\n");
	tab = ft_split("a,b,c,d", ',');
	print_split(tab);
	free_split_test(tab);

	printf("\n--- TEST 9 : separateurs consecutifs ---\n");
	tab = ft_split("a,,,b,,,,c", ',');
	print_split(tab);
	free_split_test(tab);

	printf("\n--- TEST 10 : delimiter '\\0' ---\n");
	tab = ft_split("hello", '\0');
	print_split(tab);
	free_split_test(tab);

	printf("\n--- TEST 11 : delimiter au debut ---\n");
	tab = ft_split(",hello,world", ',');
	print_split(tab);
	free_split_test(tab);

	printf("\n--- TEST 12 : delimiter a la fin ---\n");
	tab = ft_split("hello,world,", ',');
	print_split(tab);
	free_split_test(tab);

	return (0);
}
