#include <iostream>

struct nodo{
    int valor;
    struct nodo *next;

    nodo(int val) : data(val), next(null) {}
};

class linkedList {
private:
    nodo *cabeza;

public:
    linkedList() : cabeza(null) {

    void append(int val) {
        nodo *nuevoNodo = new nodo(val);
        if (!cabeza) {
            cabeza = nuevoNodo;
            return;
        }
        nodo* temp = cabeza;
        while (tempdata)
        {
            /* code */
        }
        

    
};


