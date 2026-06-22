#include <iostream>

#include "Presentacion/PantallaAltaInmueble.h"
#include "Presentacion/PantallaAltaUsuario.h"
#include "Presentacion/PantallaAltaPublicacion.h"
#include "Presentacion/PantallaVerUsuarios.h"



int main() {

    //PantallaAltaUsuario * pantallaAltaUsuario = new PantallaAltaUsuario();
    //pantallaAltaUsuario->mostrarPantallaAltaUsuario();

    PantallaVerUsuarios * pantallaVerUsuarios = new PantallaVerUsuarios();
    pantallaVerUsuarios->mostrarPantallaVerUsuarios();

    PantallaAltaInmueble * pantallaAltaInmueble = new PantallaAltaInmueble();
    pantallaAltaInmueble->mostrarPantallaAltaInmueble();

    //PantallaAltaPublicacion * pantallaAltaPublicacion = new PantallaAltaPublicacion();
    //pantallaAltaPublicacion->mostrarPantallaAltaPublicacion();

    return 0;

}
