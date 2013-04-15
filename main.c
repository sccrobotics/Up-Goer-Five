#include "task.h"

int linefollow()
{
}

int getring()
{
  motor[motorA] = -30;
	wait10Msec(100);
	motor[motorA] = 0;
	return 0;
}

int dropring()
{
	motor[motorA] = 30;
	wait10Msec(100);
	motor[motorA] = 0;
	return 0;
}

int deploy_fork()
{
	motor[motorA] = 30;
	wait10Msec(15);
	motor[motorA] = 0;
	return 0;
}

int pushblocks()
{
}

int turn_left(float numDegrees)
{
	motor[motorC] = 20;
	motor[motorB] = 0;
	wait10Msec((240.0 / 90.0) * numDegrees);
	motor[motorC] = 0;
	return 0;
}

int turn_right(float numDegrees)
{
	motor[motorB] = 20;
	motor[motorC] = 0;
	wait10Msec((240.0 / 90.0) * numDegrees);
	motor[motorB] = 0;
	return 0;
}

int forward(float num) // Move forward one foot
{
	motor[motorB] = 20;
	motor[motorC] = 20;
	wait10Msec(320.0 * num);
	motor[motorB] = 0;
	motor[motorC] = 0;
	return 0;
}

int backward(float num)
{
	motor[motorB] = -20;
	motor[motorC] = -20;
	wait10Msec(320.0 * num);
	motor[motorB] = 0;
	motor[motorC] = 0;
	return 0;
}

task main()
{
	forward(1.0);
	getring();
	backward(1.0);
	dropring();
}
