/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourkab <abourkab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 13:44:17 by abourkab          #+#    #+#             */
/*   Updated: 2022/10/25 03:35:35 by abourkab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdio.h"
#include "libft.h"

// fonction atoi
// int main()
// {
//     const char *a;
//     a = "      -1654juhygtrf";
//     printf("%d", ft_atoi(a));
// }


// // fonction bzero qui n'affiche rien
// int main()
// {
//     char tab[100];
//     ft_bzero(tab, 100);
//     printf("%s", tab);
// }


// // fonction ft_calloc (Pour tester qu'elle reserve de la memoire, il faut changer la fonction bzero)
// int main()
// {
//         void * p = ft_calloc(2, 2);
//     printf("%s\n", p);
// }



// // fonction isalnum
// int main()
// {
//     char a = 'b';
//     char b = '*';
//     char c = '5';
//     printf("%d", ft_isalnum(a));
//     printf("%d", ft_isalnum(b));
//     printf("%d", ft_isalnum(c));
// }


// // fonction isalpha
// int main()
// {
//     char a = 'b';
//     char b = '*';
//     char c = '5';
//     printf("%d", ft_isalpha(a));
//     printf("%d", ft_isalpha(b));
//     printf("%d", ft_isalpha(c));
// }


// // fonction isascii
// int main()
// {
//     char a = 'b';
//     char b = '*';
//     char c = '5';
//     printf("%d", ft_isascii(a));
//     printf("%d", ft_isascii(b));
//     printf("%d", ft_isascii(c));
// }


// // fonction isdigit
// int main()
// {
//     char a = 'b';
//     char b = '*';
//     char c = '5';
//     printf("%d", ft_isdigit(a));
//     printf("%d", ft_isdigit(b));
//     printf("%d", ft_isdigit(c));
// }


// // fonction isprint
// int main()
// {
//     char a = 'b';
//     char b = '*';
//     char c = '\n';
//     printf("%d", ft_isprint(a));
//     printf("%d", ft_isprint(b));
//     printf("%d", ft_isprint(c));
// }


// // fonction ft_itoa
// int main()
// {
//     char    *p = ft_itoa(755);
//     printf("%s\n", p);
// }

// // fonction ft_lstadd_back
// int main()
// {
//     t_list    *lst1 = ft_lstnew("Aymen");
//     t_list    *lst2 = ft_lstnew("Bourkab");
//     ft_lstadd_back(&lst1, lst2);
//     t_list    *lst3 = ft_lstnew("bilal 9ouwad");
//     ft_lstadd_back(&lst1, lst3);
//     printf("%s\n", lst1 -> content);
//     printf("%s\n", lst1 -> next -> content);
//     printf("%s\n", lst1 -> next -> next -> content);
      
// }


// // fonction ft_lstadd_front
// int main()
// {
//     t_list   *lst1 = ft_lstnew("Aymen");
//     printf("%s\n", lst1 -> content);
//     t_list    *lst2 = ft_lstnew("Bourkab");
//     ft_lstadd_front(&lst1, lst2);
//     printf("%s\n", lst1 -> content);
//     printf("%s\n", lst1 -> next -> content);
// }

// // fonction ft_lstclear
// void    del(void *content)
// {
//     free(content);
// }

// int main()
// {
//     t_list    *lst1 = ft_lstnew(ft_strdup("Aymen"));
//     t_list    *lst2 = ft_lstnew(ft_strdup("Bourkab"));
//     t_list    *lst3 = ft_lstnew(ft_strdup("Zamel"));
//     ft_lstadd_back(&lst1, lst2); // lst1 -> next -> lst2 -> NULL
//     ft_lstadd_back(&lst1, lst3); // lst1 -> next -> lst2 -> next -> lst3 -> NUL
//     ft_lstclear(&lst1, del);
//     printf("%zu\n", ft_lstsize(lst1));
// }

// // fonction ft_lstdelone
// void    del(void *content)
// {
//     free(content);
// }

// int main()
// {
//     t_list    *lst1 = ft_lstnew(ft_strdup("Aymen"));
//     t_list    *lst2 = ft_lstnew(ft_strdup("Bourkab"));
//     t_list    *lst3 = ft_lstnew(ft_strdup("Zamel"));
//     ft_lstadd_back(&lst1, lst2); // lst1 -> next -> lst2 -> NULL
//     ft_lstadd_back(&lst1, lst3); // lst1 -> next -> lst2 -> next -> lst3 -> NUL
//     printf("%s\n", lst1 -> content ); // lst2 -> next -> lst3
//     ft_lstdelone(lst1, &del); // lst1 -> content == NULL || lst2 -> next -> lst3
//     printf("%s\n", lst1 -> content );
//     printf("%s\n", lst1 -> next -> content );
//     printf("%s\n", lst1 -> next -> next -> content );
// }

// // fonction ft_lstiteri

// void f (void* a)
// {
//     printf("%s", a);
// }

// int main()
// {
//     t_list    *lst1 = ft_lstnew("Aymen");
//     t_list    *lst2 = ft_lstnew("Bourkab");
//     ft_lstadd_front(&lst1, lst2);
//     ft_lstiter(lst1, &f);
// }

// // fonction ft_lstlast
// int main()
// {
//     t_list    *lst1 = ft_lstnew("Aymen");
//     t_list    *lst2 = ft_lstnew("Bourkab");
//     ft_lstadd_front(&lst1, lst2);
//     printf("%p\n", lst1 );
//     printf("%p\n", ft_lstlast(lst1) );
// }


// // fonction ft_lstmap
// void * f(void *a)
// {
//     (void) a;
//     return ("kaRAM");
// }

// int main()
// {
//     t_list    *lst1 = ft_lstnew("Aymen");
//     t_list    *lst2 = ft_lstnew("Bourkab");
//     ft_lstadd_front(&lst1, lst2);
//     t_list    *lst3 = ft_lstmap(lst1, &f, free);
//     printf("%s\n", lst3 -> content );
//     printf("%s\n", lst3 -> next -> content );
// }


// // fonction ft_lstnew
// int main()
// {
//     t_list    *lst = ft_lstnew("hhhhh");
//     printf("%s\n", lst -> content);
//     printf("%zu\n", ft_lstsize(lst));
// }


// // fonction ft_lstsize
// int main()
// {
//     t_list    *lst = ft_lstnew("hhhhh");
//     printf("%zu\n", ft_lstsize(lst));
// }


// // fonction ft_memchr
// int main()
// {
//     const void *s = "abzy";
//     void * p = ft_memchr(s, 'z', 10);
//     printf("%s\n", p);
// }

// int main(void)
// {
//     int src[] = {1,300,0,8,95,5,580,81000};

//     printf("%p\n", &src[0]);
//     printf("%p\n", &src[1]);
//     printf("%p\n", &src[2]);
//     int *ptr = ft_memchr(src,0,4);
//     printf("%p\n", ptr);
// }

// fonction ft_memcmp
// int main()
// {
//     const void *s1 = "abzy";
//     const void *s2 = "abzy22";
//     int p = ft_memcmp(s1, s2, 4);
//     printf("%d\n", p);
// }

// int main(void)
// {
//     int src[] = {300,20,10,301,50,80};

//     printf("-> %p\n", &src[0]);
//     printf("-> %p\n", &src[1]);
//     printf("-> %p\n", &src[2]);
//     printf("-> %p\n", &src[3]);
//     int ptr = ft_memcmp(src,src+3,1);
//     printf("%d\n", ptr);
// }

// // fonction ft_memcpy
// int main()
// {
//     // char dest[100] = "jgfrr";
//     int tab1[] = {1,300,50,7,8};
//     int tab2[] = {50,51,300};
//     memcpy(tab1, tab2, 9);
//     printf("%d\n", tab1[2]);
// }

// // fonction ft_memmove
// int main()
// {
//     char src[] = "aaaaabbbbb";
    
//     // |a|a|a|a|a|b|b|b|b|b|"
//     //            i
    
//     printf("%s\n", ft_memmove(src-1, src+5,5));
//     puts(src);
// }

// // fonction memset (c a un code ascii pour le voir il faut qu'il soit affichable)
// int main()
// {
//     char tab[12];
//     ft_memset(tab, 'l', 6);
//     printf("%s", tab);
// }

// // fonction ft_putchar_fd

// #include <unistd.h>
// #include <fcntl.h>
 
// int main()
// {
//    int fd;
//    fd = open("test.txt",O_CREAT | O_WRONLY, 777);
//    ft_putchar_fd('a', fd);
//    ft_putchar_fd('b', fd);
//    return (0);
// }


// // fonction ft_putendl_fd

// #include <unistd.h>
// #include <fcntl.h>
 
// int main()
// {
//    int fd;
//    fd = open("test.txt",O_CREAT | O_WRONLY, 777);
//    ft_putendl_fd("char *str",  fd);
//    ft_putchar_fd('b', fd);
//    return (0);
// }


// // fonction ft_putnbr_fd

// #include <unistd.h>
// #include <fcntl.h>
 
// int main()
// {
//    int fd;
//    fd = open("test.txt",O_CREAT | O_WRONLY, 777);
//    ft_putnbr_fd(32,  fd);
//    return (0);
// }


// // fonction ft_putstr_fd

// #include <unistd.h>
// #include <fcntl.h>
 
// int main()
// {
//    int fd;
//    fd = open("test.txt",O_CREAT | O_WRONLY, 777);
//    ft_putstr_fd("char *str", fd);
//    ft_putchar_fd('b', fd);
//    return (0);
// }


// // fonction split
// int    main()
// {
//     int        i;
//     char    **split;
//     char *s = "      split       this for   me  !       ";
//     // split = ft_split("agvhbjkagbhjnkmlabhnjkma", 'a');
//     split = ft_split(s, ' ');
//     i = 0;
//     while (split[i])
//     {
//         printf("%s\n", split[i]);
//         i++;
//     }
// }


// fonction ft_strchr
// int main()
// {
//     char const s1[13] = "aymen_BOURKAB";
//     printf("%s\n", ft_strchr(s1, 'y'));
// }


// fonction ft_strdup
// int main()
// {
//     char *c;
//     c = "12235";
//     printf("%s", ft_strdup(c));
// }

// // fonction ft_striteri
// void (f)(unsigned int i, char *c)
// {
//     printf("L'element d'indice %d est %c \n", i, c[0]);
// }
// int main()
// {
//     char s[] = "1235";
//     ft_striteri(s, &f);
// }


// // fonction ft_strjoin
// #include <string.h>
// int main()
// {
//     // char const s1[] = "aymen_";
//     // char const s2[] = "BOURKAB";
//     printf("%d\n", strjoin(NULL, NULL));
// }


// // fonction ft_strlcat
// int main()
// {
//     const char s2[] = "BOURKAB";
//     printf("%zu\n", ft_strlcat(NULL, s2, 0));
// }

// // fonction ft_strlcpy
// int main()
// {
//     const char s2[5] = "aymen";
//     char s1[20] = "wwwwwiiiii";
//     ft_strlcpy(s1, s2, 6);
//     printf("%s\n", s1);
// }


// // fonction ft_strlen
// int main()
// {
//     const char *a = NULL;
//     const char *a = "";
//     printf("%zu\n", ft_strlen(a));
// }


// // fonction ft_strmapi
// char f(unsigned int i, char c)
// {
//     return(c + i);
// }

// int main()
// {
//     char s[] = "1235";
//     printf("%s", ft_strmapi(s, &f));
// }


// // fonction ft_strncmp
// int main()
// {
//     char const *haystack = "aymen_BOURKAB";
//     char const *needle = "aymen";

//     printf("%d\n", ft_strncmp(haystack, needle, 7));
// }

// // fonction ft_strnstr
// int main()
// {
//     // char const *haystack = "aymen_BOURKAB";
//     char const *needle = "aymen";
//     printf("%s\n", ft_strnstr(NULL, needle, 0));
// }

// // fonction ft_strrchr
// int main()
// {
//     char const s1[13] = "aymen_BOURKAB";
//     printf("%s\n", ft_strrchr(s1, '_'));
// }


// // fonction ft_strtrim
// int main()
// {
//     char const s1[13] = "aymen_BOURKAB";
//     char const set[2] = "aB";
//     printf("%s\n", ft_strtrim(s1, set));
// }

// // fonction ft_substr
// int main()
// {
//     const char s[13] = "aymen_BOURKAB";
//     printf("%s\n", ft_substr(s, 6, 7));
// }

// // fonction tolower
// int main()
// {
//     char a = 'B';
//     char b = '*';
//     char c = '5';
//     printf("%d\n", ft_tolower(a));
//     printf("%d\n", ft_tolower(b));
//     printf("%d\n", ft_tolower(c));
// }

// // fonction toupper
// int main()
// {
//     char a = 'b';
//     char b = '*';
//     char c = '5';
//     printf("%d\n", ft_toupper(a));
//     printf("%d\n", ft_toupper(b));
//     printf("%d\n", ft_toupper(c));
// }

