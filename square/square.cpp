// square.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <sstream>
#include <SFML/Graphics.hpp>



	using namespace sf;

 
	int main()
	{
		// Create a video mode object
		VideoMode vm(1920, 1080);

		// Create and open a window for the game
		RenderWindow window(vm, "lines");

		//scale the window size 1 to 1/2
		window.setSize(Vector2u(980, 540));
		window.setPosition(Vector2i(VideoMode::getDesktopMode().width / 2 - window.getSize().x / 2, VideoMode::getDesktopMode().height / 2 - window.getSize().y / 2));
		// Create a texture to hold a graphic on the GPU
		Texture textureBackground;
		textureBackground.loadFromFile("graphics/background.jpg");
		Sprite background;
		background.setTexture(textureBackground);
		background.setPosition(0, 0);

		float k = 300.0f ,start=0.0f;

		Texture rectform;
		rectform.loadFromFile("graphics/rect.png");
		Sprite rect1;
		rect1.setTexture(rectform);
		rect1.setPosition(k, start);
		rect1.setScale(0.9f, 0.05f);

		Sprite rect2;
		rect2.setTexture(rectform);
		rect2.setPosition(k,  200);
		rect2.setScale(0.9f, 0.05f);

		Sprite rect3;
		rect3.setTexture(rectform);
		rect3.setPosition(k, 400);
		rect3.setScale(0.9f, 0.05f);

		Sprite rect4;
		rect4.setTexture(rectform);
		rect4.setPosition(k, 600);
		rect4.setScale(0.9f, 0.05f);

		Sprite rect5;
		rect5.setTexture(rectform);
		rect5.setPosition(k, 800);
		rect5.setScale(0.9f, 0.05f);

		Sprite rect6;
		rect6.setTexture(rectform);
		rect6.setPosition(k, 1000);
		rect6.setScale(0.9f, 0.05f);
		
		bool rect1active=false, rect2active = false, rect3active = false, rect4active = false, rect5active = false, rect6active = false;
	

		while (window.isOpen())
		{


			Event event;
			while (window.pollEvent(event))
			{
				if (Keyboard::isKeyPressed(Keyboard::Escape))
				{
					window.close();
				}

				if (event.type == Event::Closed)
				{
					window.close();
				}
			}

		// move rectangles rect1
			if (!rect1active)
			{

				rect1active = true;

			}
			else
				
			{
				rect1.setPosition(k, rect1.getPosition().y + 0.1f);

				if (rect1.getPosition().y > 1200) {
					rect1.setPosition(k, start);
				}
			}

			// move rectangles rect 2
			if (!rect2active)
			{

				rect2active = true;

			}
			else
				
			{
				rect2.setPosition(k, rect2.getPosition().y + 0.1f);
				if (rect2.getPosition().y > 1200) {
					rect2.setPosition(k, start);
				}
			}
			// move rectangles rect 3
			if (!rect3active)
			{

				rect3active = true;

			}
			else
				
			{
				rect3.setPosition(k, rect3.getPosition().y + 0.1f);
				if (rect3.getPosition().y > 1200) {
					rect3.setPosition(k, start);
				}
			}

			// move rectangles rect 4
			if (!rect4active)
			{

				rect4active = true;

			}
			else

			{
				rect4.setPosition(k, rect4.getPosition().y + 0.1f);
				if (rect4.getPosition().y > 1200) {
					rect4.setPosition(k, start);
				}
			}
			// move rectangles rect 5
			if (!rect5active)
			{

				rect5active = true;

			}
			else

			{
				rect5.setPosition(k, rect5.getPosition().y + 0.1f);
				if (rect5.getPosition().y > 1200) {
					rect5.setPosition(k, start);
				}
			}

			// move rectangles rect 6
			if (!rect6active)
			{

				rect6active = true;

			}
			else

			{
				rect6.setPosition(k, rect6.getPosition().y + 0.1f);
				if (rect6.getPosition().y > 1200) {
					rect6.setPosition(k, start);
				}
			}


			// Clear everything from the last frame
			window.clear();

			//draw staff
			window.draw(background);
			window.draw(rect1);
			window.draw(rect2);
			window.draw(rect3);
			window.draw(rect4);
			window.draw(rect5);
			window.draw(rect6);
			window.display();

		}
		return 0;

	}

