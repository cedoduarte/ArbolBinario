#ifndef NODO_H
#define NODO_H

/** nodo */
class Nodo
{
public:
    /** constructor */
    explicit Nodo(int dato = -1);

    /** destructor */
    virtual ~Nodo();

    /** asigna dato */
    void setDato(int dato);

    /** asigna nodo izquierdo */
    void setIzquierdo(Nodo *nodo);

    /** asigna nodo derecho */
    void setDerecho(Nodo *nodo);

    /** obtiene dato */
    int dato() const;

    /** obtiene nodo izquierdo */
    Nodo *izquierdo() const;

    /** obtiene nodo derecho */
    Nodo *derecho() const;
private:
    int m_dato; //!< dato
    Nodo *m_izquierdo; //!< nodo izquierdo
    Nodo *m_derecho; //!< nodo derecho
};

#endif // NODO_H
