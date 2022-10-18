#include <stdio.h>


int main(){
    FILE *sort;
    char *cadena[10];
    cadena[0] = "hola";
    cadena[1] = "otra";
    cadena[2] = "ya";
    cadena[3] = "fin";
    sort = popen("sort","w");
    for(int i = 0;i < 4;i++){
        fprintf(sort,"%s\n", cadena[i]);
    }
    pclose(sort);
    return 0;
}

