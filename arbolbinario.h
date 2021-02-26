#ifndef ARBOLBINARIO_H
#define ARBOLBINARIO_H

class Nodo;

/** árbol binario */
class ArbolBinario
{
public:
    /** constructor */
    explicit ArbolBinario();

    /** destructor */
    virtual ~ArbolBinario();

    /** imprime en preorden */
    void imprimePreOrden() const;

    /** imprime en inorden */
    void imprimeInOrden() const;

    /** imprime en postorden */
    void imprimePostOrden() const;
private:
    /** imprime en preorden */
    void imprimePreOrden(Nodo *nodo) const;

    /** imprime en inorden*/
    void imprimeInOrden(Nodo *nodo) const;

    /** imprime en postorden */
    void imprimePostOrden(Nodo *nodo) const;

    /** elimina en postorden */
    void eliminaPostOrden(Nodo *nodo);

    Nodo *m_raiz; //!< raíz del árbol
};

#endif // ARBOLBINARIO_H
