#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

int     ft_strlen(const char *str);
char    *ft_strcpy(char *dst, const char *src);
int     ft_strcmp(const char *s1, const char *s2);
char    *ft_strdup(const char *str);
ssize_t ft_write(int fildes, const void *buf, size_t nbyte);
ssize_t ft_read(int fildes, void *buf, size_t nbyte);
int     ft_atoi(const char *src);

typedef struct  s_assambl
{
    char *just_str;
    char *nope_str;
    char *big_str;
    char *just_dst;
    char *nope_dst;
    char *big_dst;
}               t_assambl;


int main(void)
{
    t_assambl all;
    all.just_str = "Hello World, test";
    all.just_dst = malloc(sizeof(char) * ft_strlen(all.just_str) + 1);
    all.nope_str = "";
    all.nope_dst = malloc(1);
    all.big_str = "ahfklsdjfhlakuh734fhl7i4udy573456234875623487956234975d62h34985d62h348d5672 \
    3872h4h756234524385723475h234btg2b48fy52h43hd5tb234g8hd95234d52374d5h348975h2d934jh587n234j572345 \
    23o45cn24837bt5234cecakgcibrewhth724ht7845d2hy72dyod24y7h2y7";
    all.big_dst = malloc(sizeof(char) * ft_strlen(all.big_str) + 1);

    printf(">--------STRLEN FUNCTION--------<\n");
    printf("_my: %d\n", ft_strlen(all.just_str));
    printf("def: %d\n", (int)strlen(all.just_str));
    printf("_my: %d\n", ft_strlen(all.nope_str));
    printf("def: %d\n", (int)strlen(all.nope_str));
    printf("_my: %d\n", ft_strlen(all.big_str));
    printf("def: %d\n", (int)strlen(all.big_str));


    printf("\n>--------STRCPY FUNCTION--------<\n");
    printf("def: %s\n", strcpy(all.just_dst, all.just_str));
    printf("_my: %s\n", ft_strcpy(all.just_dst, all.just_str));
    printf("_my: %s\n", ft_strcpy(all.nope_dst, all.nope_str));
    printf("def: %s\n", strcpy(all.nope_dst, all.nope_str));
    printf("_my: %s\n", ft_strcpy(all.big_dst, all.big_str));
    printf("def: %s\n", strcpy(all.big_dst, all.big_str));


    printf("\n>--------STRCMP FUNCTION--------<\n");
    printf("_my: %d\n", ft_strcmp(all.just_str, all.just_str));
    printf("def: %d\n", strcmp(all.just_str, all.just_str));
    printf("_my: %d\n", ft_strcmp("HEF", all.big_str));
    printf("def: %d\n", strcmp("HEF", all.big_str));
    printf("_my: %d\n", ft_strcmp("-1", all.nope_str));
    printf("def: %d\n", strcmp("-1", all.nope_str));

    printf("\n>--------STRDUP FUNCTION--------<\n");
    printf("_my: %s\n", ft_strdup(all.just_str));
    printf("def: %s\n", strdup(all.just_str));
    printf("_my: %s\n", ft_strdup(all.big_str));
    printf("def: %s\n", strdup(all.big_str));
    printf("_my: %s\n", ft_strdup(all.nope_str));
    printf("def: %s\n", strdup(all.nope_str));

    printf("\n>--------WRITE FUNCTION--------<\n");
    ft_write(1, "hoho\n", 5);
    write(1, "hoho\n", 5);
    ft_write(1, all.just_str, ft_strlen(all.just_str));
    ft_write(1, "\n", 1);
    write(1, all.just_str, ft_strlen(all.just_str));
    write(1, "\n", 1);

    printf("\n>--------READ FUNCTION--------<\n");
    char *buf = malloc(50000);
    int i;
    i = ft_read(0, buf, 600);
    printf("_mybuf = %s\nmyi = %d\n", buf, i);
    i = read(0, buf, 600);
    printf("defbuf = %s\ndei = %d\n", buf, i);

    return (0);
}