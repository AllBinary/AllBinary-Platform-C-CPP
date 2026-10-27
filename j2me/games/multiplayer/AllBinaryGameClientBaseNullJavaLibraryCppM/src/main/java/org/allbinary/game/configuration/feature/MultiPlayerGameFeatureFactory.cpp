
        /* Generated Code Do Not Modify */
        



            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <javax/microedition/lcdui/Canvas.h>

      
#include <org/allbinary/game/commands/GameCommandsFactory.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class MultiPlayerGameFeatureFactory
            : public Object
         {

    private: static MultiPlayerGameFeatureFactory* instance() { static std::unique_ptr<MultiPlayerGameFeatureFactory> value(new MultiPlayerGameFeatureFactory()); return value.get(); }

    public: static MultiPlayerGameFeatureFactory* getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return MultiPlayerGameFeatureFactory::instance();
    
}


private: MultiPlayerGameFeatureFactory(){
}


    public: void addCommands(Object* anyType){

    GameCommandsFactory* gameCommandsFactory = GameCommandsFactory::getInstance();;
    

    Canvas* canvas = dynamic_cast<Canvas*>(anyType);;
    
canvas->addCommand(gameCommandsFactory->QUIT_COMMAND);
    
}


};

            

