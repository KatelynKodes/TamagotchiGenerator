#include "Cursor.h"
#include "MoveComponent.h"
#include "SpriteComponent.h"

void Cursor::start()
{
	m_moveComponent = dynamic_cast<MoveComponent*>(addComponent(new MoveComponent()));
	m_moveComponent->setMaxSpeed(10);
	m_cursorImage = dynamic_cast<SpriteComponent*>(addComponent(new SpriteComponent("images/TestCursor.png")));
}

void Cursor::update(float deltaTime)
{
	m_mousePosition = GetMousePosition();
	
	m_moveComponent->setVelocityFloat(m_mousePosition.x, m_mousePosition.y);
	m_moveComponent->update(deltaTime);

}
