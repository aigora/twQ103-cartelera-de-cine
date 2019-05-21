#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Estructuras

struct Usuario {
    int id;
    char nombre[30];
    char contrasena[30];
};

struct Usuarios {
    struct Usuario array[50];
    int total;
};

struct Pelicula {
    int id;
    char nombre[30];
    int precio;
};

struct Peliculas {
    struct Pelicula array[50];
    int total;
};

struct Horario {
    int id;
    int idPelicula;
    int sala;
    char hora[20];
};

struct Horarios {
    struct Horario array[50];
    int total;
};

struct Butaca {
    int id;
    int idHorario;
    int fila;
    int butaca;
    int disponible;
};

struct Butacas {
    struct Butaca array[100];
    int total;
};

struct Menu {
    int id;
    char nombre[20];
    int precio;
};

struct Menus {
    struct Menu array[50];
    int total;
};

struct Descuento {
    int id;
    char nombre[20];
    int porcentaje;
};

struct Descuentos {
    struct Descuento array[50];
    int total;
};

struct Critica {
    char critica[100];
};

struct Criticas {
    struct Critica array[50];
    int total;
};

struct Reserva {
    char reserva[200];
};

struct Reservas {
    struct Reserva array[50];
    int total;
};

// Lectura de ficheros

struct Usuarios leerUsuarios() {
    FILE *ficheroUsuarios = fopen("usuarios.txt", "r");
    struct Usuario usuario;
    struct Usuarios usuarios;

    if (ficheroUsuarios == NULL) {
        printf("No se pudo abrir el fichero de usuarios \n");
        exit(1);
    }

    usuarios.total = 0;
    while (!feof(ficheroUsuarios)) {
        fscanf(ficheroUsuarios, "%d %s %s", &usuario.id, usuario.nombre, usuario.contrasena);
        usuarios.array[usuarios.total] =usuario;
        usuarios.total++;
    }

    return usuarios;
}

struct Peliculas leerPeliculas() {
    FILE *ficheroPeliculas = fopen("peliculas.txt", "r");
    struct Pelicula pelicula;
    struct Peliculas peliculas;

    if (ficheroPeliculas == NULL) {
        printf("No se pudo abrir el fichero de peliculas \n");
        exit(1);
    }

    peliculas.total = 0;
    while (!feof(ficheroPeliculas)) {
        fscanf(ficheroPeliculas, "%d %s %d", &pelicula.id, pelicula.nombre, &pelicula.precio);
        peliculas.array[peliculas.total] =pelicula;
        peliculas.total++;
    }

    return peliculas;
}

struct Horarios leerHorarios(int pelicula) {
    FILE *ficheroHorarios = fopen("horarios.txt", "r");
    struct Horario horario;
    struct Horarios horarios;

    if (ficheroHorarios == NULL) {
        printf("No se pudo abrir el fichero de horarios \n");
        exit(1);
    }

    horarios.total = 0;
    while (!feof(ficheroHorarios)) {
        fscanf(ficheroHorarios, "%d %d %d %s", &horario.id, &horario.idPelicula, &horario.sala, horario.hora);
        if (horario.idPelicula == pelicula) {
            horarios.array[horarios.total] =horario;
            horarios.total++;
        }
    }

    return horarios;
}

struct Butacas leerButacas(int horario) {
    FILE *ficheroButacas = fopen("butacas.txt", "r");
    struct Butaca butaca;
    struct Butacas butacas;

    if (ficheroButacas == NULL) {
        printf("No se pudo abrir el fichero de butacas \n");
        exit(1);
    }

    butacas.total = 0;
    while (!feof(ficheroButacas)) {
        fscanf(ficheroButacas, "%d %d %d %d %d", &butaca.id, &butaca.idHorario, &butaca.fila, &butaca.butaca, &butaca.disponible);
        if (butaca.idHorario == horario) {
            butacas.array[butacas.total] =butaca;
            butacas.total++;
        }
    }

    return butacas;
}

struct Menus leerMenus() {
    FILE *ficheroMenus = fopen("menus.txt", "r");
    struct Menu menu;
    struct Menus menus;

