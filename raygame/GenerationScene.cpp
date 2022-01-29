#include "GenerationScene.h"
#include "UIText.h"

void GenerationScene::start()
{
	UIText* PersonalityText = new UIText(20, 500, "personality", "This is where the personality of the tamagotchi will go",
		860, 200, 20, "resources/fonts/pixelplay.png", WHITE);
	UIText* NameText = new UIText(20, 460, "Name", "Tamagotchi Name", 200, 30, 19, "resources/fonts/pixelplay.png",
		WHITE);

	addUIElement(PersonalityText);
	addUIElement(NameText);
	Scene::start();
}

void GenerationScene::draw()
{
	ClearBackground(SKYBLUE);
	Scene::draw();
	Scene::drawUI();
}
