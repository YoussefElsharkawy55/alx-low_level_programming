#ifndef MAIN_H
#define MAIN_H

int _putchar(char c);
char *_strcat(char *dest, const char *src);
char *_strncat(char *dest, const char *src, int n);
char *_strncpy(char *dest, const char *src, int n);
int _strcmp(const char *s1, const char *s2);
void reverse_array(int *a, int n);
char *string_toupper(char *str);
char *cap_string(char *str);
char *leet(char *str);
char *rot13(char *str);
void print_number(int n);
char *infinite_add(const char *n1, const char *n2, char *r, int size_r);
void print_buffer(char *b, int size);

#endif
