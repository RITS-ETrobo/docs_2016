/****************************************************
 *  UI.h                                         
 *  Created on: 2012/05/05 8:40:34                      
 *  Implementation of the Class UI       
 *  Original author: hiroyuki.watanabe                     
 ****************************************************/

#if !defined(EA_60DBE974_62BE_49e6_8458_47722E27C975__INCLUDED_)
#define EA_60DBE974_62BE_49e6_8458_47722E27C975__INCLUDED_


#include "TouchSensor.h"


// ������ێ����邽�߂̍\���̂̒�`
typedef struct UI
{
	TouchSensor *touchSensor;
} UI;

// ���J����
void UI_init(UI* this);
void UI_waitStart(UI* this);

#endif /*!defined(EA_60DBE974_62BE_49e6_8458_47722E27C975__INCLUDED_)*/

