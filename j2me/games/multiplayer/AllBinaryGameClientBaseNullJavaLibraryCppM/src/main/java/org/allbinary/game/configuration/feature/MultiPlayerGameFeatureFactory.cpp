
        /* Generated Code Do Not Modify */
        



            #include "../../../../../java/lang/Object.h"
        
#include <javax/microedition/lcdui/Canvas.h>

      
#include <org/allbinary/game/commands/GameCommandsFactory.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class MultiPlayerGameFeatureFactory
            : public Object
         {

    private: static MultiPlayerGameFeatureFactory instance() { return MultiPlayerGameFeatureFactory(); }

    public: static MultiPlayerGameFeatureFactory getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return MultiPlayerGameFeatureFactory::instance();
    
}


private: MultiPlayerGameFeatureFactory(){
}


    public: void addCommands(Object* anyType){

    GameCommandsFactory gameCommandsFactory = GameCommandsFactory::getInstance();;
    

    Canvas canvas = anyType as Canvas;;
    
canvas.addCommand(gameCommandsFactory.QUIT_COMMAND);
    
}


};

            

