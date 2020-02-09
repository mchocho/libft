#include "../includes/libft.h"

int main(int argc, char **argv) {
	/*if (argc > 1)
		ft_putendl(argv[1]);
	else
		ft_putendl("You were suppose to supply an argument!");
	*///return 0;


	//Testing ft_concatstr()
	if (argc != 3)
		return 0;

	char *bar = ft_strdup(argv[1]);
	char *foo = ft_strdup(argv[2]);
	ft_putstr("Testing ft_concatstr()\n");
	ft_putstr("-------------------------\n");
	ft_concatstr(&bar, foo);

	ft_putstr("Result of bar --> ");
	ft_putendl(bar);
	return 0;
}
