# SSOO-tarea1
Tarea 1, sistemas operativos, Álvaro Pismante


las funciones utilizadas son controlador y Mysignal, las cuales están destinadas a manejar las señales de ctrl c y SIGSUR1 respectivamente.

Primero se definen las funciones que se utilizan en el código, Mysignal se utiliza en main y controlador se utiliza en Mysignal, cada una abastece a la otra.

Para efectos de esta tarea se utiliza el lenguaje c, lo cual nos facilita el manejo de señales en linux. Aqui se encuentran funciones incorporadas a través de las librerías presentes en el código. time ayuda para obtener la hora y signal es util para controlar las señales del usuario. 

las librerias utilizadas son:

stdio.h : es una biblioteca que nos ayuda a utilizar las funciones, macros, constantes, variables de c.
signal.h : biblioteca que ayuda a manejo de señales.
unistd.h: nos proporciona variables.
sys/types.h: nos proporciona tipos de varible, por ej, time_t
time.h: ayuda a manejar la hora del sistema y sus funciones.
