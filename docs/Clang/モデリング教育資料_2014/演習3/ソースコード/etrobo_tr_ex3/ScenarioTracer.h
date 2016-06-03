/****************************************************
 *  ScenarioTracer.h                                         
 *  Created on: 2012/05/05 9:09:03                      
 *  Implementation of the Class ScenarioTracer       
 *  Original author: hiroyuki.watanabe                     
 ****************************************************/

#if !defined(EA_6262D962_2089_4d2d_BDBA_953782D3647C__INCLUDED_)
#define EA_6262D962_2089_4d2d_BDBA_953782D3647C__INCLUDED_


#define	MAX_SCENARIO	10

#include "Scenario.h"
#include "BalanceRunner.h"


// ‘®«‚ğ•Û‚·‚é‚½‚ß‚Ì\‘¢‘Ì‚Ì’è‹`
typedef struct ScenarioTracer
{
	int runtime;
	int countScenario;
	int currentScenario;
	Scenario *scenarios[MAX_SCENARIO];
	BalanceRunner *balanceRunner;
} ScenarioTracer;

// ŒöŠJ‘€ì
void ScenarioTracer_init(ScenarioTracer* this, int countScenario);
void ScenarioTracer_trace(ScenarioTracer* this);

#endif /*!defined(EA_6262D962_2089_4d2d_BDBA_953782D3647C__INCLUDED_)*/

