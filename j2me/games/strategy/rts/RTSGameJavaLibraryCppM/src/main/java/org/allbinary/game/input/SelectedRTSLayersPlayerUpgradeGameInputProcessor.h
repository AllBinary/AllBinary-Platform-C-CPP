
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2003 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_GAME_INPUT_SELECTEDRTSLAYERSPLAYERUPGRADEGAMEINPUTPROCESSOR_H
        #define ORG_ALLBINARY_GAME_INPUT_SELECTEDRTSLAYERSPLAYERUPGRADEGAMEINPUTPROCESSOR_H

        
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
        #include "org/allbinary/game/input/SelectedRTSLayersPlayerGameInputProcessor.h"
class SelectedRTSLayersPlayerGameInput;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class SelectedRTSLayersPlayerUpgradeGameInputProcessor: public SelectedRTSLayersPlayerGameInputProcessor {

public: SelectedRTSLayersPlayerUpgradeGameInputProcessor(SelectedRTSLayersPlayerGameInput* selectedRTSLayersPlayerGameInput);

                //@Throws(Exception.constructor)
            
    public: void processEvent(AllBinaryLayerManager* allbinaryLayerManager, GameKeyEvent* gameKeyEvent);

};

            


        #endif //ORG_ALLBINARY_GAME_INPUT_SELECTEDRTSLAYERSPLAYERUPGRADEGAMEINPUTPROCESSOR_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_INPUT_SELECTEDRTSLAYERSPLAYERUPGRADEGAMEINPUTPROCESSOR_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_INPUT_SELECTEDRTSLAYERSPLAYERUPGRADEGAMEINPUTPROCESSOR_H_COMPLETE
        #if __has_include(<org/allbinary/game/input/event/GameKeyEvent.h>)
#include <org/allbinary/game/input/event/GameKeyEvent.h>
#endif
#if __has_include(<org/allbinary/layer/AllBinaryLayerManager.h>)
#include <org/allbinary/layer/AllBinaryLayerManager.h>
#endif
#if __has_include("org/allbinary/game/input/SelectedRTSLayersPlayerGameInputProcessor.h")
#include "org/allbinary/game/input/SelectedRTSLayersPlayerGameInputProcessor.h"
#endif
#if __has_include("org/allbinary/game/input/SelectedRTSLayersPlayerGameInput.h")
#include "org/allbinary/game/input/SelectedRTSLayersPlayerGameInput.h"
#endif

        #endif
    
