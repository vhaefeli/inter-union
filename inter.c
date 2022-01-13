#include <unistd.h>

void	inter(const char *s1, const char *s2)
{
	char	checkalpha[127];
	int		i;
	int		j;
	
	if (s1 && s2)
	{
		i = 0;
		while (i < 127)
		{
			checkalpha[i] = 0;
		   i++;
		}
		i = 0;
		while (s2[i] != 0)
		{
			j =	s2[i];
			if (checkalpha[j] == 0)
				checkalpha[j] = 1;
			i++;
		}
		i = 0;
		while (s1[i] != 0)
		{
			j = s1[i];
			if (checkalpha[j] == 1)
			{
				write(1, &s1[i], 1);
				checkalpha[j]= 2;
			}
			i++;
		}
	}
	write(1, "\n", 1);
}
