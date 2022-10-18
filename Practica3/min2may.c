#include <stdio.h>
#include <ctype.h>
#include <unistd.h>

int main(){
    char c;
    char may;
    int n = 0;
    int totalVowels = 0;
    do{
        n = read(STDIN_FILENO,&c,1);
        may = tolower(c);
        //write(STDOUT_FILENO,&may,1);
        if(may == 'a' || may == 'e' || may == 'i' || may == 'o' || may == 'u'){
            write(STDOUT_FILENO,&may,1);
            totalVowels += 1;
            }
        }while(n != 0);
        printf("\nEl total de vocales es %d\n",totalVowels);
    return 0;
}


