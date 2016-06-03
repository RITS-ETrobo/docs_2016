///////////////////////////////////////////////////////////
//  model_impl.c
///////////////////////////////////////////////////////////

#include "ScenarioTracer.h"
#include "Scenario.h"
#include "UI.h"
#include "BalanceRunner.h"
#include "TouchSensor.h"
#include "GyroSensor.h"
#include "Motor.h"

#include "kernel.h"
#include "kernel_id.h"
#include "ecrobot_interface.h"

#define	COUNT_SCENARIO	4			// �V�i���I�̐�
						// ��MAX_SCENARIO�𒴂��Ȃ�����

// �I�u�W�F�N�g��ÓI�Ɋm�ۂ���
ScenarioTracer 	scenarioTracer;
Scenario	scenarios[] = {
		{LEFT, 1250},			// ������1.25�b
		{STRAIGHT, 5000},		// ���i5�b
		{LEFT, 1250},			// ������1.25�b
		{STRAIGHT, 2500},};		// ���i2.5�b
UI 		ui;
BalanceRunner 	balanceRunner;
TouchSensor 	touchSensor;
GyroSensor 	gyroSensor;
Motor 		leftMotor, rightMotor;

// �f�o�C�X�������p�t�b�N�֐�
// ���̊֐���nxtOSEK�N�����Ɏ��s����܂��B
void ecrobot_device_initialize()
{
	// �Z���T�A���[�^�Ȃǂ̊e�f�o�C�X�̏������֐���
	// �����Ŏ������邱�Ƃ��ł��܂�
	// �ˁ@���Z���T�ԐFLED��ON�ɂ���
	ecrobot_set_light_sensor_active(NXT_PORT_S3);
}

// �f�o�C�X�I���p�t�b�N�֐�
// ���̊֐���STOP�܂���EXIT�{�^���������ꂽ���Ɏ��s����܂��B
void ecrobot_device_terminate()
{
	// �Z���T�A���[�^�Ȃǂ̊e�f�o�C�X�̏I���֐���
	// �����Ŏ������邱�Ƃ��ł��܂��B
	// �ˁ@���Z���T�ԐFLED��OFF�ɂ���
	ecrobot_set_light_sensor_inactive(NXT_PORT_S3);
}

// 1msec�������荞��(ISR�J�e�S��2)����N������郆�[�U�[�p�t�b�N�֐�
void user_1ms_isr_type2(void)
{
	// ����͉����s��Ȃ�
}

TASK(TaskMain)
{
	int i;

	// �I�u�W�F�N�g�Ԃ̃����N���\�z����
	for(i = 0; i < COUNT_SCENARIO; i++)
	{
		scenarioTracer.scenarios[i]  = &scenarios[i];
	}
	scenarioTracer.balanceRunner = &balanceRunner;
	ui.touchSensor		     = &touchSensor;
	balanceRunner.gyroSensor     = &gyroSensor;
	balanceRunner.leftMotor      = &leftMotor;
	balanceRunner.rightMotor     = &rightMotor;

	// �e�I�u�W�F�N�g������������
	ScenarioTracer_init(&scenarioTracer, COUNT_SCENARIO);
	UI_init(&ui);
	BalanceRunner_init(&balanceRunner);
	TouchSensor_init(&touchSensor, NXT_PORT_S4);
	GyroSensor_init(&gyroSensor, NXT_PORT_S1);
	Motor_init(&leftMotor, NXT_PORT_C);
	Motor_init(&rightMotor, NXT_PORT_B);

	// UI�ɊJ�n�҂����˗�����
	UI_waitStart(&ui);

	// 4ms�����ŁA�V�i���I���[�T�Ƀg���[�X���s���˗�����
	while(1)
	{
		ScenarioTracer_trace(&scenarioTracer);
		systick_wait_ms(4);
	}
}

