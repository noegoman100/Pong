#pragma once
#include <SFML/Graphics.hpp>
using namespace sf;
class Ball
{
private:
	Vector2f m_Position;
	RectangleShape m_Shape;
	CircleShape m_CircleShape;
	float m_Speed = 500.0f;
	float m_DirectionX = 0.1f;
	float m_DirectionY = .2f;
public:
	Ball(float startX, float startY);
	FloatRect getPosition();
	RectangleShape getShape();
	CircleShape getCircleShape();
	float getXVelocity();
	void reboundSides();
	void reboundBatOrTop();
	void reboundBottom();
	void update(Time dt);
};