# include <string.h>
# include <unistd.h>
# include <stdlib.h>
//Part1
void	*ft_memset(void *, int, size_t);
void	ft_bzero(void *, size_t);





size_t	ft_strlen(const char *);








int	ft_strcmp(const char *, const char *);
int	ft_strncmp(const char *, const char *, size_t);
int	ft_atoi(const char *);







//Part2
void	*ft_memalloc(size_t);
void	ft_memdel(void **);
char	ft_strnew(size_t);
void	ft_strdel(char **);
void	ft_strclr(char *);
void	ft_striter(char *, void(*f)(char *);
void	ft_striteri(char *, void(*f)(char *);
char	*ft_strmap(char const *, char (*f)(char));
char	*ft_strmapi(char const *, char (*f)(char));
int	ft_strequ(char const *, char const *);






void	ft_putchar(char);


void	ft_putnbr(int);
void	ft_putchar_fd(char, int);


void	ft_putnbr_fd(int, int);


