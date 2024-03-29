/****************************************************
 *  ColorJudgement.h                                         
 *  Created on: 2012/05/05 8:54:37                      
 *  Implementation of the Class ColorJudgement       
 *  Original author: hiroyuki.watanabe                     
 ****************************************************/

#if !defined(EA_B58E742D_5344_4ee5_ACBC_7098BF661CE3__INCLUDED_)
#define EA_B58E742D_5344_4ee5_ACBC_7098BF661CE3__INCLUDED_


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

#endif /*!defined(EA_B58E742D_5344_4ee5_ACBC_7098BF661CE3__INCLUDED_)*/

