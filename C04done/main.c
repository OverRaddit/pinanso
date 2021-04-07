int		main(int argc, char *argv[])
{
	if (argc != 2)
		return (0);
	printf(">%d\n", ft_atoi(argv[1]));
}

int		main(void)
{
	char base[] = "0123456789";

	ft_putnbr_base(-123, base);
}

int		main(int argc, char *argv[])
{
	char base[] = "poneyvif";

	if (argc != 2)
		return (0);
	printf("%d\n", ft_atoi_base(argv[1], base));
}