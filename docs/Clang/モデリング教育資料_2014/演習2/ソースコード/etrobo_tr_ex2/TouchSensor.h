/****************************************************
 *  TouchSensor.h                                         
 *  Created on: 2012/05/05 8:40:37                      
 *  Implementation of the Class TouchSensor       
 *  Original author: hiroyuki.watanabe                     
 ****************************************************/

#if !defined(EA_376E2022_AEAC_4eff_9550_F56FD1D7610F__INCLUDED_)
#define EA_376E2022_AEAC_4eff_9550_F56FD1D7610F__INCLUDED_


#include "ecrobot_interface.h"
#include "kernel.h"


// ������ێ����邽�߂̍\���̂̒�`
typedef struct TouchSensor
{
	SENSOR_PORT_T inputPort;
} TouchSensor;

// ���J����
void TouchSensor_init(TouchSensor* this, SENSOR_PORT_T inputPort);
BOOL TouchSensor_isPressed(TouchSensor* this);

#endif /*!defined(EA_376E2022_AEAC_4eff_9550_F56FD1D7610F__INCLUDED_)*/

