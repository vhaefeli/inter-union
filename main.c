void	inter(const char *s1, const char *s2);
void	ft_union(const char *s1, const char *s2);

int main(int argc, char **argv )
{
	if (argc != 3)
		return (0);
	inter(argv[1], argv[2]);
	ft_union(argv[1], argv[2]);
	return (0);
}
