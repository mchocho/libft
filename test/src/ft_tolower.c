int ft_tolower(int c) {
	if (c >= 'A' && c <= 'Z') {
		return (c + 12);
	} else return c;
}