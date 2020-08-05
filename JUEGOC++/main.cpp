#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>
#include "attack.cpp"
#include "menu.h"

using namespace sf;

int main()
{
	// Create the main window
    RenderWindow window(VideoMode(1920, 1080), "Computer Science's Pokemons", Style::Close | Style::Resize);
    //RenderWindow gamewindow(VideoMode(1920, 1080), "Computer Science's Pokemons", Style::Close | Style::Resize);

   
    
   	Menu menu(window.getSize().x, window.getSize().y);
        
    Texture background;   
    Texture backgroundmenu;
    
    if (!background.loadFromFile("Images/fondo.png"))
        return EXIT_FAILURE;
        
	if (!backgroundmenu.loadFromFile("Images/fondoo.png"))
        return EXIT_FAILURE;

   
    
    Sprite backgroundd(background);
    Sprite backgrounddmenu(backgroundmenu);
    
    Pokemon p1("Charmander",1);
    Pokemon p2("Squirtle",1);
    
    // Create a graphical text to display
    
    Font font;
    if (!font.loadFromFile("Fonts/Pokemon Solid.ttf"))
        return EXIT_FAILURE;
    Text text("2 POKEMONS ARE FIGHTING!", font, 50);
    text.setOrigin(-640,-50);
    
    float deltaTime = 0.0f;
    Clock clock;
    
    
    // Start the game loop
    while (window.isOpen())
    {
  
        // Process events
        Event event;
        while (window.pollEvent(event))
        {
        	
        	if(Keyboard::isKeyPressed(Keyboard::Up)){
        		menu.MoveUp();
			}
			
			if(Keyboard::isKeyPressed(Keyboard::Down)){
				menu.MoveDown();
			}
			
			if(Keyboard::isKeyPressed(Keyboard::Return)){
				if(menu.GetPressedItem()==0){
					
					
					while(window.isOpen()){
						
						deltaTime = clock.restart().asSeconds();
						
						Event gameevent;
						
						
						while(window.pollEvent(gameevent)){
						if(gameevent.type == Event::Closed){
								window.close();
							}
						}
						
						p1.p1.Update(deltaTime);
       					//p1.player.setTextureRect(p1.getAnimation().uvRect);
       					
						window.clear();
       					
       					window.draw(backgroundd);
       					
       					window.draw(text);
       					 
						//window.draw(p1.getRectangleShape());
						p1.p1.Draw(window);
						
						window.display();
					}
					
				}
				if(menu.GetPressedItem()==1){
					while(window.isOpen()){
						
						Event gameevent;
						
						
						while(window.pollEvent(gameevent)){
						if(gameevent.type == Event::Closed){
								window.close();
							}
						}
						
						window.clear();
						window.display();
					}
					
				}
				if(menu.GetPressedItem()==2){
					window.close();
				}
			}
        	
            // Close window: exit
            if (event.type == Event::Closed)
                window.close();
        }
    	
    	
        
        
        // Clear screen
       	window.clear();
        // Draw the string
       
       	window.draw(backgrounddmenu);
       	
        menu.draw(window);
        
        
        // Update the window
        window.display();
    }
    return EXIT_SUCCESS;
}
