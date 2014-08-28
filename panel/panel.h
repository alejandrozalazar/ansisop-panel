#ifndef PANEL_H_
#define PANEL_H_

	#include <stdint.h>
	#include <stdbool.h>
	#include <stdio.h>
	#include "collections/list.h"

	typedef enum { KERNEL, CPU } t_tipo_proceso;

	void soy_un(t_tipo_proceso tipo_proceso); //si es un Kernel o CPU

	typedef enum { NEW, READY, EXEC, BLOCK, EXIT } t_cola;

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

	//Las funciones declaradas en estos headers deberán
	//ser invocadas a modo de notificación ante los eventos.

#endif
