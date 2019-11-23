#include "../includes/libft.h"

int main(int argc, char **argv) {
	if (argc > 1)
		ft_putendl(argv[1]);
	else
		ft_putendl("You were suppose to supply an argument!");
	return 0;
}
