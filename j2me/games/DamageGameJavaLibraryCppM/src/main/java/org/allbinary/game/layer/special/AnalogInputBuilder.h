
        /*
                * 
                *  AllBinary Open License Version 1
                *  Copyright (c) 2011 AllBinary
                *  
                *  By agreeing to this license you and any business entity you represent are
                *  legally bound to the AllBinary Open License Version 1 legal agreement.
                *  
                *  You may obtain the AllBinary Open License Version 1 legal agreement from
                *  AllBinary or the root directory of AllBinary's AllBinary Platform repository.
                *  
                *  Created By: Travis Berthelot  
        */
        
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_SPECIAL_ANALOGINPUTBUILDER_H
        #define ORG_ALLBINARY_GAME_LAYER_SPECIAL_ANALOGINPUTBUILDER_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class Canvas;
class GameInputProcessor;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class SpecialUpGameInputProcessor;
class SpecialDownGameInputProcessor;
class SpecialRightGameInputProcessor;
class SpecialLeftGameInputProcessor;
class Special1GameInputProcessor;
class Special3GameInputProcessor;
class CollidableDestroyableDamageableLayer;
class SpecialAnalogUpGameInputProcessor;
class SpecialAnalogDownGameInputProcessor;
class SpecialAnalogRightGameInputProcessor;
class SpecialAnalogLeftGameInputProcessor;
class SpecialAnalogLeftTriggerGameInputProcessor;
class SpecialAnalogRightTriggerGameInputProcessor;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class AnalogInputBuilder
            : public virtual Object
         {

    private: static AnalogInputBuilder* instance_owner();
    private: static AnalogInputBuilder* instance;

    public: static AnalogInputBuilder* getInstance();


            
    public: AnalogInputBuilder();
        
    public: void disable(std::vector<GameInputProcessor*> inputProcessorArray, CollidableDestroyableDamageableLayer* collidableDestroyableDamageableLayer);

    public: void enable(std::vector<GameInputProcessor*> inputProcessorArray, CollidableDestroyableDamageableLayer* collidableDestroyableDamageableLayer);

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_SPECIAL_ANALOGINPUTBUILDER_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_LAYER_SPECIAL_ANALOGINPUTBUILDER_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_LAYER_SPECIAL_ANALOGINPUTBUILDER_H_COMPLETE
        #if __has_include(<javax/microedition/lcdui/Canvas.h>)
#include <javax/microedition/lcdui/Canvas.h>
#endif
#if __has_include(<org/allbinary/game/input/GameInputProcessor.h>)
#include <org/allbinary/game/input/GameInputProcessor.h>
#endif
#if __has_include("org/allbinary/game/layer/special/SpecialUpGameInputProcessor.h")
#include "org/allbinary/game/layer/special/SpecialUpGameInputProcessor.h"
#endif
#if __has_include("org/allbinary/game/layer/special/SpecialDownGameInputProcessor.h")
#include "org/allbinary/game/layer/special/SpecialDownGameInputProcessor.h"
#endif
#if __has_include("org/allbinary/game/layer/special/SpecialRightGameInputProcessor.h")
#include "org/allbinary/game/layer/special/SpecialRightGameInputProcessor.h"
#endif
#if __has_include("org/allbinary/game/layer/special/SpecialLeftGameInputProcessor.h")
#include "org/allbinary/game/layer/special/SpecialLeftGameInputProcessor.h"
#endif
#if __has_include("org/allbinary/game/layer/special/Special1GameInputProcessor.h")
#include "org/allbinary/game/layer/special/Special1GameInputProcessor.h"
#endif
#if __has_include("org/allbinary/game/layer/special/Special3GameInputProcessor.h")
#include "org/allbinary/game/layer/special/Special3GameInputProcessor.h"
#endif
#if __has_include("org/allbinary/game/layer/special/CollidableDestroyableDamageableLayer.h")
#include "org/allbinary/game/layer/special/CollidableDestroyableDamageableLayer.h"
#endif
#if __has_include("org/allbinary/game/layer/special/SpecialAnalogUpGameInputProcessor.h")
#include "org/allbinary/game/layer/special/SpecialAnalogUpGameInputProcessor.h"
#endif
#if __has_include("org/allbinary/game/layer/special/SpecialAnalogDownGameInputProcessor.h")
#include "org/allbinary/game/layer/special/SpecialAnalogDownGameInputProcessor.h"
#endif
#if __has_include("org/allbinary/game/layer/special/SpecialAnalogRightGameInputProcessor.h")
#include "org/allbinary/game/layer/special/SpecialAnalogRightGameInputProcessor.h"
#endif
#if __has_include("org/allbinary/game/layer/special/SpecialAnalogLeftGameInputProcessor.h")
#include "org/allbinary/game/layer/special/SpecialAnalogLeftGameInputProcessor.h"
#endif
#if __has_include("org/allbinary/game/layer/special/SpecialAnalogLeftTriggerGameInputProcessor.h")
#include "org/allbinary/game/layer/special/SpecialAnalogLeftTriggerGameInputProcessor.h"
#endif
#if __has_include("org/allbinary/game/layer/special/SpecialAnalogRightTriggerGameInputProcessor.h")
#include "org/allbinary/game/layer/special/SpecialAnalogRightTriggerGameInputProcessor.h"
#endif

        #endif
    
