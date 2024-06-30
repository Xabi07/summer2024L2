#include "mbed.h"
int t_1 = 0;
int t_2 = 1;
int next_term = 0;
int max_term = 10;

// main() runs in its own thread in the OS]
/*Added a recursive loop to execute the Finbonachi sequence, the recursive loop is called using the "fib(i)" statement, 
when "fib(i)" is called the program goes to the function "int Fib(int n)", here the Finbonachi series is executed similar to the previous
example, just some slightly different logic is used to implement the same sequence, this program prints both 
version of the sequence out to the terminal
*/
int fib(int n){
    if(n==0)
        return 0;
    if(n==1)
        return 1;
    else 
        return(fib(n-1) + fib(n-2));    

}

int main() 
{
    printf("Finbonanchi series recursive loop: ");
    for(int i = 0; i < max_term; i++){
        printf("%d, ", fib(i));
    }
    printf("\r\n");
    printf("Finbonachi series simple loop: %d,%d, ", t_1, t_2);
    for(int i = 2; i < max_term; i ++){
        next_term = t_1 + t_2;
        printf("%d, " , next_term);
        t_1 = t_2;
        t_2 = next_term;

    }
    printf("\r\n");
    //printf("what does this do\n");
    //printf("just a note\r\n");
    while (true) {

    }
}

