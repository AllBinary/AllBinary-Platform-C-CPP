
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

            #include "java/lang/Exception.h"
        
#include <org/allbinary/game/input/event/GameKeyEvent.h>

      
#include <org/allbinary/layer/AllBinaryLayerManager.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "SelectedRTSLayersPlayerGameInputProcessor.h"
#include "SelectedRTSLayersPlayerGameInput.h"

class SelectedRTSLayersPlayerUpgradeGameInputProcessor: public SelectedRTSLayersPlayerGameInputProcessor {

public: SelectedRTSLayersPlayerUpgradeGameInputProcessor(SelectedRTSLayersPlayerGameInput selectedRTSLayersPlayerGameInput);

                //@Throws(Exception.constructor)
            
    public: void processEvent(AllBinaryLayerManager allbinaryLayerManager, GameKeyEvent gameKeyEvent);

};

            


        #endif //ORG_ALLBINARY_GAME_INPUT_SELECTEDRTSLAYERSPLAYERUPGRADEGAMEINPUTPROCESSOR_H
