#include "UIText.h"
#include "Transform2D.h"

UIText::UIText(int x, int y, const char* name, const char* text, float width, float height, int fontSize,
	const char* fontPath, Color textBoxColor, Color textColor ) : Actor(x, y, name)
{
	m_text = text;
	m_width = width;
	m_height = height;
	m_fontsize = fontSize;
	m_textBoxColor = textBoxColor;
	m_textColor = textColor;

	if (fontPath != NULL || fontPath == "")
	{
		m_font = LoadFont(fontPath);
	}
}

void UIText::draw()
{
	Rectangle textbox = Rectangle{ getTransform()->getLocalPosition().x, getTransform()->getLocalPosition().y, 
		getWidth(), getHeight() };
	DrawRectangleRec(textbox, m_textBoxColor);
	DrawTextRec(m_font, getText(), textbox, m_fontsize, 1, true, m_textColor);
}
