
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_SPECIAL_SPECIALANALOGRIGHTGAMEINPUTPROCESSOR_H
        #define ORG_ALLBINARY_GAME_LAYER_SPECIAL_SPECIALANALOGRIGHTGAMEINPUTPROCESSOR_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
class GameKeyEvent;
class AllBinaryLayerManager;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/layer/special/SpecialGameInputProcessor.h"
class CollidableDestroyableDamageableLayer;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class SpecialAnalogRightGameInputProcessor: public SpecialGameInputProcessor {

public: SpecialAnalogRightGameInputProcessor(CollidableDestroyableDamageableLayer* collidableDestroyableDamageableLayer);

                //@Throws(Exception.constructor)
            
    public: void processAnalog(AllBinaryLayerManager* allbinaryLayerManager, GameKeyEvent* gameKeyEvent, int32_t xAnalogValue);

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_SPECIAL_SPECIALANALOGRIGHTGAMEINPUTPROCESSOR_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_LAYER_SPECIAL_SPECIALANALOGRIGHTGAMEINPUTPROCESSOR_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_LAYER_SPECIAL_SPECIALANALOGRIGHTGAMEINPUTPROCESSOR_H_COMPLETE
        #if __has_include(<org/allbinary/game/input/event/GameKeyEvent.h>)
#include <org/allbinary/game/input/event/GameKeyEvent.h>
#endif
#if __has_include(<org/allbinary/layer/AllBinaryLayerManager.h>)
#include <org/allbinary/layer/AllBinaryLayerManager.h>
#endif
#if __has_include("org/allbinary/game/layer/special/SpecialGameInputProcessor.h")
#include "org/allbinary/game/layer/special/SpecialGameInputProcessor.h"
#endif
#if __has_include("org/allbinary/game/layer/special/CollidableDestroyableDamageableLayer.h")
#include "org/allbinary/game/layer/special/CollidableDestroyableDamageableLayer.h"
#endif

        #endif
    
