
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
        



        #ifndef ORG_ALLBINARY_GAME_INPUT_SCROLLMAPLEFTGAMEINPUTPROCESSOR_H
        #define ORG_ALLBINARY_GAME_INPUT_SCROLLMAPLEFTGAMEINPUTPROCESSOR_H

        
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
        #include "org/allbinary/game/input/ScrollMapGameInputProcessor.h"
class ScrollMapPlayerGameInput;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class ScrollMapLeftGameInputProcessor: public ScrollMapGameInputProcessor {

public: ScrollMapLeftGameInputProcessor(ScrollMapPlayerGameInput* scrollMapPlayerGameInput);

                //@Throws(Exception.constructor)
            
    public: void processEvent(AllBinaryLayerManager* allbinaryLayerManager, GameKeyEvent* gameKeyEvent);

};

            


        #endif //ORG_ALLBINARY_GAME_INPUT_SCROLLMAPLEFTGAMEINPUTPROCESSOR_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_INPUT_SCROLLMAPLEFTGAMEINPUTPROCESSOR_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_INPUT_SCROLLMAPLEFTGAMEINPUTPROCESSOR_H_COMPLETE
        #if __has_include(<org/allbinary/game/input/event/GameKeyEvent.h>)
#include <org/allbinary/game/input/event/GameKeyEvent.h>
#endif
#if __has_include(<org/allbinary/layer/AllBinaryLayerManager.h>)
#include <org/allbinary/layer/AllBinaryLayerManager.h>
#endif
#if __has_include("org/allbinary/game/input/ScrollMapGameInputProcessor.h")
#include "org/allbinary/game/input/ScrollMapGameInputProcessor.h"
#endif
#if __has_include("org/allbinary/game/input/ScrollMapPlayerGameInput.h")
#include "org/allbinary/game/input/ScrollMapPlayerGameInput.h"
#endif

        #endif
    
