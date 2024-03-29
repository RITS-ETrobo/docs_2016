/****************************************************
 *  TouchSensor.h                                         
 *  Created on: 2012/05/05 8:53:40                      
 *  Implementation of the Class TouchSensor       
 *  Original author: hiroyuki.watanabe                     
 ****************************************************/

#if !defined(EA_47629F62_CBDB_4e9b_A2FD_91BF1818CA33__INCLUDED_)
#define EA_47629F62_CBDB_4e9b_A2FD_91BF1818CA33__INCLUDED_


#include "ecrobot_interface.h"
#include "kernel.h"


// 属性を保持するための構造体の定義
typedef struct TouchSensor
{
	SENSOR_PORT_T inputPort;
} TouchSensor;

// 公開操作
void TouchSensor_init(TouchSensor* this, SENSOR_PORT_T inputPort);
BOOL TouchSensor_isPressed(TouchSensor* this);

#endif /*!defined(EA_47629F62_CBDB_4e9b_A2FD_91BF1818CA33__INCLUDED_)*/

