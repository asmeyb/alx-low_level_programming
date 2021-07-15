#ifndef HOLBERTON_H
#define HOLBERTON_H

int _putchar(char c);
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
void errors(void);
int _strlen(char *s);
int is_digit(char *s);
char *check_zero(char *str, int len);
char *remove_zeroes(char *str, int len);
char *mul(char *num1, char *num2, int len1, int len2);
int _isstrdigit(char *str);
char *init(char *arr, int size)

#endif
