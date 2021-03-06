/* Faça um programa que deverá armazenar as médias
finais dos alunos de 4 turmas:
 Turma A – 10 alunos
 Turma B – 7 alunos
 Turma C – 15 alunos
 Turma D – 9 alunos
Crie um vetor de float para cada turma e depois faça 4
funções de ordenação (Inserção, Seleção, Quick e Merge).
Para cada turma, chame uma função de ordenação
diferente.*/

#include <iostream>
#include <stdlib.h>
#include "funcoes.h"
#define n 1000
using namespace std;

int main()
{
    struct media aluno[n];
    int op, i;
    preenche(aluno);
    system("pause");
    system("cls");
    do
    {
        op = menu();

        switch (op)
        {
        case 1:
            insertion(aluno);
            break;
        case 2:
            selection(aluno);
            break;

        case 3:
            quick(aluno, 0, qtdC - 1);
            exibir(aluno, qtdC);
            break;
            case 4:
            mergeSort(aluno,0,qtdD-1);
            exibir(aluno, qtdD);
            break;
        }
        system("pause");
        system("cls");

    } while (op > 0);

    return 0;
}