    if (ficheroMenus == NULL) {
        printf("No se pudo abrir el fichero de menus \n");
        exit(1);
    }

    menus.total = 0;
    while (!feof(ficheroMenus)) {
        fscanf(ficheroMenus, "%d %s %d", &menu.id, menu.nombre, &menu.precio);
        menus.array[menus.total] =menu;
        menus.total++;
    }

    return menus;
}

struct Descuentos leerDescuentos() {
    FILE *ficheroDescuentos = fopen("descuentos.txt", "r");
    struct Descuento descuento;
    struct Descuentos descuentos;

    if (ficheroDescuentos == NULL) {
        printf("No se pudo abrir el fichero de descuentos \n");
        exit(1);
    }

    descuentos.total = 0;
    while (!feof(ficheroDescuentos)) {
        fscanf(ficheroDescuentos, "%d %s %d", &descuento.id, descuento.nombre, &descuento.porcentaje);
        descuentos.array[descuentos.total] =descuento;
        descuentos.total++;
    }

    return descuentos;
}

struct Criticas leerCriticas() {
    FILE *ficheroCriticas = fopen("criticas.txt", "r");
    struct Critica critica;
    struct Criticas criticas;

    if (ficheroCriticas == NULL) {
        printf("No se pudo abrir el fichero de criticas \n");
        exit(1);
    }

    criticas.total = 0;
    while (!feof(ficheroCriticas)) {
        fscanf(ficheroCriticas, "%[^\n]\n", critica.critica);
        criticas.array[criticas.total] =critica;
        criticas.total++;
    }

    return criticas;
}

struct Reservas leerReservas() {
    FILE *ficheroReservas = fopen("reservas.txt", "r");
    struct Reserva reserva;
    struct Reservas reservas;

    if (ficheroReservas == NULL) {
        printf("No se pudo abrir el fichero de reservas \n");
        exit(1);
    }

    reservas.total = 0;
    while (!feof(ficheroReservas)) {
        fscanf(ficheroReservas, "%[^\n]\n", reserva.reserva);
        reservas.array[reservas.total] =reserva;
        reservas.total++;
    }

    return reservas;
}

// Funciones

struct Usuario login(struct Usuarios usuarios) {
    char nombre[30];
    char contrasena[30];
    
    int i;
    while (1){
    printf("USUARIO: ");
    scanf("%s", nombre);

    printf("CONTRASE\245A: ");
    scanf("%s", contrasena);

    
    for (i = 0; i < usuarios.total; i++) {
        if (strcmp(nombre, usuarios.array[i].nombre) == 0 && strcmp(contrasena, usuarios.array[i].contrasena) == 0) {
            printf("¡Bienvenido! \n");
            return usuarios.array[i];
        }
    }
    printf("Usuario no encontrado \n");

}
}

struct Pelicula seleccionarPelicula(struct Peliculas peliculas) {
    int peliculaEscogida;
    int i;    
	while (1){
	printf("\277Qu\202 pel\241cula desea resevar? Seleccione el n\243mero de pel\241cula correspondiente.\n");
    for (i = 0; i < peliculas.total; i++) {
        printf("Pelicula %d: %s - %d\200 \n", peliculas.array[i].id, peliculas.array[i].nombre, peliculas.array[i].precio);
    }
	printf ("Su selecci\242n: ");
    scanf("%d", &peliculaEscogida);

    for (i = 0; i < peliculas.total; i++) {
        if (peliculaEscogida == peliculas.array[i].id) {
            return peliculas.array[i];
        }
    }
    printf("No existe la pel\241cula \n");
}
}

struct Horario seleccionarHorario(struct Horarios horarios) {
    int horarioEscogido;
    int i;
	while (1){    
	printf("\277A qu\202 hora desea reservar el asiento? Seleccione el n\243mero de horario correspondiente.\n");
    for (i = 0; i < horarios.total; i++) {
        printf("Horario %d: Sala %d - %s \n", horarios.array[i].id, horarios.array[i].sala, horarios.array[i].hora);
    }
	printf ("Su selecci\242n: ");
    scanf("%d", &horarioEscogido);
    
    for (i = 0; i < horarios.total; i++) {
        if (horarioEscogido == horarios.array[i].id) {
            return horarios.array[i];
        }
    }
    printf("No existe el horario \n");
}
}

