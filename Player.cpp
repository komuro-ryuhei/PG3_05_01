#include "Player.h"

#include "Novice.h"

void Player::Init() {

	// 各値の初期化
	pos_ = {640.0f, 360.0f};
	speed_ = {10.0f, 10.0f};
	size_ = {100.0f, 100.0f};
}

void Player::Update() {}

void Player::Draw() {

	// 四角形の描画
	Novice::DrawBox(static_cast<int>(pos_.x), static_cast<int>(pos_.y), static_cast<int>(size_.x), static_cast<int>(size_.y), 0.0f, 0xffffffff, kFillModeSolid);
}

void Player::MoveRight() { pos_.x += speed_.x; }

void Player::MoveLeft() { pos_.x -= speed_.x; }