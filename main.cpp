#include <iostream>

#include "Presentacion/PantallaAltaInmueble.h"
#include "Presentacion/PantallaAltaPublicacion.h"



int main() {

    PantallaAltaInmueble * pantallaAltaInmueble = new PantallaAltaInmueble();
    pantallaAltaInmueble->mostrarPantallaAltaInmueble();

    //PantallaAltaPublicacion * pantallaAltaPublicacion = new PantallaAltaPublicacion();
    //pantallaAltaPublicacion->mostrarPantallaAltaPublicacion();

    return 0;

}
