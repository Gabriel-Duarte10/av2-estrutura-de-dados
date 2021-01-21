#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include "funcoes.h"
#define n 1000

using namespace std;

int main ()
{   
    struct fila funcionarios[n];
    int op;
    criar();
    do
    {
        op = menu();
        switch (op)
        {
            case 1: inserirfim(funcionarios); break;
            case 2: excluirinicio(funcionarios); break;
            case 3: menuconsulta(funcionarios); break;
            case 4: exibirtudo(funcionarios); break;
            case 5: executarfila(funcionarios); break;
            case 6: surpresa(); break; 
        }
        system("pause");
        system("cls");
       

    } while (op>0);
    return 0;
}