#include "arbolbinario.h"

#include <iostream>

using namespace std;

int main()
{
    ArbolBinario *arbol = new ArbolBinario;

    cout << "preorden" << endl;
    arbol->imprimePreOrden();
    cout << endl;

    cout << "inorden" << endl;
    arbol->imprimeInOrden();
    cout << endl;

    cout << "postorden" << endl;
    arbol->imprimePostOrden();
    cout << endl;

    delete arbol;
    return 0;
}
