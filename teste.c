#include <stdio.h>
#include <stdlib.h>

/*
1) Faça um programa que receba como entrada a nota de
um aluno. O programa deve exibir “aprovado” caso a nota
seja igual ou superior a 6, ou exibir “reprovado” caso
contrário.
*/

int main(){
    float nota;

    printf("Digite a nota do aluno: ");
    scanf("%f", &nota);
    printf("%f", nota);
    return 0;
}