#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
 *
 * */

char *readline(char s[], int n) {
    int ch, i=0;
    while ((ch = getchar()) != '\n')
      if (i < n)
          s[i++] = ch;
    s[i] = '\0';
    return n;
}

char *readline() {
    char *s = malloc(10001);
    int ch, i=0;
    while ((ch = getchar()) != '\n') 
      if (i < 10000) 
          s[i++] = ch;
    s[i] = '\0';
    s = realloc(s, strlen(s)+1);
    return s;
}

void main() {
    char *a = readline();
    printf("%s\n", a);
    char s[100], t[100];
    scanf("%s",s);
    fgets(t, 7, stdin);
    printf("%s, %s\n",s, t);
}
