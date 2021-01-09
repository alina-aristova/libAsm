
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <string.h>
#include <errno.h>
#include <unistd.h>

ssize_t     ft_read(int fd, char *buf, int size);
ssize_t     ft_write(int fd, char *buf, int size);
int     ft_strcmp(char *str1, char *str2);
char    *ft_strcpy(char *dst, char *src);
char    *ft_strdup(char *str);
unsigned long     ft_strlen(char *str);

int main(void)
{
    char    *empty_str;
    char    *long_str;
    char    *long_str1;
    char    *long_str2;
    char    buf[1000];
    int     fd;
    char s[] = "sasdhdjsakhdjkahsdjkshakdjhsakdjhsjdhklsahdklsajhdksahdkjssdasdasdasd";
	char *s1 = "";
	char *s2 = "hsja";
	char *s3 = "Hello world";
	char list[] = "111111111111";
    int     ft_fd;
    empty_str = "";
    long_str = "fakdjfjasdjfadjsfj;ldajs;lfkja;sdlkfja;lsdkfj;alsdkjf;asldkfj;asldkfja;sdlkfja;slkdfja;sdklfja;skdf";
    long_str1 = "fakdjfjasdjfadjsfj;ldajs;lfkja;sdlkfja;lsdkfj;alsdkjf;asldkfj;asldkfja;sdlkfja;slkdfja;sdkls;lfkja;sdlkfja;lsdkfj;alsdkjf;a\
    s;lfkja;sdlkfja;lsdkfj;alsdkjf;a\
    s;lfkja;sdlkfja;lsdkfj;alsdkjf;a\
    s;lfkja;sdlkfja;lsdkfj;alsdkjf;a\
    s;lfkja;sdlkfja;lsdkfj;alsdkjf;a\
    s;lfkja;sdlkfja;lsdkfj;alsdkjf;a\
    s;lfkja;sdlkfja;lsdkfj;alsdkjf;a\
    s;lfkja;sdlkfja;lsdkfj;alsdkjf;a\
    s;lfkja;sdlkfja;lsdkfj;alsdkjf;a\
    s;lfkja;sdlkfja;lsdkfj;alsdkjf;afja;skdf\
    s;lfkja;sdlkfja;lsdkfj;alsdkjf;a";
   
    long_str2 = "fakdjfjasdjfadjsfj;ldajs;lfkja;sdlkfja;lsdkfj;alsdkjf;asldkfj;asldkfja;sdlkfja;slkdfja;sdklfja;skdf";
    
    printf("<-------------------------------Test ft_strlen------------------------------->\n\n");


    printf("expectation: >%lu<\n", strlen(empty_str));
    printf("reality:     >%lu<\n", ft_strlen(empty_str));
    printf("expectation: >%lu<\n", strlen(long_str));
    printf("reality:     >%lu<\n", ft_strlen(long_str));
    printf("expectation: >%lu<\n", strlen(long_str1));
    printf("reality:     >%lu<\n\n", ft_strlen(long_str1));



    printf("<-------------------------------Test ft_strcpy------------------------------->\n\n");


    printf("expectation:  >%s<\n", strcpy(buf, empty_str));
    printf("reality:      >%s<\n", ft_strcpy(buf, empty_str));
    printf("expectation:  >%s<\n", strcpy(buf, long_str));
    printf("reality:      >%s<\n\n", ft_strcpy(buf, long_str));
    printf("expectation:  >%s<\n", strcpy(buf, empty_str));
    printf("reality:      >%s<\n", ft_strcpy(buf, empty_str));
    printf("expectation:  >%s<\n", strcpy(buf, long_str1));
    printf("reality:      >%s<\n\n", ft_strcpy(buf, long_str1));
    printf("expectation:  >%s<\n", strcpy(buf, empty_str));
    printf("reality:      >%s<\n", ft_strcpy(buf, empty_str));
    printf("expectation:  >%s<\n", strcpy(buf, long_str));
    printf("reality:      >%s<\n\n", ft_strcpy(buf, long_str));
    printf("MY - |%s|\n", ft_strcpy(s,"sgfhfghkgggkkyykhkghjgjfggjfhgfghfhgfjh"));
	printf("LIBC - |%s|\n", strcpy(s,"sgfhfghkgggkkyykhkghjgjfggjfhgfghfhgfjh"));
	printf("MY - |%s|\n", ft_strcpy(s,""));
	printf("LIBC - |%s|\n", strcpy(s,""));


    printf("<-------------------------------Test ft_strcmp------------------------------->\n\n");


    printf("test1:\nexpectation: |%d|\nreality:     |%d|\n\n", strcmp("", "       "), ft_strcmp("", "       "));
    printf("test2:\nexpectation: |%d|\nreality:     |%d|\n\n", strcmp("", "abc"), ft_strcmp("", "abc"));
	printf("test3:\nexpectation: |%d|\nreality:     |%d|\n\n", strcmp("abc", ""), ft_strcmp("abc", ""));
    printf("test4:\nexpectation: |%d|\nreality:     |%d|\n\n", strcmp("abc", "cda"), ft_strcmp("abc", "cda"));
    printf("test5:\nexpectation: |%d|\nreality:     |%d|\n\n", strcmp("cda", "abc"), ft_strcmp("cda", "abc"));
    printf("test6:\nexpectation: |%d|\nreality:     |%d|\n\n", strcmp("abcd", "abc"), ft_strcmp("abcd", "abc"));
    printf("test7:\nexpectation: |%d|\nreality:     |%d|\n\n", strcmp("    ", " cda"), ft_strcmp("    ", " cda"));
    printf("test8:\nexpectation: |%d|\nreality:     |%d|\n\n", strcmp("\xff\x80", "\xff\x00"), ft_strcmp("\xff\x80", "\xff\x00"));
    printf("test9:\nexpectation: |%d|\nreality:     |%d|\n\n", strcmp("\xff\xfe", "\xff"), ft_strcmp("\xff\xfe", "\xff"));
    printf("test10:\nexpectation: |%d|\nreality:     |%d|\n\n", strcmp("\xff", "\xff\xfe"), ft_strcmp("\xff", "\xff\xfe"));
	printf("test11:\nexpectation: |%d|\nreality:     |%d|\n\n", strcmp("", "asdf"), ft_strcmp("", "asdf"));
	printf("test12:\nexpectation: |%d|\nreality:     |%d|\n\n", strcmp("bon", "bo"), ft_strcmp("bon", "bo"));
	printf("test13:\nexpectation: |%d|\nreality:     |%d|\n\n", strcmp("bonjour", "onjour"), ft_strcmp("bonjour", "onjour"));
    printf("test14:\nexpectation: |%d|\nreality:     |%d|\n\n", strcmp("asdklfjasdfj////asdf'''asdf3##", "asdklfjasdfj////asdf'''asdf3##"), ft_strcmp("asdklfjasdfj////asdf'''asdf3##", "asdklfjasdfj////asdf'''asdf3##"));
	printf("test15:\nexpectation: |%d|\nreality:     |%d|\n\n", strcmp("the\0hidden", "thehidden"), ft_strcmp("the\0hidden", "thehidden"));
	printf("test16:\nexpectation: |%d|\nreality:     |%d|\n\n", strcmp("Lorem ipsum dolor st amet, consectetur adipiscing", "Lodsfsdfasdf"), ft_strcmp("Lorem ipsum dolor st amet, consectetur adipiscing", "Lodsfsdfasdf"));
	printf("test17:\nexpectation: |%d|\nreality:     |%d|\n\n", strcmp("\x01", "\x01"), ft_strcmp("\x01", "\x01"));
	printf("test18:\nexpectation: |%d|\nreality:     |%d|\n\n", strcmp("\x02", "\x01"), ft_strcmp("\x02", "\x01"));
	printf("test19:\nexpectation: |%d|\nreality:     |%d|\n\n", strcmp("\x01", "\x02"), ft_strcmp("\x01", "\x02"));
	printf("test20:\nexpectation: |%d|\nreality:     |%d|\n\n", strcmp("\xff", "\xff\xfe"), ft_strcmp("\xff", "\xff\xfe"));
	printf("test21:\nexpectation: |%d|\nreality:     |%d|\n\n", strcmp("\xff", "\xff\xfe"), ft_strcmp("\xff", "\xff\xfe"));
	printf("test22:\nexpectation: |%d|\nreality:     |%d|\n\n", strcmp("\xff", "\xff\xfe"), ft_strcmp("\xff", "\xff\xfe"));
	printf("test23:\nexpectation: |%d|\nreality:     |%d|\n\n", strcmp("\xff", "\xff\xfe"), ft_strcmp("\xff", "\xff\xfe"));
	printf("test24:\nexpectation: |%d|\nreality:     |%d|\n\n", strcmp("\xff", "\xff\xfe"), ft_strcmp("\xff", "\xff\xfe"));
	printf("test25:\nexpectation: |%d|\nreality:     |%d|\n\n", strcmp("\xff", "\xff\xfe"), ft_strcmp("\xff", "\xff\xfe"));
	printf("test26:\nexpectation: |%d|\nreality:     |%d|\n\n", strcmp("\xff", "\xff\xfe"), ft_strcmp("\xff", "\xff\xfe"));
	printf("test27:\nexpectation: |%d|\nreality:     |%d|\n\n", strcmp("\xff", "\xff\xfe"), ft_strcmp("\xff", "\xff\xfe"));
	printf("test28:\nexpectation: |%d|\nreality:     |%d|\n\n", strcmp("\xff", "\xff\xfe"), ft_strcmp("\xff", "\xff\xfe"));
	printf("test29:\nexpectation: |%d|\nreality:     |%d|\n\n", strcmp("\xff", "\xff\xfe"), ft_strcmp("\xff", "\xff\xfe"));
	printf("test30:\nexpectation: |%d|\nreality:     |%d|\n\n", strcmp("\xff", "\xff\xfe"), ft_strcmp("\xff", "\xff\xfe"));
	printf("test31:\nexpectation: |%d|\nreality:     |%d|\n\n", strcmp("\xff", "\xff\xfe"), ft_strcmp("\xff", "\xff\xfe"));
     printf("Test ft_write:\n\n");
    char    *str = "1234567";
    char    buf1[1000];
    fd = open("text.txt", O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH);
    ft_fd = open("ft_text.txt", O_WRONLY | O_CREAT);
    write(1, str, 7);
    printf("\n");
    ft_write(1, str, 7);
    printf("\n");
    write(fd, str, 7);
    ft_write(ft_fd, str, 7);
    printf(">>>> write file!\n");
    printf("error: %zd, %s\n", write(21, str, 7), strerror(errno));
    errno = 0;
    printf("error: %zd, %s\n\n", ft_write(21, str, 7), strerror(errno));
    close(fd);
    close(ft_fd);
    printf("Test ft_read\n\n");
    fd = open("text.txt", O_RDONLY);
    ft_fd = open("ft_text.txt", O_RDONLY);
    read(fd, buf1, 7);
    printf(">%s<\n", buf1);
    ft_read(ft_fd, buf1, 7);
    printf(">%s<\n", buf1);
    printf("error: %zd, %s\n", read(21, buf, 7), strerror(errno));
    errno = 0;
    printf("error: %zd, %s\n\n", ft_read(21, buf, 7), strerror(errno));
    printf("Test ft_strdup\n\n");
    printf("empty: >%s<\n", strdup(empty_str));
    printf("empty: >%s<\n", ft_strdup(empty_str));
    printf("long: >%s<\n", strdup(long_str));
    printf("long: >%s<\n", ft_strdup(long_str));
    printf("long1: >%s<\n", strdup(long_str1));
    printf("long1: >%s<\n", ft_strdup(long_str1));
    return (0);
}