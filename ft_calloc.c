#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void *ptr;
	if(count == 0 || size == 0)	
		return malloc(1);
	ptr = malloc(count * size);
	if(ptr == NULL)
		return ptr;
	ft_bzero(ptr, count * size);
return ptr;
}
