#include "mbed.h"
int t_1 = 0;
int t_2 = 1;
int next_term = 0;
int max_term = 10;

// main() runs in its own thread in the OS]
/*Simple For Loop to execute the Fibonacci sequence, the first term in the sequence is added to the next term upto a limit,
the limit here in this example is a max of 10 terms in the sequence. This code has some added printf statements to understand what gets printed to 
screen when
*/
int main()
{
    printf("Finbonachi series: %d,%d, \r\n", t_1, t_2);
    for(int i = 0; i < max_term; i ++){
        next_term = t_1 + t_2;
        printf("%d, " , next_term);
        t_1 = t_2;
        t_2 = next_term;
    }
    printf("what does this do\n");
    printf("just a note\r\n");
    //while (true) {

    //}
}

