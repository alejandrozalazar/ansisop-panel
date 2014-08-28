#ifndef KERNEL_H_
#define KERNEL_H_

	#include "panel.h"

	//conexiones y desconexiones:
	void conexion_cpu(uint32_t id);
	void desconexion_cpu(uint32_t id);
	void conexion_consola(uint32_t id);
	void desconexion_consola(uint32_t id);

	void hilos(t_list* hilos); //array de hilos (t_hilo*) en el sistema
	//(cada vez que cambie algún valor en algún hilo deberá invocarse)

	void instruccion_protegida(char* mnemonico, t_hilo* hilo); //instrucción protegida desde el modo kernel

#endif
