#pragma once
#include "Actor.h"
#include "raylib.h"

class SpriteComponent;
class MoveComponent;

class Cursor :
    public Actor
{
public:
    Cursor(float x, float y, const char* name) : Actor(x, y, name) {};

    void start() override;
    void update(float deltaTime) override;

private:
    SpriteComponent* m_cursorImage;
    MoveComponent* m_moveComponent;
    Vector2 m_mousePosition;
};

