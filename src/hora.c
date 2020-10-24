
#include <stdio.h>  //librerias para utilizar las funciones del código
#include <signal.h>
#include <unistd.h>
#include <sys/types.h>
#include <time.h>

void controlador(int); //variable que es util para manejar la señal de ctrl c

void controlador (int senal) //función que maneja ctrl c
{
	signal (SIGINT, SIG_DFL);   //se pone la señal por default
}

void Mysignal()	//funcion que maneja la señal SIGUSR1
{
	time_t hora;  //variable que nos ayuda a manejar la hora del sistema
	time(&hora); 
	printf("Señal SIGUSR1 recibida: %s", ctime(&hora) ); //print para dar la hora e información de señal al usuario
	signal(SIGINT, controlador);  //llamo la funcion del controlador una vez que se ejecute la señal en el otro terminal
}

int main (void) //función principal del código
{
	signal(SIGUSR1, &Mysignal); //función que maneja la señal SIGSUR1
	printf("programa hora ejecutandose. PID = %d\nListo para recibir la señal SIGUSR1.\n", getpid()); //obtengo el PID  para mostrarlo en consola

	while(1)	//while generado para crear una espera mientras se esperan las señales
	{
		sleep(2);
	}

	return 0;
}
