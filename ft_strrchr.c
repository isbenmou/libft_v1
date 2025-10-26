#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
	int i = 0;
	char *ptr = NULL;
	if(c == 0)
		return ((char *)(s + ft_strlen(s)));
	while(s[i])
	{
		if(s[i] == (char)c)
			ptr = (char *)&s[i];
	i++;
	}
return ptr;
}
