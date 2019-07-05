int main()
{

	//Testing ft_bzero.c

	/*printf(" Testing ft_bzero\n--------------------------------\n");

	char foo[50] = "\We think code rocks!";

	char fubu[50] = "We think code rocks!";

	bzero(foo + 5 , 6);

	ft_bzero(fubu + 5, 6);

	printf("Result should be: %s \n", foo);

	printf("Test returned: %s \n", fubu);*/



	//Testing ft_isalnum.c

	/*printf(" Testing ft_isalnum\n---------------------\n");

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
	printf("( --> %d\n", ft_isalpha('(') );*/


	//Testing ft_isdigit.c

	/*printf(" Testing ft_isdigit.c\n----------------------\n");

	printf("1 --> %d\n", ft_isdigit('1'));
	printf("2 --> %d\n", ft_isdigit('2'));
	printf("3 --> %d\n", ft_isdigit('3'));
	printf("4 --> %d\n", ft_isdigit('4'));
	printf("5 --> %d\n", ft_isdigit('5'));
	printf("a --> %d\n", ft_isdigit('a'));
	printf("b --> %d\n", ft_isdigit('b'));
	printf("& --> %d\n", ft_isdigit('&'));
	printf("^ --> %d\n", ft_isdigit('^'));*/


	//Testing ft_isprint.c

	/*printf(" Testing ft_isprint()\n---------------------\n");

	printf("a --> %d\n", ft_isprint('a'));
	printf("b --> %d\n", ft_isprint('b'));
	printf("c --> %d\n", ft_isprint('c'));
	//printf("% --> %d\n", ft_isprint('%'));
	printf("? --> %d\n", ft_isprint('?'));
	//printf("¥ --> %d\n", ft_isprint('¥'));
	//printf("¶ --> %d\n", ft_isprint('¶'));
	//printf("} --> %d\n", ft_isprint('}'));
	printf("4 --> %d\n", ft_isprint(5));
	printf("66 --> %d\n", ft_isprint(66));*/


	//Testing ft_itoa.c

	/*printf(" Testing ft_itoa.c\n----------------------\n");

	int n = 2147483647;

	//char str[50] = ft_itoa(n);

	printf("Result before itoa: %d\n", n);

	printf("Result after itoa: %s\n", ft_itoa(n));*/


	//Testing ft_memalloc.c

	/*printf(" Testing ft_memalloc\n------------------------\n");

	char *str = (char *)ft_memalloc(30);

	str = "Hello bitch! This is C programming";

	printf("Result should be: %s\n", str);


	printf("  Testing ft_memccpy\n -------------------\n");

	char *foo = "Hello bitch";

	char bar[50] = "";

	char *dog = "Hello bitch";

	char cat[50] = "";

	memccpy(bar, foo, 'm', 15);

	ft_memccpy(cat, dog, 'm', 15);

	printf("Result should be %s\n", bar);
	printf("Test returned %s\n", cat);*/


	/*printf(" Testing ft_memchr\n ----------------------------\n");

	char *foo = "Hello bitch!";

	//char *bar = "Hello bitch!";

	printf("Result should be: %s\n", memchr(foo, ' ', 15));

	printf("Test returned: %s\n", ft_memchr(foo, ' ', 15));*/





	/*printf("  Testing ft_memcmp\n ------------------------\n");

	char *foo = "Hello :itch";

	char *bar = "Hello bitch";

	printf("Result should be: %d\n", memcmp((void *)foo, (void *)bar, 15));

	printf("Test returned: %d\n", ft_memcmp((void *)foo, (void *)bar, 15));*/






	/*printf("  Testing ft_memmove\n ------------------------\n");

	void *foo = (void *)"Hello world";

	void *fubu = (void *)"Hello motherfucker";

	printf("Result should be: %s\n", (char *)memmove(foo, fubu, 30));

	printf("Result should be: %s\n", (char *)ft_memmove(foo, fubu, 30));*/





	/*printf(" Testing ft_memset\n-----------------------------\n");

	char foo[50] = "Hello world";

	char fubu[50] = "Hello world";

	memset(foo + 6, 'k', 6);

	ft_memset(fubu + 6, 'k', 6);

	printf("Result should be: %s\n", foo);

	printf("Test returned: %s\n", fubu);*/





	/*printf(" Testing ft_putchar.c\n--------------------------------\n");

	char *foo = "Hello bitch!";

	while(*foo) {
		ft_putchar(*foo);
		ft_putchar('\n');
		foo++;
	}*/




	/*printf(" Testing ft_putchar_fd.c\n-----------------------\n");

	char foo = 'T';

	ft_putchar_fd(foo, 0);*/



	/*printf(" Testing ft_putendl.c\n------------------------------------\n");

	char *str = "Hello bitch";

	ft_putendl(str);*/




	/*printf(" Testing ft_putendl_fd.c\n-----------------------------\n");


	char *foo = "Hello bitch!";

	ft_putendl_fd(foo, 2);*/



	/*printf(" Testing ft_putnbr.c\n----------------------\n");

	int i = 2147483647;

	ft_putnbr(i);*/



	/*printf(" Testing ft_putnbr_fd.c\n------------------------\n");


	int foo = -2147483648;

	ft_putnbr_fd(foo, 2);*/



	/*printf(" Testing ft_putstr.c\n------------------------------\n");

	char *str = "Hello world";

	//printf("Result returned: ");

	ft_putstr(str);*/



	/*printf(" Testing ft_putstr_fd.c\n-----------------------------\n");

	char *str = "Hello bitch!";

	ft_putstr_fd(str, 2);*/


	/*printf(" Testing ft_strcat\n--------------------\n");

	char *foo = "Even when ";

	char *fubu = "I lie!";

	printf("Result should be: %s\n", strcat(foo, fubu));

	printf("Test returned: %s\n", ft_strcat(foo, fubu));*/



	/*printf(" Testing ft_strchr\n-------------------------------\n");

	char *foo = "Even when I lie";

	printf("Result should be: %s\n", strchr(foo, 'I'));


	printf("Result should be: %s\n", ft_strchr(foo, 'I'));*/



	/*printf(" Testing ft_strclr.c\n-------------------------------\n");

	char foo[50] = "Some long ass string";

	printf("Result before ft_strclr: %s\n", foo);

	ft_strclr(foo);

	printf("Result returned: %s\n", foo);*/


	/*printf(" Testing ft_strcmp\n------------------\n");

	char *foo = "Hey girl!";

	char *fubu = "Heyyy!";
	
	printf("Result should be: %d\n", strcmp(foo, fubu));

	printf("Test returned: %d\n", ft_strcmp(foo, fubu));*/



	/*printf(" Testing ft_strcpy\n-------------------------\n");

	char *foo = "Hello bitch!";

	char dst[60] = "";

	ft_strcpy(dst, foo);

	printf("Result after strcpy is: %s\n", dst);*/



	/*printf(" Testing ft_strdel\n----------------------\n");

	char *str = "Hello world!";

	char **arr =  str;

	printf("Result before function call: %s\n", str);

	ft_strdel(arr);

	printf("Result after function call: %s\n", str);*/



	/*printf(" Testing ft_strdup.c\n ---------------------\n");

	char *foo = "Goodbye bitch!";

	//char *fubu;
	//char *bar;

	printf("Result should be: %s\n", strdup(foo));

	printf("Test returned: %s\n", ft_strdup(foo));*/



	/*char *foo = "Hello Motherfucker";

	char *fubu = "Hello Motherfucka";

	int res = ft_strequ(foo, fubu);

	printf("Result of ft_strequ: %d\n", res);*/



	/*printf(" Testing ft_strjoin.c\n------------------------------------\n");

	char *foo = "Hello";

	char *fubu = " Bitch!";

	char *bar = ft_strjoin(foo, fubu);

	printf("Result returned: %s\n", bar);*/




	/*printf("  Testing ft_strlcat\n-------------------------\n");

	//char foo[50] = "Hello";

	//const char *fubu = " bitch!";

		

	//printf("Result should be: %d\n", (int)strlcat(foo, fubu, 15) );


	char foo2[50] = "Hello ";

	char *fubu2 = "bitch!";

	//ft_strlcat(foo2, fubu2, 15);

	//printf("Test returned: %d\n", (int)ft_strlcat(foo2, fubu2, 15)foo2);

	//printf("Final string is: %s\n", foo2);



	/*printf(" Testing ft_strlen\n-------------------\n");

	char *foo = "Hello Bitch!";

	int ori_size = strlen(foo);
	int size = ft_strlen(foo);

	printf("Length of string foo is: %d\n", ori_size);

	printf("Test returned length: %d\n", size);*/



	/*printf(" Testing ft_strncmp\n--------------------------------\n");

	char *foo = "Even when I lie";

	char *fubu = "I always tell the truth";

//	char *bar = "Even when I lie";
	
	printf("Result should be: %d\n", strncmp(foo, fubu, 2));

	printf("Test returned: %d\n", ft_strncmp(foo, fubu, 2));*/



	/*printf(" Testing ft_strncpy\n--------------------\n");

	char foo[10] = "Sam\tsung";

	char fubu[10];

	char fooboo[10];

	int i = 10;

	printf("Result should be: %s\n", strncpy(fubu, foo, i));

	printf("Test returned: %s\n", ft_strncpy(fooboo, foo, i));*/



	/*printf(" Testing ft_strnequ.c\n---------------------\n");

	char *foo = "Hello motherfucker";

	char fubu[] = "Hello mother";

	printf("String 1: %s\nString 2: %s\n", foo, fubu);

	int result = ft_strnequ(foo, fubu, 20);

	printf("Result returned: %d\n", result);*/



	/*printf(" Testing ft_strnew.c\n-------------------------------\n");

	char *foo = "Hey girl! How u doin?";

	foo = ft_strnew(6);

	printf("Result returned: %s\n", foo);*/



	/*printf(" Testing ft_strtrim.c\n----------------------\n");

	char *foo = "\t\t\t\t\t           Hello                   Bitch!         ";

	printf("Result before trim: %s\n", foo);

	char *fubu = ft_strtrim(foo);

	printf("Result after trim: %s\n", fubu);*/





	/*printf(" Testing ft_tolower\n---------------\n");

	printf("A ---> %c\n", ft_lower('A') );

	printf("B ---> %c\n", ft_lower('B') );
	printf("C ---> %c\n", ft_lower('C') );
	printf("D ---> %c\n", ft_lower('D') );
	printf("E ---> %c\n", ft_lower('E') );
	printf("F ---> %c\n", ft_lower('F') );
	printf("G ---> %c\n", ft_lower('G') );
	printf("H ---> %c\n", ft_lower('H') );
	printf("I ---> %c\n", ft_lower('I') );
	printf("J ---> %c\n", ft_lower('J') );
	printf("K ---> %c\n", ft_lower('K') );	
	printf("L ---> %c\n", ft_lower('L') );
	printf("M ---> %c\n", ft_lower('M') );
	printf("N ---> %c\n", ft_lower('N') );
	printf("O ---> %c\n", ft_lower('O') );*/




	/*printf(" Testing ft_toupper\n--------------------\n");
	printf("a -> %c\n", ft_toupper('a'));
	printf("b -> %c\n", ft_toupper('b'));
	printf("c -> %c\n", ft_toupper('c'));
	printf("d -> %c\n", ft_toupper('d'));
	printf("e -> %c\n", ft_toupper('e'));
	printf("f -> %c\n", ft_toupper('f'));
	printf("g -> %c\n", ft_toupper('g'));
	printf("h -> %c\n", ft_toupper('h'));
	printf("i -> %c\n", ft_toupper('i'));
	printf("j -> %c\n", ft_toupper('j'));
	printf("k -> %c\n", ft_toupper('k'));
	printf("l -> %c\n", ft_toupper('l'));
	printf("m -> %c\n", ft_toupper('m'));*/




	printf("Testing ft_strjoin.c\n-----------------------\n");
	char *foo = "Hello";

	char *fubu = " Bitch! This is we think code 2389y875984th84hgufiqrbegghrbguiepgbi;qleibgruiqluirbguibt4ui;b3ilubt4;l3b";

	printf("String 1: %s\nString 2: %s\n", foo, fubu);

	char *res = ft_strjoin(foo, fubu);

	printf("Result returned: %s\n", res);


	printf(" Testing ft_strncpy.c\n----------------------------\n");

	char foo[] = "Motherf*cker";

	char fubu[] = "Hello";

	//char *res = strncpy(foo, fubu, 6);

	char *test = ft_strncpy(foo, fubu, 5);

	//printf("Result should be: %s\n", res);

	printf("String 1: %s\n", foo);

	printf("Test returned result: %s\n", test);	
}
