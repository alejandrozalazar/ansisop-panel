#ifndef KERNEL_H_
#define KERNEL_H_

	#include "panel.h"

	typedef struct {
		uint32_t pid;
		uint32_t tid;
		bool kernel_mode;
		uint32_t segmento_codigo;
		uint32_t segmento_codigo_size;
		uint32_t puntero_instruccion;
		uint32_t cursor_stack;
		uint32_t registros[5];
		t_cola cola;
	} t_hilo;

	typedef enum { NEW, READY, EXEC, BLOCK, EXIT } t_cola;

	typedef enum { TEXTO, NUMEROS } t_tipo_entrada;

	typedef int t_recurso;

	//conexiones y desconexiones:
	void conexion_cpu(uint32_t id);
	void desconexion_cpu(uint32_t id);
	void conexion_consola(uint32_t id);
	void desconexion_consola(uint32_t id);

	void hilos(t_list hilos); //array de hilos (t_hilo) en el sistema
	//(cada vez que cambie algún valor en algún hilo deberá invocarse)

	void instruccion_protegida(char* mnemonico, t_hilo* hilo); //instrucción protegida desde el modo kernel

#endif
