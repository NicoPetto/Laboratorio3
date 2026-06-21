cmake_minimum_required(VERSION 4.2)
project(Lab_3)

set(CMAKE_CXX_STANDARD 20)

add_executable(Lab_3 main.cpp
        Negocio/Apartamento.cpp
        Negocio/Apartamento.h
        Negocio/Casa.cpp
        Negocio/Casa.h
        Negocio/Cliente.cpp
        Negocio/Cliente.h
        Negocio/Inmobiliaria.cpp
        Negocio/Inmobiliaria.h
        Negocio/Inmueble.cpp
        Negocio/Inmueble.h
        Negocio/DTFecha.cpp
        Negocio/DTFecha.h
        Negocio/DTInmuebleAdministrado.cpp
        Negocio/DTInmuebleAdministrado.h
        Negocio/DTTipoPublicacion.h
        Negocio/Usuario.cpp
        Negocio/Usuario.h
        Negocio/Propietario.cpp
        Negocio/Propietario.h
        Negocio/DTPropietario.cpp
        Negocio/DTPropietario.h
        Negocio/Publicacion.cpp
        Negocio/Publicacion.h
        Negocio/DTTipoTecho.h
        Negocio/Visita.cpp
        Negocio/Visita.h
        Negocio/ISistema.h
        Negocio/Sistema.cpp
        Negocio/Sistema.h
        Negocio/DTUsuario.cpp
        Negocio/DTUsuario.h
        Negocio/DTInmobiliariaPublicacion.cpp
        Negocio/DTInmobiliariaPublicacion.h
        Negocio/DTCliente.cpp
        Negocio/DTCliente.h
        Negocio/DTInmueble.cpp
        Negocio/DTInmueble.h
        Negocio/DTPublicacion.cpp
        Negocio/DTPublicacion.h
        Negocio/DTInmobiliaria.cpp
        Negocio/DTInmobiliaria.h
        Presentacion/PantallaAltaInmueble.cpp
        Presentacion/PantallaAltaPublicacion.cpp
        Presentacion/PantallaConsultarPublicaciones.cpp
        Presentacion/PantallaRepresentarPropietario.cpp
        Negocio/DTApartamento.h
        Negocio/DTApartamento.cpp
        Negocio/DTCasa.cpp
        Negocio/Administra.cpp
        Negocio/Administra.h
        Presentacion/PantallaAltaUsuario.cpp
        Presentacion/PantallaAltaUsuario.h
        Presentacion/PantallaVerUsuarios.cpp
        Presentacion/PantallaVerUsuarios.h


)
