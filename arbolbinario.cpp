#include "arbolbinario.h"
#include "nodo.h"

#include <iostream>

using namespace std;

ArbolBinario::ArbolBinario()
{
    m_raiz = new Nodo(0);
    Nodo *a = new Nodo(1);
    Nodo *b = new Nodo(2);
    Nodo *c = new Nodo(3);
    Nodo *d = new Nodo(4);
    Nodo *e = new Nodo(5);
    Nodo *f = new Nodo(6);
    m_raiz->setIzquierdo(a);
    m_raiz->setDerecho(b);
    a->setIzquierdo(c);
    a->setDerecho(d);
    b->setIzquierdo(e);
    b->setDerecho(f);
}

ArbolBinario::~ArbolBinario()
{
    eliminaPostOrden(m_raiz);
}

void ArbolBinario::imprimePreOrden() const
{
    imprimePreOrden(m_raiz);
}

void ArbolBinario::imprimeInOrden() const
{
    imprimeInOrden(m_raiz);
}

void ArbolBinario::imprimePostOrden() const
{
    imprimePostOrden(m_raiz);
}

void ArbolBinario::imprimePreOrden(Nodo *nodo) const
{
    if (nodo != nullptr)
    {
        cout << nodo->dato() << endl;
        imprimePreOrden(nodo->izquierdo());
        imprimePreOrden(nodo->derecho());
    }
}

void ArbolBinario::imprimeInOrden(Nodo *nodo) const
{
    if (nodo != nullptr)
    {
        imprimeInOrden(nodo->izquierdo());
        cout << nodo->dato() << endl;
        imprimeInOrden(nodo->derecho());
    }
}

void ArbolBinario::imprimePostOrden(Nodo *nodo) const
{
    if (nodo != nullptr)
    {
        imprimePostOrden(nodo->izquierdo());
        imprimePostOrden(nodo->derecho());
        cout << nodo->dato() << endl;
    }
}

void ArbolBinario::eliminaPostOrden(Nodo *nodo)
{
    if (nodo != nullptr)
    {
        Nodo *izquierdo = nodo->izquierdo();
        Nodo *derecho = nodo->derecho();
        eliminaPostOrden(izquierdo);
        eliminaPostOrden(derecho);
        delete nodo;
    }
}
