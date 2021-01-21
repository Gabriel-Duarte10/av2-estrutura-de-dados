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
#define qtdA 10
#define qtdB 7
#define qtdC 15
#define qtdD 9
using namespace std;

struct media
{
    float turma1;
    float turma2;
    float turma3;
    float turma4;
};

void preenche(struct media *people)
{
    int i;
    cout << "Preenchimento de Medias" << endl
         << endl;
    cout << "Turma A" << endl;
    for (i = 0; i < qtdA; i++)
    {
        cout << "Media do aluno " << i + 1 << " da Turma A" << endl;
        cin >> people[i].turma1;
    }
    system("cls");
    cout << "Turma B" << endl;
    for (i = 0; i < qtdB; i++)
    {
        cout << "Media do aluno " << i + 1 << " da Turma B" << endl;
        cin >> people[i].turma2;
    }
    system("cls");

    cout << "Turma C" << endl;
    for (i = 0; i < qtdC; i++)
    {
        cout << "Media do aluno " << i + 1 << " da Turma C" << endl;
        cin >> people[i].turma3;
    }
    system("cls");
    cout << "Turma D" << endl;
    for (i = 0; i < qtdD; i++)
    {
        cout << "Media do aluno " << i + 1 << " da Turma D" << endl;
        cin >> people[i].turma4;
    }
}
int menu()
{
    int op;
    cout << "Digite a forma de Ordenacao desejada" << endl;
    cout << "0 - Sair" << endl;
    cout << "1 - Insertion Turma A" << endl;
    cout << "2 - Selecao Turma B" << endl;
    cout << "3 - Quick Turma C" << endl;
    cout << "4 - Merge Turma D" << endl;
    cin >> op;
    return op;
}
void exibir(struct media *people, int tamanho)
{
    int i;
    if (tamanho == qtdA)
    {
        for (i = 0; i < tamanho; i++)
        {
            cout << people[i].turma1 << "  ";
        }
    }
    else
    {
        if (tamanho == qtdB)
        {
            for (i = 0; i < tamanho; i++)
            {
                cout << people[i].turma2 << "  ";
            }
        }
        else
        {
            if (tamanho == qtdC)
            {
                for (i = 0; i < tamanho; i++)
                {
                    cout << people[i].turma3 << "  ";
                }
            }
            else
            {
                if (tamanho == qtdD)
                {
                    for(i=0;i<tamanho;i++)
                    {
                        cout << people[i].turma4 << "  ";
                    }
                    
                }
            }
        }
    }
    cout << endl;
}
void insertion(struct media *people)
{
    int i, j, tmp;
    for (i = 1; i < qtdA; i++)
    {
        tmp = people[i].turma1;
        for (j = i - 1; j >= 0 && tmp < people[j].turma1; j--)
        {
            people[j + 1].turma1 = people[j].turma1;
        }
        people[j + 1].turma1 = tmp;
    }
    exibir(people, qtdA);
}
void selection(struct media *people)
{
    int i, j, min, x;
    for (i = 0; i < qtdB - 1; i++)
    {
        min = i;
        for (j = i + 1; j < qtdB; j++)
        {
            if (people[j].turma2 < people[min].turma2)
                min = j;
        }
        x = people[min].turma2;
        people[min].turma2 = people[i].turma2;
        people[i].turma2 = x;
    }
    exibir(people, qtdB);
}
void quick(struct media *people, int esq, int qtdC1)
{
    int pivo = esq, i, ch, j;
    for (i = esq + 1; i <= qtdC1; i++)
    {
        j = i;
        if (people[j].turma3 < people[pivo].turma3)
        {
            ch = people[j].turma3;
            while (j > pivo)
            {
                people[j].turma3 = people[j - 1].turma3;
                j--;
            }
            people[j].turma3 = ch;
            pivo++;
        }
    }
    if (pivo - 1 >= esq)
    {
        quick(people, esq, pivo - 1);
    }
    if (pivo + 1 <= qtdC1)
    {
        quick(people, pivo + 1, qtdC1);
    }
}

void mergeSort(struct media *vetor, int posicaoInicio, int posicaoFim)
{
    int i, j, k, metadeTamanho, *vetorTemp;
    if (posicaoInicio == posicaoFim)
        return;
    metadeTamanho = (posicaoInicio + posicaoFim) / 2;
    mergeSort(vetor, posicaoInicio, metadeTamanho);
    mergeSort(vetor, metadeTamanho + 1, posicaoFim);
    i = posicaoInicio;
    j = metadeTamanho + 1;
    k = 0;
    vetorTemp = (int *)malloc(sizeof(int) * (posicaoFim -
                                             posicaoInicio + 1));
    while (i < metadeTamanho + 1 || j < posicaoFim + 1)
    {
        if (i == metadeTamanho + 1)
        {
            vetorTemp[k] = vetor[j].turma4;
            j++;
            k++;
        }
        else
        {
            if (j == posicaoFim + 1)
            {
                vetorTemp[k] = vetor[i].turma4;
                i++;
                k++;
            }
            else
            {
                if (vetor[i].turma4 < vetor[j].turma4)
                {
                    vetorTemp[k] = vetor[i].turma4;
                    i++;
                    k++;
                }
                else
                {
                    vetorTemp[k] = vetor[j].turma4;
                    j++;
                    k++;
                }
            }
        }
    }
    for (i = posicaoInicio; i <= posicaoFim; i++)
    {
        vetor[i].turma4 = vetorTemp[i - posicaoInicio];
    }
    free(vetorTemp);
}