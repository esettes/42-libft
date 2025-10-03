#include "libft.h"

static size_t count_words(const char *s, char d)
{
	size_t		count;
    int			check;
    const char	*p;

    if (s == NULL)
        return 0u;
    count = 0u;
    check = 0;
    p = s;
    while (*p != '\0')
    {
        if (*p != d && !check)
        {
            count = count + 1u;
            check = 1;
        }
        else if (*p == d)
            check = 0;
        p = p + 1;
    }
    return (count);
}