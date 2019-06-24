int main()
{

	//Testing ft_bzero.c

	printf(" Testing ft_bzero\n--------------------------------\n");

	char foo[50] = "We think code rocks!";

	char fubu[50] = "We think code rocks!";

	bzero(foo + 5 , 6);

	ft_bzero(fubu + 5, 6);

	printf("Result should be: %s \n", foo);

	printf("Test returned: %s \n", fubu);



	//Testing ft_isalnum.c

	printf(" Testing ft_isalnum\n---------------------\n");

	int foo = '0';

	printf("Result should be: %d\n", isalnum(foo));

	printf("Test returned result: %d\n", ft_isalnum(foo));


	//Testing ft_isalpha.c

	printf(" Testing ft_isalpha\n-------------------------\n");

	printf("A --> %d\n", ft_isalpha('A') );
	printf("B --> %d\n", ft_isalpha('B') );
	printf("C --> %d\n", ft_isalpha('C') );
	printf("a --> %d\n", ft_isalpha('a') );
	printf("b --> %d\n", ft_isalpha('b') );
	printf("c --> %d\n", ft_isalpha('c') );
	printf("1 --> %d\n", ft_isalpha('1') );
	printf("2 --> %d\n", ft_isalpha('2') );
	printf("& --> %d\n", ft_isalpha('&') );
	printf("( --> %d\n", ft_isalpha('(') );


	//Testing ft_isdigit.c

	printf(" Testing ft_isdigit.c\n----------------------\n");

	printf("1 --> %d\n", ft_isdigit('1'));
	printf("2 --> %d\n", ft_isdigit('2'));
	printf("3 --> %d\n", ft_isdigit('3'));
	printf("4 --> %d\n", ft_isdigit('4'));
	printf("5 --> %d\n", ft_isdigit('5'));
	printf("a --> %d\n", ft_isdigit('a'));
	printf("b --> %d\n", ft_isdigit('b'));
	printf("& --> %d\n", ft_isdigit('&'));
	printf("^ --> %d\n", ft_isdigit('^'));


	//Testing ft_isprint.c

	printf(" Testing ft_isprint()\n---------------------\n");

	printf("a --> %d\n", ft_isprint('a'));
	printf("b --> %d\n", ft_isprint('b'));
	printf("c --> %d\n", ft_isprint('c'));
	//printf("% --> %d\n", ft_isprint('%'));
	printf("? --> %d\n", ft_isprint('?'));
	//printf("¥ --> %d\n", ft_isprint('¥'));
	//printf("¶ --> %d\n", ft_isprint('¶'));
	//printf("} --> %d\n", ft_isprint('}'));
	printf("4 --> %d\n", ft_isprint(5));
	printf("66 --> %d\n", ft_isprint(66));


	//Testing ft_itoa.c

	printf(" Testing ft_itoa.c\n----------------------\n");

	int n = 2147483647;

	//char str[50] = ft_itoa(n);

	printf("Result before itoa: %d\n", n);

	printf("Result after itoa: %s\n", ft_itoa(n));


	//Testing ft_memalloc.c

	printf(" Testing ft_memalloc\n------------------------\n");

	char *str = (char *)ft_memalloc(30);

	str = "Hello bitch! This is C programming";

	printf("Result should be: %s\n", str);

}