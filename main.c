/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llaakson <llaakson@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 12:07:27 by llaakson          #+#    #+#             */
/*   Updated: 2024/05/09 20:59:28 by llaakson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <unistd.h>
#include <string.h> // REMOVE !
#include <stdlib.h> // REMOVE !
#include <strings.h> // bzero test
#include <ctype.h> // vomit

char testi(unsigned int i, char c)
{
	int a = i;
	a = 0;
	c = 'a';
	return (c);
}
void voidtesti(unsigned int i, char *c)
{
	(void)i;
	c = c - 1;
}


int main(void)
{

	char	isalpha1 = 'A';
	printf("--------ISALPHA--------\n");
	printf("ft_isalpha: %d\n", ft_isalpha(isalpha1));
	printf("isalpha: %d \n", isalpha(isalpha1));
	
	char	isdigit1 = '1';
	printf("--------ISDIGIT--------\n");
	printf("ft_isdigit: %d\n", ft_isdigit(isdigit1));
	printf("isdigit: %d \n", isdigit(isdigit1));

	char	isalnum1 = ' ';
	printf("--------ISAlNUM--------\n");
	printf("ft_isalnum: %d\n", ft_isalnum(isalnum1));
;	printf("isalnum: %d \n", isalnum(isalnum1));

	printf("--------ISASCII--------\n");
	printf("ft_isascii: %d\n", ft_isascii(isalpha1));
	printf("isascii: %d \n", isascii(isalpha1));

	printf("--------ISPRINT--------\n");
	printf("ft_isprint: %d\n", ft_isprint(isalpha1));
	printf("isprint: %d \n", isprint(isalpha1));

	printf("--------STRLEN--------\n");
	char t[100] = "universalTESTstring";
	printf("ft_strlen: %d\n", ft_strlen("tripouille")); // should return unsgined long??
	printf("strlen: %lu\n", strlen("tripouille"));

	printf("--------MEMSET--------\n");
	printf("ft_memset: %s \n", ft_memset(t,'0',4));
	printf("memset: %s \n", memset(t,'0',4));	

	printf("--------MEMCPY--------\n");
	char peruna[] = "Peruna";
	char final[] = "abcdde";
	printf("%s\n", final);
	ft_memcpy(final, peruna, sizeof(char)*6);
	printf("%s \n", final);
	printf("memcpy: %s\n", memcpy(peruna,final, sizeof(char)*6));

	printf("--------MEMMOVE--------\n");
	char string5 [] = "stackoverflow";
    char *third5, *fourth5;
    third5 = string5;
    fourth5 = string5;
	printf("memmove:\n");
    puts(string5);
    memmove(fourth5+5, fourth5, 0); //a
    puts(fourth5);
	printf("ft_memmove:\n");
	char string3 [] = "stackoverflow";
    char *third3, *fourth3;
    third3 = string3;
    fourth3 = string3;

    puts(string3);
    ft_memmove(fourth3+5, fourth3, 0); //a
    puts(fourth3);

	printf("--------STRNSTR--------\n");
	char haystack[] = "aaabcabcd";
	char needle[] = "aabc";
	printf("ft_strnstr:%s\n",ft_strnstr(haystack, needle, -1));
	printf("strnstr:%s\n",strnstr(haystack, needle, -1));

	printf("--------ATOI--------\n");
	char atoistring[] = "    -2147389";
	printf("ft_atoi:%d\n", ft_atoi(atoistring));
	printf("atoi:%d\n", atoi(atoistring));
	
	printf("--------STRLCPY--------\n");
	char source[] = "123456789";
	char destination[20];
	ft_strlcpy(destination, source, 0);
	printf("ft_strlcpy:%s\n",destination);
	strlcpy(destination, source, 0);
	printf("strlcpy:%s\n",destination); // tarkista palautus

	printf("--------STRLCAT--------\n");
	char pestination[20] = "pqrstuvwxyz";
	char pestination1[20] = "pqrstuvwxyz";
	char soossi[] = "abcd";
	size_t pop = 17;
	printf("%lu ",strlcat(pestination,soossi,pop));
	printf("strlcat: %s\n", pestination);
	printf("%lu ",ft_strlcat(pestination1,soossi,pop));
	printf("ft_strlcat: %s\n", pestination);

	printf("--------TOUPPER--------\n");
	char	tou = '7';
	printf("ft_toupper: %c\n", ft_toupper(tou));
	printf("toupper: %c\n", toupper(tou));

	printf("--------TOLOWER--------\n");
	printf("ft_tolower: %c\n", ft_tolower(tou));
	printf("tolower: %c\n", tolower(tou));

	printf("--------STRCHR--------\n");
	const char heystack1[] = "oiimgorgiynof";
	const char f = 'i';
	char *ypoint;
	ypoint = ft_strchr(heystack1, f);
	printf("char to find %c string: %s \n", f, ypoint);
	char *rpoint;
	rpoint = strchr(heystack1, f);
	printf("char to find %c string: %s \n", f, rpoint);
	
	printf("--------STRRCHR-----\n");
	printf("char to find %c string: %s \n", f, ypoint);
	printf("char to find %c string: %s \n", f, rpoint);


	printf("--------STRNCMP--------\n");
	char s1[] = "aaaaaaaaa";
	char s2[] = "aaaaapaaa";
	printf("%d \n",ft_strncmp(s1,s2,8));
	printf("%d \n",strncmp(s1,s2,8));

	printf("--------MEMCHR--------\n");
	char string[] = "   a";
	printf("%s \n", ft_memchr(string,'a',3));
	printf("%s \n", memchr(string,'a',3));

	printf("--------MEMCMP--------\n");
	char string1[] = "aerg";
	char string2[] = "agre";
	printf("%d \n", ft_memcmp(string1,string2,0));
	printf("%d \n", memcmp(string1,string2,0));

	printf("--------CALLOC--------\n");
	

	printf("--------STRDUP--------\n");
	char test[] = "ITS WORKING!!";
	char *new = ft_strdup(test);
	printf("ft_strdup:%s\n", new);
	new = strdup(needle);
	printf("srdup:%s\n", new);
	free (new);

	printf("--------BZERO--------\n"); 
	ft_bzero(haystack,0);
	printf("ft_bzero: %s\n", haystack);
	char haystack1[] = "aeHIVeogmHIVEasd";
	bzero(haystack1,(0));
	printf("bzero: %s\n", haystack1);
	
	printf("--------FT_SUBSTR------\n");
	char testsub [] = "01234";
	char *newsub = ft_substr(testsub,10,10);
	printf("ft_substr:%s\n", newsub);
	
	printf("------FT_STRJOIN-----\n");
	char *s8 = "123456";
	char *s9 = "abcdghhjh0.,?";
	printf("%s\n", ft_strjoin(s8,s9));

	printf("------FT_STRTRIM-----\n");
	char *trim = "11123456111";
	char *trimmer = "111";
	printf("%s\n", ft_strtrim(trim,trimmer));

	puts("-----------FT_PUTCHAR_FD----------");
	ft_putchar_fd('k',1);
	ft_putchar_fd('\n',1);
	
	puts("----------FT_PUTSTR_FD--------");
	ft_putstr_fd("dfdfgd",1);
	ft_putchar_fd('\n',1);

	puts("----------FT_PUTENDL_FD--------");
	ft_putendl_fd("dfdfgd",1);
	
	puts("----------nbr----------");
	ft_putnbr_fd(-2147483648,1);
	ft_putchar_fd('\n',1);

	puts("----------ITOA--------");
	int aa= -2147483648;
	int bb = 2147483647;
	printf("%s\n",ft_itoa(aa));
	printf("%s\n",ft_itoa(bb));

	puts("--------STRMAPI--");
	char *uu = "348ghw9iqf3i0gAKSF*&^%";
	//char (*fun)(unsigned int, char);
	//fun = &testi;
	printf("%s\n",ft_strmapi(uu,&testi));

	puts("------STRITERI----");
	char *uuu ="adfb";
	ft_striteri(uuu,&voidtesti);
	printf("%s\n", uuu);

	puts("------SPLIT-----");
	char **testt;
	char *stringh = "      split       this for   me  !       ";
	testt = ft_split(stringh, ' ');

	int i = 0;
	while (i<6)
	{
		printf("array: %s\n", testt[i]);
		i++;
	}	
	
	return 0;
}
