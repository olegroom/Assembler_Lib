#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int     ft_strlen(const char *str);
char    *ft_strcpy(char *dst, const char *src);
int     ft_strcmp(const char *s1, const char *s2);

int main(void)
{
    char *src = "hello worl345d";
    char *dst = malloc(strlen(src) + 1);
    char *str = "mynameis";

    printf("\nSTRLEN FUNCTION:\n");
    printf("_my: %d\n", ft_strlen(str));
    printf("def: %d\n", (int)strlen(str));

    printf("\nSTRCPY FUNCTION:\n");
    printf("_my: %s\n", ft_strcpy(dst, src));
    printf("def: %s\n", strcpy(dst, src));

    printf("\nSTRCMP FUNCTION:\n");
    printf("_my: %d\n", ft_strcmp(str, src));
    printf("def: %d\n", strcmp(str, src));
    printf("_my: %d\n", ft_strcmp("HEF", src));
    printf("def: %d\n", strcmp("HEF", src));
    printf("_my: %d\n", ft_strcmp("str", "str"));
    printf("def: %d\n", strcmp("str", "str"));
    return (0);
}