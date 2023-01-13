#include "printf.h"

int main()
{
	void *ptr = (void *) main;

	printf("\n");
	printf("Len : %d \n", ft_printf("Character: %c. Done\n", 'c'));
	printf("Len : %d \n", ft_printf("String: %s. Done\n", "Hello World"));
	printf("Len : %d \n", ft_printf("Integer: %d. Done\n", 42));
	printf("Len : %d \n", ft_printf("Zero Int: %i. Done\n", 0));
	printf("Len : %d \n", ft_printf("Neg Integer: %d. Done\n", -42));
	printf("Len : %d \n", ft_printf("Unsinged integer: %u. Done\n", -2));
	printf("Len : %d \n", ft_printf("Hex: %x. Done\n", 42));
	printf("Len : %d \n", ft_printf("Hex: %X. Done\n", 42));
	printf("Len : %d \n", ft_printf("Zero Hex: %x. Done\n", 0));
	printf("Len : %d \n", ft_printf("Pointer: %p. Done\n", ptr));
	printf("\n\n");
	printf("Len : %d \n", printf("Character: %c. Done\n", 'c'));
	printf("Len : %d \n", printf("String: %s. Done\n", "Hello World"));
	printf("Len : %d \n", printf("Integer: %d. Done\n", 42));
	printf("Len : %d \n", printf("Zero Int: %i. Done\n", 0));
	printf("Len : %d \n", printf("Neg Integer: %d. Done\n", -42));
	printf("Len : %d \n", printf("Unsinged integer: %u. Done\n", -2));
	printf("Len : %d \n", printf("Hex: %x. Done\n", 42));
	printf("Len : %d \n", printf("Hex: %X. Done\n", 42));
	printf("Len : %d \n", printf("Zero Hex: %x. Done\n", 0));
	printf("Len : %d \n", printf("Pointer: %p. Done\n", ptr));
	return (0);

}