#ifndef CPU_H_
#define CPU_H_

	#include "panel.h"

	typedef struct {
		uint32_t registros_programacion[4]; //A, B, C, D y E
		uint32_t M; //Base de segmento de código
		uint32_t P; //Puntero de instrucción
		uint32_t S; //Cursor de stack
		uint32_t K; //Kernel Mode
		uint32_t I; //PID
	} t_registros_cpu;

	void registros(t_registros_cpu registros); //valores de registros de la cpu
	//(cada vez que cambie algún valor deberá invocarse)

	void comienzo_ejecucion(t_hilo* hilo, uint32_t quantum); //inicio de ejecución del hilo actual
	void fin_ejecucion(); //cuando termina de ejecutar el hilo actual

	void ejecucion_instruccion(char* mnemonico, t_list* parametros); //parámetros es una lista de strings

#endif
