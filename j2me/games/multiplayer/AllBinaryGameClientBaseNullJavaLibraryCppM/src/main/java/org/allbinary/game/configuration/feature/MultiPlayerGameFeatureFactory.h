
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_GAME_CONFIGURATION_FEATURE_MULTIPLAYERGAMEFEATUREFACTORY_H
        #define ORG_ALLBINARY_GAME_CONFIGURATION_FEATURE_MULTIPLAYERGAMEFEATUREFACTORY_H

            #include "java/lang/Object.h"
        
#include <javax/microedition/lcdui/Canvas.h>

      
#include <org/allbinary/game/commands/GameCommandsFactory.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class MultiPlayerGameFeatureFactory
            : public Object
         {

    private: static MultiPlayerGameFeatureFactory instance() { return MultiPlayerGameFeatureFactory(); }

    public: static MultiPlayerGameFeatureFactory getInstance();

private: MultiPlayerGameFeatureFactory();

    public: void addCommands(Object* anyType);

};

            


        #endif //ORG_ALLBINARY_GAME_CONFIGURATION_FEATURE_MULTIPLAYERGAMEFEATUREFACTORY_H
