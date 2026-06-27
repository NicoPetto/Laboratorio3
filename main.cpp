#include <iostream>

#include "Presentacion/PantallaAltaInmueble.h"
#include "Presentacion/PantallaAltaUsuario.h"
#include "Presentacion/PantallaAltaPublicacion.h"
#include "Presentacion/PantallaVerUsuarios.h"
#include "Presentacion/PantallaRepresentarPropietario.h"



int main() {

    //PantallaAltaUsuario * pantallaAltaUsuario = new PantallaAltaUsuario();
    //pantallaAltaUsuario->mostrarPantallaAltaUsuario();

    PantallaVerUsuarios * pantallaVerUsuarios = new PantallaVerUsuarios();
    pantallaVerUsuarios->mostrarPantallaVerUsuarios();

    //PantallaAltaInmueble * pantallaAltaInmueble = new PantallaAltaInmueble();
    //pantallaAltaInmueble->mostrarPantallaAltaInmueble();

    PantallaRepresentarPropietario * pantallaRepresentarPropietario = new PantallaRepresentarPropietario();
    pantallaRepresentarPropietario->mostrarPantallaRepresentarPropietario();

    //PantallaAltaPublicacion * pantallaAltaPublicacion = new PantallaAltaPublicacion();
    //pantallaAltaPublicacion->mostrarPantallaAltaPublicacion();

    return 0;

}
