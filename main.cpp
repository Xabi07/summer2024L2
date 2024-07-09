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
int fib(int n){         //finbonachi function call
    if(n==0)            //logic to print 1st term
        return 0;
    if(n==1)            //logic to print 2nd term
        return 1;
    else                //logic to print remaining terms in the sequence upto max term
        return(fib(n-1) + fib(n-2));    //returms 3rd,4th,5th... and so on terms in the sequence

}

int main() 
{
    printf("Finbonanchi series recursive loop: "); //just prints to screen
    for(int i = 0; i < max_term; i++){  //For Loop from first term to the max term
        printf("%d, ", fib(i));         //calls the recursive loop and prints the current term each iteration
    }
    printf("\r\n");
    printf("Finbonachi series simple loop: %d,%d, ", t_1, t_2); //prints the series in a simple looop
    for(int i = 2; i < max_term; i ++){     //start the loop at the 3rd term, term1 and term2 printed in line above
        next_term = t_1 + t_2;      //next term is t1 + t2
        printf("%d, " , next_term); //prints the term to screen
        t_1 = t_2;                  //sets the t1 == t2 for the next iteration of the for loop
        t_2 = next_term;            //sets t2 = to the nec=xt term

    }
    printf("\r\n");                 //just a carraige returm amd new line specical characters
    //printf("what does this do\n");
    //printf("just a note\r\n");
    while (true) {                  //program does nothing else

    }
}

