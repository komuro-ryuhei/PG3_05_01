#pragma once

#include "Vector.h"

class Player {

public:

	void Init();

	void Update();

	void Draw();


	void MoveRight();

	void MoveLeft();

private:

	Vector2 pos_;
	Vector2 speed_;
	Vector2 size_;
};