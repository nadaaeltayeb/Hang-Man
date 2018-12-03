#pragma once
#include "Animation.h"
#include<vector>
class menu :
	public Animation
{
public:
	Animation category[10];
	menu(float width, float height);
	void draw(sf::RenderWindow &window);
	bool isSpriteClicked(sf::Sprite &sprite, sf::Vector2i mousepos);
	void updatespr(sf::Sprite &sprite,int n, sf::RenderWindow &window);
	void reverse(sf::Sprite &sprite, int n, sf::RenderWindow &window);
	~menu();
	
private:
	
	sf::Texture background;
	sf::Sprite backsprite;
	sf::Texture texture2;
	//std::vector<sf::Texture> texture[10];
};

