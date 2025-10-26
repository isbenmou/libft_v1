#include <stdio.h>

int check_front(char c, char const *set)
{
	int i = 0;
	while(set[i])
	{
		if(set[i] == c)
			return 1;
	i++;
	}
return 0;
}

int ft_strlen(char const *str)
{
	int i = 0;
	while(str[i])
		i++;
return i;
}

#include <stdlib.h>

char *copy(const char *src, int size)
{
	char *dest = malloc(size + 1);
	int j = 0;
	int i = 0;
	while(j < size)
	{
		dest[j] = src[i];
	i++;
	j++;
	}
	dest[j] = '\0';
return dest;
}

char *empty()
{
	char *dest = malloc(1);
	dest[0] = '\0';
return dest;
}

char	*ft_strtrim(char *s1, char const *set)
{
	int i = 0;
	int j = 0;
	if(s1 == NULL || set == NULL)
		return NULL;
	while(s1[i] && (check_front(s1[i], set) == 1))
		i++;
	if(s1[0] == 0 || i == ft_strlen(s1))
		return empty();
	j = ft_strlen(s1) - 1;
	while(j >= 0 && check_front(s1[j], set) == 1)
		j--;
return copy(&s1[i], j - i + 1);
}

int main()
{
	char *ptr = ft_strtrim("***42hello***", "*42");
	if(*ptr == 0)
		printf("Hello\n");
	printf("%s\n", ptr);
}
