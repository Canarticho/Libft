#include "libft.h"

void	ft_putwchar(wchar_t wc)
{
	write(1, &wc, sizeof(wchar_t));
}
