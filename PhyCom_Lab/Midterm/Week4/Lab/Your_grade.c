#include <stdio.h>
 
int main() {
    char t;
 
    scanf("%c", &t);
 
    if ( (int) t > 90 ){
            t = (char) ( ( (int) t ) - 32 );
 
    }
 
    switch (t)
    {
    case 'A':
        printf("Genius");
        break;
    case 'B':
        printf("Good");
        break;
    case 'C':
        printf("Try Harder");
        break;
    case 'D':
        printf("Very Bad");
        break;
    case 'F':
        printf("Fail");
        break;
    default:
        printf("Invalid Input");
    }
    return 0;
}