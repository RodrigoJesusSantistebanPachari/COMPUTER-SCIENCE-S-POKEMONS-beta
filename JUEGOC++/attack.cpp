#include "pokemonclass.h"

void attack (Pokemon &p1, Pokemon &p2){
	
		//cout<<"\nYour First Pokemon's health is: " <<p1.getHealth()<<endl;
		//cout<<"\nYour Second Pokemon's health is: "<<p2.getHealth()<<endl;

		if(p1.getAdvantage1()==p2.getType() || p1.getAdvantage2()==p2.getType()){
	
		//	cout<<"\nA Pokemon is attacking with a CRITICAL ATTACK other Pokemon! "<<endl;
			p2.health-=(p1.getDamageattack())*2;
		//	cout<<(p1.getDamageattack())*2<<" of DAMAGE!"<<endl;
	
		}
		
		else if(p1.getType()==p2.getResistance1() || p1.getType()==p2.getResistance2() || p1.getType()==p2.getResistance3()){
		//	cout<<"\nA Pokemon is attacking other Pokemon with a low attack"<<endl;
			p2.health -= (p1.getDamageattack())/2;
		//	cout<<(p1.getDamageattack())/2<<" of damage"<<endl;
		}

		else{
	
		//	cout<<"\nA Pokemon is attacking other Pokemon! "<<endl;
			p2.health-=p1.getDamageattack();
		//	cout<<p1.getDamageattack()<<" of damage!"<<endl;
	
		}
		//cout<<"\nYour Second Pokemon's health now is: " <<p2.getHealth()<<endl;
		
}

