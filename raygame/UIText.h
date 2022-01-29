#pragma once
#include "Actor.h"
#include <raylib.h>

class UIText :
    public Actor
{
public:
    UIText(int x, int y, const char* name, const char* text, float width, float height, int fontSize, 
        const char* fontPath, Color textBoxColor = Color(), Color m_textColor = BLACK);

    const char* getText() { return m_text; }
    void setText(const char* text) { m_text = text; }

    float getWidth() { return m_width; }
    void setWidth(float value) { m_width = value; }

    float getHeight() { return m_height; }
    void setHeight(float value) { m_height; }

    void draw() override;

private:
    const char* m_text;
    float m_width;
    float m_height;
    int m_fontsize;
    Font m_font;
    Color m_textBoxColor;
    Color m_textColor;
};

