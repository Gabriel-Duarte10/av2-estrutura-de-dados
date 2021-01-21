#include <iostream>
#include <stdlib.h>
#include "funcoes.h"
#include <locale.h>
#define n 1000

using namespace std;

int main()
{
    setlocale (LC_ALL,"Portuguese");
    int op;
    struct pilha pessoa[n];
    criar();
    do
    {
        op = menu();

        switch (op)
        {
        case 1:
            inserirfim(pessoa);
            break;
        case 2:
            excluirfim();
            break;
        case 3:
            exibirinicio(pessoa);
            break;
        case 4:
            exibirfim(pessoa);
            break;
        case 5:
            exibirtudo(pessoa);
            break;
        case 6:
            buscaposicao(pessoa);
            break;
        case 7:
            executarpillha(pessoa);
            break;
            case 8:
            surpresa();
            break;
        }
        system("pause");
        system("cls");
    } while (op > 0);
    return 0;
}
