#ifndef PANEL_H_
#define PANEL_H_

	#include <stdint.h>
	#include <stdbool.h>
	#include "collections/list.h"

	typedef enum { KERNEL, CPU, UMSP } t_tipo_proceso;

	void soy_un(t_tipo_proceso tipo_proceso); //si es un Kernel, CPU, o UMSP

	//Las funciones declaradas en estos headers deberán
	//ser invocadas a modo de notificación ante los eventos.

#endif