struct Butaca seleccionarButaca(struct Butacas butacas) {
    int butacaEscogida;
    int fila = butacas.array[0].fila;
    int i;  
	while (1){  
	printf("\n\277Qu\202 butaca desea? Seleccione el n\243mero correspondiente (los primeros n\243meros corresponden a los asientos de delante).\n");
    for (i = 0; i < butacas.total; i++) {
        if (fila != butacas.array[i].fila) {
            fila = butacas.array[i].fila;
            printf("\n");
        }
        if (butacas.array[i].disponible == 1) {
            printf("%d  ", butacas.array[i].id);
        } else {
            printf("   ");
        }
    }
	printf ("\nSu selecci\242n: ");
    scanf("%d", &butacaEscogida);
    
    for (i = 0; i < butacas.total; i++) {
        if (butacaEscogida == butacas.array[i].id && butacas.array[i].disponible == 1) {
            return butacas.array[i];
        }
    }
    printf("Butaca no disponible \n");
}
}

struct Menu seleccionarMenu(struct Menus menus) {
    int menuEscogido;
    int i;  
	while (1){  
	printf("\277Desea men\243 de palomitas + refresco? Seleccione el tama\244o.\n");
    for (i = 0; i < menus.total; i++) {
        printf("Menu %d: %s - %d\200 \n", menus.array[i].id, menus.array[i].nombre, menus.array[i].precio);
    }
	printf ("Su selecci\242n: ");
    scanf("%d", &menuEscogido);

    for (i = 0; i < menus.total; i++) {
        if (menuEscogido == menus.array[i].id) {
            return menus.array[i];
        }
    }
    printf("No existe el men\243 \n");
}
}

struct Descuento seleccionarDescuento(struct Descuentos descuentos) {
    int descuentoEscogido;
    int i;
    while(1){
	printf("\277Cuenta con alg\243n descuento? Seleccione el n\243mero correspondiente.\n");
    for (i = 0; i < descuentos.total; i++) {
        printf("Descuento %d: %s - %d porciento \n", descuentos.array[i].id, descuentos.array[i].nombre, descuentos.array[i].porcentaje);
    }
	printf ("Su selecci\242n: ");
    scanf("%d", &descuentoEscogido);

    for (i = 0; i < descuentos.total; i++) {
        if (descuentoEscogido == descuentos.array[i].id) {
            return descuentos.array[i];
        }
    }
    printf("No existe el descuento \n");
}
}

void mostrarCriticas(struct Criticas criticas) {
    printf("Cr\241ticas: \n");
    int i;
    for (i = 0; i < criticas.total; i++) {
        printf("%s \n", criticas.array[i].critica);
    }
}

void mostrarReservas(struct Reservas reservas) {
    printf("Reservas para el d\241a de hoy: \n");
    int i;
    for (i = 0; i < reservas.total; i++) {
        printf("%s \n", reservas.array[i].reserva);
    }
}

// Escritura de ficheros

