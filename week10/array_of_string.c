/* Array of string demonstratoin
 *
 * Sam Scott, McMaster University, 2024
 */
#include <stdio.h>
#include <stdlib.h>

#define N 4
#define LENGTH 10

void main() {

    char words[N][LENGTH]={"word", "what", "where", "why"}; // rectangular: wasteful 
    //char *words[] = {"word", "what", "where", "why"};     // ragged: immutable

    for (int i=0; i<N; i++) 
        printf("%s ",words[i]);
    puts("");

    for (int i=0; i<N; i++)  // Segmentation fault if 'words' is immutable
        words[i][0] = 'W';

    for (int i=0; i<N; i++)
        printf("%s ",words[i]);
    puts("");

}
