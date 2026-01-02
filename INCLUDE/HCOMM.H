/****x* Pendientes de agrupacin/DEF:include:HCOMM
* NOMBRE
*   DEF:include:HCOMM
* DESCRIPCION
*   Comportamiento del objeto (obligatorio)
* ENTRADAS
*   Parmetros de entrada de la rutina, sean argumentos o campos que tiene en cuenta
* SALIDAS
*   Campos modificados como resultado o returns cuyos valores sean no triviales
* IMPACTOS
*   Otros objetos que debern ser analizados al modificar el objeto actual
* REFERENCIADO POR
*   Objetos que llaman al objeto documentado (obligatorio)
* DOCUMENTACION
*   Documentacin relevante que deber ser actualizada por la modificacin de la rutina
* SOURCE
*/
#include "C:\moaproj\V47.10\src\INCLUDE\Hcommstd.h"

;Batch reentry may be initialized by a message from the host
#define		HOST_MSG_REN_INIT  1             /*1=supported, 0=not supported*/

;Batch reentry may be initialized by a message from an operator
#define		OPERATOR_REN_INIT  1             /*1=supported, 0=not supported*/

;Operators will be informed when reentry is in progress
#define		REN_INFORM         1             /*1=supported, 0=not supported*/

;The reentry transaction (as opposed to batch reentry) is supported
#define     TRAN_REENTRY       1             /*1=supported, 0=not supported*/


/* Custom define for host message signalling START REENTRY */
#define START_REENTRY         01

/* Custom host response indicating incorrect application */
#define INCORR_APPL          150

#define	RAFT_MSG				 "900"
#define	RAFT_FILE_RCV			 "901"
#define	RAFT_FILE_SENT			 "902"

#define OP_STATUS			"920"
#define OP_STATUS_REP			"921"

#define	DDS_SENT_TO_USER		"800"
#define	DDS_STATUS_REQUEST		"801"
#define	DDS_STATUS_RESPONSE		"802"
#define	DDS_AUTH_REQUEST   		"803"
#define	DDS_AUTH_RESPONSE  		"804"
#include "C:\MOA\src\include\ofb\field.h"


/*******/
