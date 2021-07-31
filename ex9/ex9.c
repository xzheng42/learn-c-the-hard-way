#include <stdio.h>

// int main(int argc, char *argb[])
// {
//     int i = 0;
//     while (i < 25) {
//         printf("%d", i);
//         i++;
//     }

//     // need this to add a final newline
//     printf("\n");

//     return 0;

// }

int main(int argc, char *argb[])
{
    int i = 25;
    while (i >= 0) {
        printf("%d\n", i);
        i--;
    }

    // need this to add a final newline
    printf("\n");

    return 0;

}