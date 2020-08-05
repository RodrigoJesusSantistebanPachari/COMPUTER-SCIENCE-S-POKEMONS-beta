#include "pokemonclass.h"
#include "attack.cpp"


class ListOfPokemons{
	private:
		Pokemon *list;
		string name1;
		string name2;
		string name3;
		string name4;
		string name5;
	public:	
		ListOfPokemons(){
			list = new Pokemon(name1);
		}
		
		ListOfPokemons(string name1, string name2, string name3, string name4, string name5){
			this->name1 = name1;
			this->name2 = name2;
			this->name3 = name3;
			this->name4 = name4;
			this->name5 = name5;
			Pokemon p2(name2);
			Pokemon p3(name3);
			Pokemon p4(name4);
			Pokemon p5(name5);
			list = new Pokemon(name1);
			*(list+1) = p2;
			*(list+2) = p3;
			*(list+3) = p4;
			*(list+4) = p5;
		}
};


int main(){
	ListOfPokemons l1("Squirtle" , "Caterpie" , "Metapod" , "Butterfly" , "Bulbasour");
	cout<<l1.list->getName();
	return 0;
}
