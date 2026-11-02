
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_GAME_CONFIGURATION_FEATURE_MULTIPLAYERGAMEFEATUREFACTORY_H
        #define ORG_ALLBINARY_GAME_CONFIGURATION_FEATURE_MULTIPLAYERGAMEFEATUREFACTORY_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class Canvas;
class GameCommandsFactory;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class MultiPlayerGameFeatureFactory
            : public virtual Object
         {

    private: static MultiPlayerGameFeatureFactory* instance_owner();
    private: static MultiPlayerGameFeatureFactory* instance;

    public: static MultiPlayerGameFeatureFactory* getInstance();

private: MultiPlayerGameFeatureFactory();

    public: void addCommands(Object* anyType);
    public: void addCommands(const std::string& anyType) { return addCommands(JavaString::box(anyType)); }
    public: template<typename BoxValue, typename std::enable_if<std::is_arithmetic<BoxValue>::value, int>::type = 0> void addCommands(BoxValue anyType) { return addCommands(JavaBoxes::toObject(anyType)); }

};

            


        #endif //ORG_ALLBINARY_GAME_CONFIGURATION_FEATURE_MULTIPLAYERGAMEFEATUREFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_CONFIGURATION_FEATURE_MULTIPLAYERGAMEFEATUREFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_CONFIGURATION_FEATURE_MULTIPLAYERGAMEFEATUREFACTORY_H_COMPLETE
        #if __has_include(<javax/microedition/lcdui/Canvas.h>)
#include <javax/microedition/lcdui/Canvas.h>
#endif
#if __has_include(<org/allbinary/game/commands/GameCommandsFactory.h>)
#include <org/allbinary/game/commands/GameCommandsFactory.h>
#endif

        #endif
    
