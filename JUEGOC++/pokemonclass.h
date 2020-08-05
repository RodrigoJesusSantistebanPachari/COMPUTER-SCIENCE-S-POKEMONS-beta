#ifndef POKEMONCLASS_H
#define POKEMONCLASS_H
#include<iostream>
#include <cstdlib>
#include <ctime>
#include <SFML/Graphics.hpp>
#include "Animation.h"
#include "Player.h"
using namespace std;
using namespace sf;

class Pokemon{
	
	private:
		
		string type;
		string advantage1;
		string advantage2;
		string resistance1;
		string resistance2;
		string resistance3;
		float damageattack;
		float health;
		string name;
		//sf::
		Texture skin;
		
		unsigned int typeofplayer;		
		
	public:
		//sf::
		Player p1;
		
		Animation animation;
		
		RectangleShape player;
		
		friend void attack (Pokemon &p1, Pokemon &p2);
		
		//Constructor
		
		Pokemon(float health, float damageattack, string type, string advantage1, string advantage2, string resistance1, string resistance2, string resistance3, string name){
			this->type = type;
			this->advantage1 = advantage1;
			this->advantage2 = advantage2;
			this->health = health;
			this->damageattack = damageattack;
			this->name = name;
			
		}
		
		Pokemon(string name, int typeofplayer){
			this->name=name;
			this->typeofplayer = typeofplayer;
			
			if(typeofplayer==1){
			
			if(name == "Caterpie"){
				this->type =       "Bug";
				this->advantage1 = "Grass";
				this->advantage2 = "Psychic";
				this->resistance1 = "Fighting";
				this->resistance2 = "Grass";
				this->resistance3 = "Ground";
				this->health = 393;
				this->damageattack = 55;
				this->skin.loadFromFile("Images/.png");
				this->player.setSize(Vector2f(300.0f, 400.0f));
				this->player.setTexture(&skin);
				this->player.setPosition(400.0f,560.0f);
				this->animation.complete(&skin, Vector2u(4,6), 0.2f);
			}

			else if(name == "Metapod"){
				this->type="Bug";
				this->advantage1 = "Grass";
				this->advantage2 = "Psychic";
				this->resistance1 = "Fighting";
				this->resistance2 = "Grass";
				this->resistance3 = "Ground";
				this->health = 419;
				this->damageattack = 45;
				this->skin.loadFromFile("Images/.png");
				this->player.setSize(Vector2f(300.0f, 400.0f));
				this->player.setTexture(&skin);
				this->player.setPosition(400.0f,560.0f);
				this->animation.complete(&skin, Vector2u(4,6), 0.2f);
			}
			
			else if(name == "Butterfly"){
				this->type = "Bug";
				this->advantage1 = "Grass";
				this->advantage2 = "Psychic";
				this->resistance1 = "Fighting"; 
				this->resistance2 = "Grass";
				this->resistance3 = "Ground";
				this->health = 1701;
				this->damageattack = 167;
				this->skin.loadFromFile("Images/.png");
				this->player.setSize(Vector2f(300.0f, 400.0f));
				this->player.setTexture(&skin);
				this->player.setPosition(400.0f,560.0f);
				this->animation.complete(&skin, Vector2u(4,6), 0.2f);
			}
			
			else if(name == "Charmander"){
				this->type = "Fire";
				this->advantage1 = "Grass";
				this->advantage2 = "Bug";
				this->resistance1 = "Fire"; 
				this->resistance2 = "Grass";
				this->resistance3 = "Bug";
				this->health = 831;
				this->damageattack = 116;
				this->skin.loadFromFile("Images/charmander.png");
				this->player.setSize(Vector2f(300.0f, 400.0f));
				this->player.setTexture(&skin);
				this->player.setPosition(400.0f,560.0f);
				this->animation.complete(&skin, Vector2u(4,6), 0.2f);
				this->p1.complete(&skin, Vector2u(4,6), 0.2f, 100.0f);
			}
			
			else if(name == "Pikachu"){
				this->type = "Electric";
				this->advantage1 = "Flying";
				this->advantage2 = "Water";
				this->resistance1 = "Electric"; 
				this->resistance2 = "Flying";
				this->resistance3 = "Steel";
				this->health = 787;
				this->damageattack = 112;
				this->skin.loadFromFile("Images/.png");
				this->player.setSize(Vector2f(300.0f, 400.0f));
				this->player.setTexture(&skin);
				this->player.setPosition(400.0f,560.0f);
				this->animation.complete(&skin, Vector2u(4,6), 0.2f);
			}
			
			else if(name == "Bulbasour"){
				this->type = "Grass";
				this->advantage1 = "Water";
				this->advantage2 = "Rock";
				this->resistance1 = "Electric"; 
				this->resistance2 = "Grass";
				this->resistance3 = "Ground";
				this->health = 981;
				this->damageattack = 118;
				this->skin.loadFromFile("Images/.png");
				this->player.setSize(Vector2f(300.0f, 400.0f));
				this->player.setTexture(&skin);
				this->player.setPosition(400.0f,560.0f);
				this->animation.complete(&skin, Vector2u(4,6), 0.2f);
			}
			
			else if(name == "Squirtle"){
				this->type = "Water";
				this->advantage1 = "Fire";
				this->advantage2 = "Ground";
				this->resistance1 = "Fire"; 
				this->resistance2 = "Steel";
				this->resistance3 = "Water";
				this->health = 808;
				this->damageattack = 94;
				this->skin.loadFromFile("Images/squirtle.png");
				this->player.setSize(Vector2f(300.0f, 400.0f));
				this->player.setTexture(&skin);
				this->player.setPosition(400.0f,560.0f);
				this->animation.complete(&skin, Vector2u(4,6), 0.2f);
			}
			
			}
			
			if(typeofplayer==2){
			
			if(name == "Caterpie"){
				this->type =       "Bug";
				this->advantage1 = "Grass";
				this->advantage2 = "Psychic";
				this->resistance1 = "Fighting";
				this->resistance2 = "Grass";
				this->resistance3 = "Ground";
				this->health = 393;
				this->damageattack = 55;
				this->skin.loadFromFile("Images/.png");
				this->player.setSize(Vector2f(300.0f, 400.0f));
				this->player.setTexture(&skin);
				this->player.setPosition(1250.0f,560.0f);
				this->animation.complete(&skin, Vector2u(4,6), 0.2f);
			}

			else if(name == "Metapod"){
				this->type="Bug";
				this->advantage1 = "Grass";
				this->advantage2 = "Psychic";
				this->resistance1 = "Fighting";
				this->resistance2 = "Grass";
				this->resistance3 = "Ground";
				this->health = 419;
				this->damageattack = 45;
				this->skin.loadFromFile("Images/.png");
				this->player.setSize(Vector2f(300.0f, 400.0f));
				this->player.setTexture(&skin);
				this->player.setPosition(1250.0f,560.0f);
				this->animation.complete(&skin, Vector2u(4,6), 0.2f);
			}
			
			else if(name == "Butterfly"){
				this->type = "Bug";
				this->advantage1 = "Grass";
				this->advantage2 = "Psychic";
				this->resistance1 = "Fighting"; 
				this->resistance2 = "Grass";
				this->resistance3 = "Ground";
				this->health = 1701;
				this->damageattack = 167;
				this->skin.loadFromFile("Images/.png");
				this->player.setSize(Vector2f(300.0f, 400.0f));
				this->player.setTexture(&skin);
				this->player.setPosition(1250.0f,560.0f);
				this->animation.complete(&skin, Vector2u(4,6), 0.2f);
			}
			
			else if(name == "Charmander"){
				this->type = "Fire";
				this->advantage1 = "Grass";
				this->advantage2 = "Bug";
				this->resistance1 = "Fire"; 
				this->resistance2 = "Grass";
				this->resistance3 = "Bug";
				this->health = 831;
				this->damageattack = 116;
				this->skin.loadFromFile("Images/charmander.png");
				this->player.setSize(Vector2f(300.0f, 400.0f));
				this->player.setTexture(&skin);
				this->player.setPosition(1250.0f,560.0f);
				this->animation.complete(&skin, Vector2u(4,6), 0.2f);
				this->p1.complete(&skin, Vector2u(4,6), 0.2f, 100.0f);
			}
			
			else if(name == "Pikachu"){
				this->type = "Electric";
				this->advantage1 = "Flying";
				this->advantage2 = "Water";
				this->resistance1 = "Electric"; 
				this->resistance2 = "Flying";
				this->resistance3 = "Steel";
				this->health = 787;
				this->damageattack = 112;
				this->skin.loadFromFile("Images/.png");
				this->player.setSize(Vector2f(300.0f, 400.0f));
				this->player.setTexture(&skin);
				this->player.setPosition(1250.0f,560.0f);
				this->animation.complete(&skin, Vector2u(4,6), 0.2f);
			}
			
			else if(name == "Bulbasour"){
				this->type = "Grass";
				this->advantage1 = "Water";
				this->advantage2 = "Rock";
				this->resistance1 = "Electric"; 
				this->resistance2 = "Grass";
				this->resistance3 = "Ground";
				this->health = 981;
				this->damageattack = 118;
				this->skin.loadFromFile("Images/.png");
				this->player.setSize(Vector2f(300.0f, 400.0f));
				this->player.setTexture(&skin);
				this->player.setPosition(1250.0f,560.0f);
				this->animation.complete(&skin, Vector2u(4,6), 0.2f);
			}
			
			else if(name == "Squirtle"){
				this->type = "Water";
				this->advantage1 = "Fire";
				this->advantage2 = "Ground";
				this->resistance1 = "Fire"; 
				this->resistance2 = "Steel";
				this->resistance3 = "Water";
				this->health = 808;
				this->damageattack = 94;
				this->skin.loadFromFile("Images/squirtle.png");
				this->player.setSize(Vector2f(300.0f, 400.0f));
				this->player.setTexture(&skin);
				this->player.setPosition(1250.0f,560.0f);
				this->animation.complete(&skin, Vector2u(4,6), 0.2f);
			}
			
			}
			
		}
	
		
		//Getters
		
