#include "nodo.h"

Nodo::Nodo(int dato)
{
    m_dato = dato;
    m_izquierdo = nullptr;
    m_derecho = nullptr;
}

Nodo::~Nodo()
{
    // nada que hacer aquí
}

void Nodo::setDato(int dato)
{
    m_dato = dato;
}

void Nodo::setIzquierdo(Nodo *nodo)
{
    m_izquierdo = nodo;
}

void Nodo::setDerecho(Nodo *nodo)
{
    m_derecho = nodo;
}

int Nodo::dato() const
{
    return m_dato;
}

Nodo *Nodo::izquierdo() const
{
    return m_izquierdo;
}

Nodo *Nodo::derecho() const
{
    return m_derecho;
}
