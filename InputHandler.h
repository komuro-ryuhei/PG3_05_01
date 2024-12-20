#pragma once
#include "Command.h"

class InputHandler {

public:
	ICommand* HandleInput();

	void AssignMoveRightCommand2PressKeyD();
	void AssignMoveLeftCommand2PressKeyA();

private:
	ICommand* pressKeyD_;
	ICommand* pressKeyA_;
};