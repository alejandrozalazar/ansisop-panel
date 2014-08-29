#ifndef KERNEL_H_
#define KERNEL_H_

	#include "panel.h"

	/**
	* Debe invocarse tras conectarse una CPU.
	*
	* @param  id  ID de la CPU.
	*/
	void conexion_cpu(uint32_t id);

	/**
	* Debe invocarse tras desconectarse una CPU.
	*
	* @param  id  ID de la CPU.
	*/
	void desconexion_cpu(uint32_t id);

	/**
	* Debe invocarse tras conectarse una consola de un programa.
	*
	* @param  id  ID de la consola.
	*/
	void conexion_consola(uint32_t id);

	/**
	* Debe invocarse tras desconectarse una consola de un programa.
	*
	* @param  id  ID de la CPU.
	*/
	void desconexion_consola(uint32_t id);

	/**
	* Debe invocarse cada vez que ocurra algun cambio en algun campo
	* del TCB de un hilo.
	*
	*/
	void hilos(t_list* hilos);

	/**
	* Debe invocarse cada vez que la CPU invoque una funcionalidad definida
	* en la seccion del enunciado "Servicios expuestos a la CPU".
	*
	* @param  mnemonico  Nombre de la funcionalidad.
	* @parm  hilo Estructura TCB del hilo que invoco la funcionalidad.
	*/
	void instruccion_protegida(char* mnemonico, t_hilo* hilo); //instrucción protegida desde el modo kernel

#endif
