#pragma once
#include "Component.h"
#include <Vector2.h>

class MoveComponent :
    public Component
{
public:
    MoveComponent(const char* name = "Move Component") :Component::Component(name) {};

    /// <summary>
    /// Returns the velocity of the move component
    /// </summary>
    /// <returns> Returns the velocity </returns>
    MathLibrary::Vector2 getVelocity() { return m_velocity; }

    /// <summary>
    /// Allows the velocity to be set
    /// </summary>
    /// <param name="newValue"> the new value to set the velocity to</param>
    void setVelocity(MathLibrary::Vector2 newValue) { m_velocity = newValue; }

    void setVelocityFloat(float x, float y);

    /// <summary>
    /// Returns the move component speed
    /// </summary>
    /// <returns> the move component's max speed </returns>
    float getMaxSpeed() { return m_maxSpeed; }

    /// <summary>
    /// Sets the speed of the move component
    /// </summary>
    /// <param name="value"> the value to set the speed to </param>
    void setMaxSpeed(float value) { m_maxSpeed = value; }

    void update(float deltaTime) override;
private:
    MathLibrary::Vector2 m_velocity;
    float m_maxSpeed;
};

