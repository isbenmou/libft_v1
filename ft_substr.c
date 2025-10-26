#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t i = 0;
	char *new_str;
	if(s == NULL)
		return NULL;
	if(start > ft_strlen(s))
	{
		new_str = malloc(1);
		new_str[i] = 0;
		return new_str;
	}
	if(len > ft_strlen(s))
		len = ft_strlen(s) - start;
	new_str = malloc(len + 1);
	if(new_str == NULL)
		return NULL;
	while(i < len)
	{
		new_str[i] = s[start];
	start++;
	i++;
	}
	new_str[i] = '\0';
return new_str;
}
