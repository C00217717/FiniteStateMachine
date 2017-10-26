/// <summary>
/// @Author Eoin Abbey-Maher
/// </summary>

#include "FiniteStateMachine.h"

#ifndef IDLE
#define IDLE

class Idle : public State
{
public:
	Idle();
	~Idle();
	void walking(Animation *t_a);
	void jumping(Animation *t_a);
	void shovelling(Animation *t_a);
	void walking(Animation *t_a);
	void swordsmanShip(Animation *t_a);
	void hammering(Animation *t_a);

};

#endif // !IDLE
