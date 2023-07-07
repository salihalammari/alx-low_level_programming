#include "main.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

void	ft_putnchar_fd(char c, int n, int fd)
{
	while (n-- > 0)
		ft_putchar_fd(c, fd);
}


int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}


int	ft_atoi(const char *str)
{
	int	s;
	int	c;

	c = 0;
	s = 1;
	while ((*str >= 9 && *str <= 13) || *str == ' ')
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			s = -s;
		str ++;
	}
	while (*str >= '0' && *str <= '9')
	{
		c = c * 10 + *str - 48;
		str++;
	}
	return (c * s);
}

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	slen;

	slen = ft_strlen(src);
	i = 0;
	if (slen + 1 < dstsize)
		while (i <= slen)
			dst[i++] = *src++;
	else if (dstsize)
	{
		while (i < dstsize - 1)
			dst[i++] = *src++;
		dst[i] = 0;
	}
	return (slen);
}

void	*ft_calloc(size_t count, size_t size)
{
	void	*t;

	t = malloc(count * size);
	if (!t)
		return (NULL);
	ft_bzero(t, count * size);
	return (t);
}

char	*ft_strdup(const char *s1)
{
	char	*t;

	t = malloc((ft_strlen(s1) + 1) * sizeof(char));
	if (!t)
		return (NULL);
	ft_memcpy(t, s1, ft_strlen(s1));
	t[ft_strlen(s1)] = 0;
	return (t);
}