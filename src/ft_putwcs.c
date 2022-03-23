#include "libft.h"

void	ft_putwcs(wchar_t *wcs)
{
	write(1, wcs, sizeof(wchar_t) * ft_wcslen(wcs));
}
