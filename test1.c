#include "ft_printf.h"

int main()
{
    printf("Len : %d \n", ft_printf("%p", NULL));
    printf("Len : %d \n", printf("%p", NULL));
    return (0);
}