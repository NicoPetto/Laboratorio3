#include <iostream>

#include "Presentacion/PantallaAltaInmueble.h"
#include "Presentacion/PantallaAltaUsuario.h"
#include "Presentacion/PantallaAltaPublicacion.h"
#include "Presentacion/PantallaVerUsuarios.h"
#include "Presentacion/PantallaRepresentarPropietario.h"
#include "Presentacion/PantallaVerRepresentados.h"
#include "Presentacion/PantallaAdministrarPropiedad.h"



int main() {

    //PantallaAltaUsuario * pantallaAltaUsuario = new PantallaAltaUsuario();
    //pantallaAltaUsuario->mostrarPantallaAltaUsuario();

    //PantallaVerUsuarios * pantallaVerUsuarios = new PantallaVerUsuarios();
    //pantallaVerUsuarios->mostrarPantallaVerUsuarios();

    PantallaAltaInmueble * pantallaAltaInmueble = new PantallaAltaInmueble();
    pantallaAltaInmueble->mostrarPantallaAltaInmueble();

    PantallaRepresentarPropietario * pantallaRepresentarPropietario = new PantallaRepresentarPropietario();
    pantallaRepresentarPropietario->mostrarPantallaRepresentarPropietario();

    PantallaVerRepresentados * pantallaVerRepresentados = new PantallaVerRepresentados();
    pantallaVerRepresentados->mostrarPantallaVerRepresentados();

    PantallaAdministrarPropiedad * pantallaAdministrarPropiedad = new PantallaAdministrarPropiedad();
    pantallaAdministrarPropiedad->mostrarPantallaAdministrarPropiedad();
    pantallaAltaInmueble->mostrarPantallaAltaInmueble();
    pantallaAdministrarPropiedad->mostrarPantallaAdministrarPropiedad();



    //PantallaAltaPublicacion * pantallaAltaPublicacion = new PantallaAltaPublicacion();
    //pantallaAltaPublicacion->mostrarPantallaAltaPublicacion();

    return 0;

}
