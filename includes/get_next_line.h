#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <stdlib.h>
# include <sys/types.h>
# include <sys/uio.h>
# include <unistd.h>
# include <fcntl.h>
# include "libft.h"
# define BUFF_SIZE 4096

typedef struct		s_buff
{
	char		*buff;
	int		fd;
	int		siz;
	struct s_buff	*next;
}			t_buff;

int					ft_gnl(const int fd, char **line);
t_buff				*ft_addfd(t_buff *list, int fd, int task);
int					ft_get_line(t_buff *buff, char **line);
int					ft_readbuff(t_buff *buff);
int					ft_extract_line(t_buff *buff, char **line, char *eol);
t_buff				*ft_locate_buff(int fd, t_buff *list);
#endif
