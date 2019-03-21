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

#include<stdio.h>

int main (){
	int opcion, pelicula, hora;
	do
	{
		printf ("\nPara entrar en la cartelera pulse 1");
		printf("\nPara salir de la cartelera pulse 2");
		printf("\nSeleccione la opcion:  ");
		scanf("%d", &opcion);
		system ("cls");
		
		switch (opcion){
			case 1:
				do {
				printf("\nPelicula 1: Bohemian Rhapsody");
				printf("\nPelicula 2: El Rey Leon");
				printf("\nPelicula 3: A Star is Born");
				printf("\nPelicula 4: El Reino");
				printf("\nPelicula 5: Capitana Marvel");
				printf("\nPelicula 6: Campeones");
				printf("\nEscoja el numero de la pelicula que quiere ver:  ");
				scanf("%d", &pelicula);
				system("cls");
			}while (opcion>0 && opcion <7);
				if (pelicula == 1){
					printf("\nSALA 1");
					printf("\nHorarios");
					do{
						
				    printf("\nOpcion 1:  11:30");
				    printf("\nOpcion 2:  18:00");
				    printf("\nOpcion 3:  22:30");
				    printf("\nEscoja una hora: ");
				    scanf("%d", &hora);
				    system ("cls");
				    }while(hora !=3 && hora!=2 && hora!=1);
						
				}
				else if (pelicula = 2){
					printf("\nSALA 2");
					printf("\nHorarios");
					do{
					
				    printf("\nOpcion 1:  9:30");
				    printf("\nOpcion 2:  16:00");
				    printf("\nEscoja una hora: ");
				    scanf("%d", &hora);
				    system ("cls");
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
				    system("cls");
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
				    systetm("cls");
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
				    system("cls");
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
				    system("cls");
				} while (hora != 2 && hora != 1);
				}
				else
				return 0;
				system("cls");
			/*	printf("\nPara seleccionar los horarios pulse 1");
				printf("\nPara seleccionar butaca pulse 2");
				printf("\nPara seleccionar fila pulse 3");
				break;*/
			case 2:
				return 0;
				break;
				
		}
	}while (opcion!=2);
	
}
