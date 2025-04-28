#include <stdio.h>
#include <stdlib.h>


void printMove(int num, char A, char B){
    printf("Mova o numero %d de %c para %c\n", num, A, B);
}

void hanoi(int n, char origem, char destino, char temp){
    if(n == 1)printMove(1, origem, destino);
    else{
        hanoi(n-1, origem, temp, destino);
        printMove(n, origem, destino);
        hanoi(n-1, temp, destino, origem);
    }

}


int main()
{
    int n = 6;
    char origem = 'a';
    char destino = 'c';
    char auxiliar = 'b';
    hanoi(6, origem, destino, auxiliar);

    return 0;
}
