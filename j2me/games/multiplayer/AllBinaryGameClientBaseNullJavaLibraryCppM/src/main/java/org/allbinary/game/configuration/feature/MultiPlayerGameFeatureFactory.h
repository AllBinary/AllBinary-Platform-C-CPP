
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_GAME_CONFIGURATION_FEATURE_MULTIPLAYERGAMEFEATUREFACTORY_H
        #define ORG_ALLBINARY_GAME_CONFIGURATION_FEATURE_MULTIPLAYERGAMEFEATUREFACTORY_H

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

    public: static MultiPlayerGameFeatureFactory* getInstance();

private: MultiPlayerGameFeatureFactory();

    public: void addCommands(Object* anyType);

};

            


        #endif //ORG_ALLBINARY_GAME_CONFIGURATION_FEATURE_MULTIPLAYERGAMEFEATUREFACTORY_H
