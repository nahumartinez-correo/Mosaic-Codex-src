/****x* Pendientes de agrupacin/DEF:includes:cb
* NOMBRE
*   DEF:includes:cb
* DESCRIPCION
* 	These defines are used to tailor parts of the     
* 	Credit Bureau  system. There are also .h files    
* 	in the different sub directories which can tailor 
* 	different function which are less global than     
* 	these.                                            
*      .                                            
* 	0 = DO NOT INSTALL THIS FUNCTION                  
* 	1 = INSTALL THIS FUNCTION                         
* IMPACTOS
*   Otros objetos que debern ser analizados al modificar el objeto actual
* REFERENCIADO POR
*   Objetos que llaman al objeto documentado (obligatorio)
* DOCUMENTACION
*   Documentacin relevante que deber ser actualizada por la modificacin de la rutina
* SOURCE
*/

#include "C:\moaproj\V47.10\src\INCLUDE\base.h"
#include "C:\moaproj\V47.10\src\INCLUDE\color.h"

/********************************************/
/* LOGIN ID'S         - Sets the size       */
/*      of the login_id operator number     */
/* branch number                            */
/********************************************/
#define LOGIN_ID_SIZE 8

#define SPEED_KEY 1
#define QUICK_KEY 1

#include "C:\MOA\src\include\ofb\field.h"

/*******/
