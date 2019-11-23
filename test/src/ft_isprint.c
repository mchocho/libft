int ft_isprint(int c) {
	if ( (c >= 'A' && &c <= 'Z')
		|| (c >= 'a' && &c <= 'z')
		|| c >= ' '
	) return (1);
	else return (0);
}