void procesar(struct Usuario usuario, struct Pelicula pelicula, struct Horario horario, struct Butaca butaca, struct Menu menu, struct Descuento descuento) {
    printf("Su entrada: \n");
    printf("Usuario: %s \n", usuario.nombre);
    printf("Pel\241cula: %s %d\200 \n", pelicula.nombre, pelicula.precio);
    printf("Horario: %s \n", horario.hora);
    printf("Fila/Butaca: %d/%d \n", butaca.fila, butaca.butaca);
    printf("Men\243: %s %d\200 \n", menu.nombre, menu.precio);
    printf("Precio: %d\200 \n", pelicula.precio + menu.precio);
    printf("Descuento: %s \n", descuento.nombre);

    float total = pelicula.precio - (pelicula.precio * (descuento.porcentaje / 100.0)) + menu.precio;
    printf("\tPrecio final: %0.2f \n", total);

    FILE *ficheroReservas = fopen("reservas.txt", "a");
    if (ficheroReservas == NULL) {
        printf("No se pudo abrir el fichero de reservas \n");
        exit(1);
    }
    fprintf(ficheroReservas, "%s %s %s %d/%d %s %0.2f\n", usuario.nombre, pelicula.nombre, horario.hora, butaca.fila, butaca.butaca, menu.nombre, total);
    fclose(ficheroReservas);

    FILE *ficheroButacas = fopen("butacas.txt", "r+");
    struct Butaca butacaBuscada;
    if (ficheroButacas == NULL) {
        printf("No se pudo abrir el fichero de reservas \n");
        exit(1);
    }
while (!feof(ficheroButacas)) {
        fscanf(ficheroButacas, "%d %d %d %d %d", &butacaBuscada.id, &butacaBuscada.idHorario, &butacaBuscada.fila, &butacaBuscada.butaca, &butacaBuscada.disponible);
        // Se lee cada linea del fichero y se compara si el id de la butaca es el anterior al id de la elegida
        // El anterior ya que al leer el cursor quedara en la siguiente linea, se va al comienzo de la linea con \r
        // Y se imprime la butaca con la misma informacion pero con el campo disponible en 0
        if (butacaBuscada.id == butaca.id - 1) {
            fprintf(ficheroButacas, "\r%d %d %d %d 0", butaca.id, butaca.idHorario, butaca.fila, butaca.butaca);
            break;
        }
    }
}

void dejarCritica() {
    char opcion;
    printf("\277Desea dejar una critica de nuestra aplicaci\242n?\nSI(s)\nNO(n)\nSu selecci\242n: ");
    scanf(" %c", &opcion);
	fflush(stdin);

    if (opcion == 's') {
        char critica[100];
        printf("Por favor escriba su cr\241tica sobre la app: \n");
        scanf(" %[^\n]s", critica);
	fflush(stdin);

        FILE *ficheroCriticas = fopen("criticas.txt", "a");
        if (ficheroCriticas == NULL) {
            printf("No se pudo abrir el fichero de criticas \n");
            exit(1);
        }
        fprintf(ficheroCriticas, "%s\n", critica);
        fclose(ficheroCriticas);

        printf("Muchas gracias por su opini\242n! \n");
    }
    printf("\t\n\nRESERVA COMPLETADA CON \220XITO.\n\t¡¡Disfrute su funci\242n!! \n");
}

//Función principal

int main() {
    printf("-------- CINES ETSIDI --------\n");
    printf ("¡¡Reserva YA tu entrada para HOY!!\n\nDebe iniciar sesi\242n:\n");

    struct Usuarios usuarios = leerUsuarios();
    struct Usuario usuario = login(usuarios);

    printf("\n----------------------------\n\n");

    if (usuario.id == 1) {

        struct Criticas criticas = leerCriticas();
        mostrarCriticas(criticas);

        printf("\n----------------------------\n\n");

        struct Reservas reservas = leerReservas();
        mostrarReservas(reservas);

    } else {

        struct Peliculas peliculas = leerPeliculas();
        struct Pelicula pelicula = seleccionarPelicula(peliculas);

        printf("\n----------------------------\n\n");

        struct Horarios horarios = leerHorarios(pelicula.id);
        struct Horario horario = seleccionarHorario(horarios);

        printf("\n----------------------------\n\n");

        struct Butacas butacas = leerButacas(horario.id);
        struct Butaca butaca = seleccionarButaca(butacas);

        printf("\n----------------------------\n\n");

        struct Menus menus = leerMenus();
        struct Menu menu = seleccionarMenu(menus);

        printf("\n----------------------------\n\n");

        struct Descuentos descuentos = leerDescuentos();
        struct Descuento descuento = seleccionarDescuento(descuentos);

        printf("\n----------------------------\n\n");

        procesar(usuario, pelicula, horario, butaca, menu, descuento);

        printf("\n----------------------------\n\n");

        dejarCritica();

    }

    return 0;
}
