
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_GAME_CONFIGURATION_FEATURE_MULTIPLAYERGAMEFEATUREFACTORY_CPP
        #define ORG_ALLBINARY_GAME_CONFIGURATION_FEATURE_MULTIPLAYERGAMEFEATUREFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/configuration/feature/MultiPlayerGameFeatureFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <javax/microedition/lcdui/Canvas.h>

      
#include <org/allbinary/game/commands/GameCommandsFactory.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
auto MultiPlayerGameFeatureFactory::instance_owner() -> MultiPlayerGameFeatureFactory* { static std::unique_ptr<MultiPlayerGameFeatureFactory> value(new MultiPlayerGameFeatureFactory()); return value.get(); }
MultiPlayerGameFeatureFactory* MultiPlayerGameFeatureFactory::instance = MultiPlayerGameFeatureFactory::instance_owner();

    auto MultiPlayerGameFeatureFactory::getInstance() -> MultiPlayerGameFeatureFactory*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return MultiPlayerGameFeatureFactory::instance;
    
}


MultiPlayerGameFeatureFactory::MultiPlayerGameFeatureFactory(){
}


    auto MultiPlayerGameFeatureFactory::addCommands(Object* anyType) -> void{

    GameCommandsFactory* gameCommandsFactory = GameCommandsFactory::getInstance();;
    

    Canvas* canvas = dynamic_cast<Canvas*>(anyType);;
    
canvas->addCommand(gameCommandsFactory->QUIT_COMMAND);
    
}




        #endif //ORG_ALLBINARY_GAME_CONFIGURATION_FEATURE_MULTIPLAYERGAMEFEATUREFACTORY_CPP
