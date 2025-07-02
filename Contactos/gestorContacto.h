#ifndef GESTORCONTACTO_H
#define GESTORCONTACTO_H
#include "contacto.h"

void leerCorreo(correo &, string, string);
void leerContacto(contactoEmail &, string, char, int, correo);
void imprimeContacto(contactoEmail &);

void agregarContacto(contactoEmail lista[], int &n, contactoEmail nuevo);
void modificarContacto(contactoEmail lista[],int n, int k, contactoEmail nuevo);
void mostrarContactos(contactoEmail lista[], int n);

#endif