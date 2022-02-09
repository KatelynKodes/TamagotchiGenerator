#include "MoveComponent.h"
#include "Actor.h"
#include "Transform2D.h"

void MoveComponent::setVelocityFloat(float x, float y)
{
	m_velocity.x = x;
	m_velocity.y = y;
}

void MoveComponent::update(float deltaTime)
{
	MathLibrary::Vector2 newPos = getOwner()->getTransform()->getLocalPosition() + getVelocity() * getMaxSpeed();
	
	getOwner()->getTransform()->setLocalPosition(newPos);
}