		float getDamageattack(){
			return damageattack;
		}
		
		float getHealth(){
			return health;
		}
		
		string getAdvantage1(){
			return advantage1;
		}
		
		string getAdvantage2(){
			return advantage2;
		}
		
		string getType(){
			return type;
		}
		
		string getName(){
			return name;
		}
		
		string getResistance1(){
			return resistance1;
		}
		
		string getResistance2(){
			return resistance2;
		}
		
		string getResistance3(){
			return resistance3;
		}
		
		Texture getTexture(){
			return this->skin;
		}
		
		RectangleShape getRectangleShape(){
			return this->player;
		}	
		
		Animation getAnimation(){
			return this->animation;
		}
		
		int getTypeOfPlayer(){
			return typeofplayer;
		}
		
		
		//Setters
		
		void setType(string type){
			this->type = type;
		}
		
		void setDamageattack(float damageattack){
			this->damageattack = damageattack;
		}
		
		void setHealth(float health){
			this->health = health;
		}		
		
		void setAdvantage1(string advantage1){
			this->advantage1 = advantage1;
		}
		
		void setAdvantage2(string advantage2){
			this->advantage2 = advantage2;
		}
		
		void setName(string name){
			this->name=name;
		}
		
		void setResistance1(){
			this->resistance1 = resistance1;
		}
		
		void setResistance2(){
			this->resistance2 = resistance2;
		}
		
		void setResistance3(){
			this->resistance3 = resistance3;
		}
		//Functions
		
		void heal(){
			
			srand(time(NULL));
    		float random_number = (rand()%200)+1;
    		health += random_number;
    		//cout<<"\nYour Pokemon has gotten health. Your new Pokemon's health is -> " <<health;
    		
		}
		
		

};

#endif



