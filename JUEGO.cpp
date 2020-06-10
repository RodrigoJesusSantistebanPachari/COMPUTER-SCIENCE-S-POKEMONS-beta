#include<iostream>
using namespace std;

class Pokemon{
	protected:
		string disadvantage;
		string advantage;
		int damageattack;
	public:
		int health;
		Pokemon(int health, int damageattack, string advantage, string disadvantage){
			this->disadvantage = disadvantage;
			this->advantage = advantage;
			this->health = health;
			this->damageattack = damageattack;
		}
		int getdamageattack(){
			return damageattack;
		}
		string getadvantage(){
			return advantage;
		}
		string getdisadvantage(){
			return disadvantage;
		}
};

class Planta:public Pokemon{
	private:
		string name;
	public:
		Planta(int _health, int _damageattack, string _advantage, string _disadvantage, string _name):Pokemon(_health, _damageattack, _advantage, _disadvantage){
			name = _name;

		}
};

void attack (Pokemon &p1, Pokemon &p2){
	if(p1.getadvantage()==p2.getdisadvantage()){
		cout<<"A Pokemon is attacking with a CRITICAL ATTACK other Pokemon! "<<endl;
		p2.health-=(p1.getdamageattack())*2;	
	}
	else{
		cout<<"A Pokemon is attacking other Pokemon! "<<endl;
		p2.health-=p1.getdamageattack();
	}
}

int main(){
	Pokemon p1(200, 15, "Water", "Plant");
	Planta p2(150, 20, "Plant", "Water", "Bulbasour");
	cout<<"Your Pokemon's health is: " <<p1.health<<endl;
	cout<<"Your Pokemon's health  is: "<<p2.health<<endl;
	attack(p2,p1);
	cout<<"Your Pokemon's health now is: " <<p1.health<<endl;
	return 0;
}
