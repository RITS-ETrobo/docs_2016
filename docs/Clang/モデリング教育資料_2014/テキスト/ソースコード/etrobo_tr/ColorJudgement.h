/****************************************************
 *  ColorJudgement.h                                         
 *  Created on: 2012/05/05 7:35:39                      
 *  Implementation of the Class ColorJudgement       
 *  Original author: hiroyuki.watanabe                     
 ****************************************************/

#if !defined(EA_DEA59006_B221_4c87_BCC1_054497B43B1E__INCLUDED_)
#define EA_DEA59006_B221_4c87_BCC1_054497B43B1E__INCLUDED_

#include "Color.h"
#include "LightSensor.h"


// 属性を保持するための構造体の定義
typedef struct ColorJudgement
{
	unsigned int threshold;
	LightSensor *lightSensor;
} ColorJudgement;

// 公開操作
void ColorJudgement_init(ColorJudgement* this);
COLOR ColorJudgement_judgeColor(ColorJudgement* this);

#endif /*!defined(EA_DEA59006_B221_4c87_BCC1_054497B43B1E__INCLUDED_)*/

