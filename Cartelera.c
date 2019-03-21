//Menu de la cartelera de cine

#include <stdio.h>
int main (){
	int opcion, pelicula, hora;
	do
	{
		printf ("Bienvenido a la cartelera de los cines ETSIDI UPM");
		printf ("\n1-Entrar en la cartelera");
		printf("\n2-Salir de la cartelera");
		printf("\nSeleccione la opcion: ");
		scanf("%d", &opcion);
		system ("cls");
	}while (opcion!=2 && opcion !=1);
		
		switch (opcion){
			case 1:
				do {
				printf("\tLista de peliculas:");
				printf("\n1-Bohemian Rhapsody");
				printf("\n2-El Rey Leon");
				printf("\n3-A Star is Born");
				printf("\n4-El Reino");
				printf("\n5-Capitana Marvel");
				printf("\n6-Campeones");
				printf("\nEscoja el numero de la pelicula que quiere ver:  ");
				scanf("%d", &pelicula);
				system ("cls");

			}while (pelicula<1 || pelicula>6);
				if (pelicula == 1){
					printf("\tBohemian Rhapsody\nSALA 1");
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
					printf("\tEl Rey Leon\nSALA 2");
					printf("\nHorarios");
					do{
					
				    printf("\nOpcion 1:  9:30");
				    printf("\nOpcion 2:  16:00");
				    printf("\nEscoja una hora: ");
				    scanf("%d", &hora);

				} while (hora != 2 && hora!=1);
				}
				else if(pelicula == 3){
					printf("\tA Star is Born\nSALA 3");
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
					printf("\tEl Reino\nSALA 1");
					printf("\nHorarios");
					do{
						
				    printf("\nOpcion 1:  15:30");
				    printf("\nOpcion 2:  20:00");
				    printf("\nOpcion 3:  22:30");
				    printf("\nEscoja una hora: ");
				    scanf("%d", &hora);

				} while( hora != 3 && hora != 2 && hora != 1);
				}
				else if(pelicula == 5){
					printf("\tCapitana Marvel\nSALA 5");
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
					printf("\tCampeones\nSALA 6");
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
