/****************************************************
 *  GyroSensor.h                                         
 *  Created on: 2012/05/05 8:42:46                      
 *  Implementation of the Class GyroSensor       
 *  Original author: hiroyuki.watanabe                     
 ****************************************************/

#if !defined(EA_33100654_D7F4_4b5d_BA79_155968A3FB6B__INCLUDED_)
#define EA_33100654_D7F4_4b5d_BA79_155968A3FB6B__INCLUDED_


#include "ecrobot_interface.h"
#include "kernel.h"


// ‘®«‚ğ•Û‚·‚é‚½‚ß‚Ì\‘¢‘Ì‚Ì’è‹`
typedef struct GyroSensor
{
	unsigned int offset;
	SENSOR_PORT_T inputPort;
} GyroSensor;

// ŒöŠJ‘€ì
void GyroSensor_init(GyroSensor* this, SENSOR_PORT_T inputPort);
unsigned int GyroSensor_getAngularVelocity(GyroSensor* this);
unsigned int GyroSensor_getOffset(GyroSensor* this);

#endif /*!defined(EA_33100654_D7F4_4b5d_BA79_155968A3FB6B__INCLUDED_)*/

