//
// Created by Nicolás on 13/5/2026.
//

#include "Menu.h"
#include "Menu.h"

#include "PantallaAdministrarPropiedad.h"
#include "PantallaAltaInmueble.h"
#include "PantallaAltaPublicacion.h"
#include "PantallaAltaUsuario.h"
#include "PantallaConsultarPublicaciones.h"
#include "PantallaRepresentarPropietario.h"
#include "PantallaVerRepresentados.h"
#include "PantallaVerUsuarios.h"
#include "../Negocio/Sistema.h"

Menu::Menu() {
   this->sistema=Sistema::getInstancia();
}

void Menu::menuPrincipal() {
   int opcion;

   do {
      cout << "\n=========================================\n";
      cout << "      SISTEMA DE INMOBILIARIA\n";
      cout << "=========================================\n";
      cout << "1. Alta de usuario\n";
      cout << "2. Ver usuarios\n";
      cout << "3. Alta de inmueble\n";
      cout << "4. Eliminar inmueble\n";
      cout << "5. Representar propietario\n";
      cout << "6. Ver representados\n";
      cout << "7. Administrar propiedad\n";
      cout << "8. Ver estadisticas de administracion\n";
      cout << "9. Alta de publicacion\n";
      cout << "10. Consultar publicaciones\n";
      cout << "0. Salir\n";

      cout << "\n\nSeleccione una opcion: ";
      cin >> opcion;

      switch (opcion) {
         case 1: {
            PantallaAltaUsuario * pantalla_alta_usuario= new PantallaAltaUsuario();
            pantalla_alta_usuario->mostrarPantallaAltaUsuario();
            break;
         }
         case 2: {
            PantallaVerUsuarios * pantalla_ver_usuario= new PantallaVerUsuarios();
            pantalla_ver_usuario->mostrarPantallaVerUsuarios();
            break;
         }
         case 3: {
            PantallaAltaInmueble * pantalla_alta_inmueble= new PantallaAltaInmueble();
            pantalla_alta_inmueble->mostrarPantallaAltaInmueble();
            break;
         }
         case 4: {
            cout<<"Opcion inhablitada";
            //PantallaEliminarInmueble * pantalla_eliminar_inmueble= new PantallaEliminarInmueble();
            //pantalla_eliminar_inmueble->mostrarPantallaEliminarInmueble();
            break;
         }
         case 5: {
            PantallaRepresentarPropietario * pantalla_representar_propietario = new PantallaRepresentarPropietario;
            pantalla_representar_propietario->mostrarPantallaRepresentarPropietario();
            break;
         }
         case 6: {
            PantallaVerRepresentados * pantalla_ver_representados=new PantallaVerRepresentados();
            pantalla_ver_representados->mostrarPantallaVerRepresentados();
            break;
         }
         case 7: {
            PantallaAdministrarPropiedad * pantalla_administrar_propiedad=new PantallaAdministrarPropiedad();
            pantalla_administrar_propiedad->mostrarPantallaAdministrarPropiedad();
            break;
         }
         case 8: {
            cout<<"Opcion inhablitada";
            //PantallaVerEstadisticas * pantalla_ver_estadisticas = new PantallaVerEstadistica();
            //pantalla_ver_estadisticas->mostrarPantallaVerEstadisticas();
            break;
         }
         case 9: {
            PantallaAltaPublicacion * pantalla_alta_publicacion= new PantallaAltaPublicacion();
            pantalla_alta_publicacion->mostrarPantallaAltaPublicacion();
            break;
         }
         case 10: {
            cout<<"Opcion inhabitada";
            //PantallaConsultarPublicaciones * pantalla_consultar_publicaciones = new PantallaConsultarPublicaciones();
            //pantalla_consultar_publicaciones->mostrarPantallaConsultarPublicaciones();
            break;
         }
         case 0:
         {
            cout << "Saliendo.." << endl;
            break;
         }
         default:
         {
            cout << "Opcion invalida." << endl;
            break;
         }
      }

   }while(opcion!=0);

}
