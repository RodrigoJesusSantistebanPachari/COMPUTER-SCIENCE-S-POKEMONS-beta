#ifndef PLAYER_H
#define PLAYER_H

#include <SFML/Graphics.hpp>
#include "Animation.h"

class Player{
	private:
		sf::RectangleShape body;
		unsigned int row;
		Animation animation;
		float speed;
	public:
		
		Player(){
		}
		
		
		void complete(Texture* texture, Vector2u imageCount, float switchTime, float speed){
			animation.complete(texture, imageCount, switchTime);
			this->speed = speed;
			row = 0;
			body.setSize(sf::Vector2f(300.0f, 400.0f));
			body.setPosition(400.0f,560.0f);
			body.setTexture(texture);
		}
		
		~Player(){
		}
		
		void Update(float deltaTime){
			sf::Vector2f movement(0.0f, 0.0f);
			
			
			
			if(sf::Keyboard::isKeyPressed(sf::Keyboard::A))
				movement.x -= speed * deltaTime;
			if(sf::Keyboard::isKeyPressed(sf::Keyboard::D))
				movement.x += speed * deltaTime;
			
			if(movement.x == 0.0f){
				row = 0;
			}
			
			else{
				if(sf::Keyboard::isKeyPressed(sf::Keyboard::W))
					row = 3;
				else
					row = 1;
			}
			

				
			animation.Update(row,deltaTime);
			body.setTextureRect(animation.uvRect);
			body.move(movement);
		}
		
		void Draw(sf::RenderWindow &window){
			window.draw(body);
		}
		
};

#endif
