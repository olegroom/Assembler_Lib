#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

int     ft_strlen(const char *str);
char    *ft_strcpy(char *dst, const char *src);
int     ft_strcmp(const char *s1, const char *s2);
char    *ft_strdup(const char *str);
ssize_t write(int fildes, const void *buf, size_t nbyte);

int main(void)
{
    char *src = "334534534534245";
    char *dst = malloc(strlen(src));
    char *str = "mynameis";

    printf("\nSTRLEN FUNCTION:\n");
    printf("_my: %d\n", ft_strlen(str));
    printf("def: %d\n", (int)strlen(str));
    printf("_my: %d\n", ft_strlen(""));
    printf("def: %d\n", (int)strlen(""));
    printf("_my: %d\n", ft_strlen("asdfasdfasjdfasdklfjakldjfklj23;4jr283fj234f32jfk23j4k2fj43klf3j4f12;4f23j4f;lj"));
    printf("def: %d\n", (int)strlen("asdfasdfasjdfasdklfjakldjfklj23;4jr283fj234f32jfk23j4k2fj43klf3j4f12;4f23j4f;lj"));


    printf("\nSTRCPY FUNCTION:\n");
    printf("def: %s\n", strcpy(dst, src));
    printf("_my: %s\n", ft_strcpy(dst, src));

    printf("_my: %s\n", ft_strcpy(dst, ""));
    printf("def: %s\n", strcpy(dst, ""));


    printf("\nSTRCMP FUNCTION:\n");
    printf("_my: %d\n", ft_strcmp(str, src));
    printf("def: %d\n", strcmp(str, src));
    printf("_my: %d\n", ft_strcmp("HEF", src));
    printf("def: %d\n", strcmp("HEF", src));
    printf("_my: %d\n", ft_strcmp("str", "str"));
    printf("def: %d\n", strcmp("str", "str"));

    char *s1 = ft_strdup("OL_NA");
    char *s2 = strdup("OL_NA");
    printf("\nSTRDUP FUNCTION:\n");
    printf("_my: %s\n", s1);
    printf("def: %s\n", s2);
    return (0);
}