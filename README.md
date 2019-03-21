# Cartelera de cine ETSIDI 

Vamos a realizar un programa que permita al usuario reservar su asiento según la cartelera propuesta en la aplicación.
## Integrantes del equipo

Patricia Lantero, plantero                                                                                 
Adela Pérez, adelapv                                                                                                      
Idoya Zazu, IdoyaZV                                                                                                       

## Objetivos del trabajo

- Lista de las películas disponibles en la cartelera.
- Horarios de cada película y sus salas.
- Asientos disponibles.
- Posibilidad de reserva de entradas antes de acudir al cine con elección de asiento y el menú de palomitas que se va a elegir.
- Posibilidad de indicar el tipo de descuento del que te puedes beneficiar al hacer la reserva para que te lo apliquen en taquilla.
- Posibilidad de valorar el servicio del cine y de la aplicación.

## MENU 

//Menu de la cartelera de cine

	#include <stdio.h>
	int main (){
		int opcion, pelicula, hora;
		do
		{
			printf ("Bienvenido a la cartelera de los cines ETSIDI UPM");
			printf ("\n1-Entrar en la cartelera");
			printf ("\n2-Salir de la cartelera");
			printf ("\nSeleccione la opcion: ");
			scanf("%d", &opcion);

		}while (opcion!=2 && opcion !=1);
		
		switch (opcion){
			case 1:
				do {
				printf("\n\n\tLista de peliculas:");
				printf("\n1-Bohemian Rhapsody");
				printf("\n2-El Rey Leon");
				printf("\n3-A Star is Born");
				printf("\n4-El Reino");
				printf("\n5-Capitana Marvel");
				printf("\n6-Campeones");
				printf("\nEscoja el numero de la pelicula que quiere ver:  ");
				scanf("%d", &pelicula);

			}while (pelicula<1 || pelicula>6);
				if (pelicula == 1){
					printf("\n\tBohemian Rhapsody\nSALA 1");
					printf("\nHorarios");
					do{
						
				    printf("\nOpcion 1:  11:30");
				    printf("\nOpcion 2:  18:00");
				    printf("\nOpcion 3:  22:30");
				    printf("\nEscoja una hora: ");
				    scanf("%d", &hora);

				    }while(hora !=3 && hora!=2 && hora!=1);
						
				}
				else if (pelicula == 2){
					printf("\n\tEl Rey Leon\nSALA 2");
					printf("\nHorarios");
					do{
					
				    printf("\nOpcion 1:  9:30");
				    printf("\nOpcion 2:  16:00");
				    printf("\nEscoja una hora: ");
				    scanf("%d", &hora);

				} while (hora != 2 && hora!=1);
				}
				else if(pelicula == 3){
					printf("\nSALA 3");
					printf("\nHorarios");
					do{
						
				    printf("\nOpcion 1:  11:00");
				    printf("\nOpcion 2:  17:30");
				    printf("\nOpcion 3:  22:00");
				    printf("\nEscoja una hora: ");
				    scanf("%d", &hora);

				} while(hora != 3 && hora!= 2 && hora != 1);
				}
				else if(pelicula == 4){
					printf("\nSALA 1");
					printf("\nHorarios");
					do{
						
				    printf("\nOpcion 1:  15:30");
				    printf("\nOpcion 2:  20:00");
				    printf("\nOpcion 3:  22:30");
				    scanf("%d", &hora);

				} while( hora != 3 && hora != 2 && hora != 1);
				}
				else if(pelicula == 5){
					printf("\nSALA 2");
					printf("\nHorarios");
					do{
						
				    printf("\nOpcion 1:  12:00");
				    printf("\nOpcion 2:  19:30");
				    printf("\nEscoja una hora: ");
				    scanf("%d", &hora);

				} while (hora != 2 && hora != 1);
				}
				else if (pelicula == 6)
				{
					printf("\nSALA 3");
					printf("\nHorarios");
					do{
						
				    printf("\nOpcion 1:  17:30");
				    printf("\nOpcion 2:  22:30");
				    printf("\nEscoja una hora: ");
				    scanf("%d", &hora);

				} while (hora != 2 && hora != 1);
				}
				else
				return 0;

			/*	printf("\nPara seleccionar los horarios pulse 1");
				printf("\nPara seleccionar butaca pulse 2");
				printf("\nPara seleccionar fila pulse 3");
				break;*/
			case 2:
				return 0;
				break;
				
		}

	
}
