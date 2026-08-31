
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
        



        #ifndef ORG_ALLBINARY_INPUT_DIRECTIONALANALOGLOCATIONINPUTPROCESSOR_H
        #define ORG_ALLBINARY_INPUT_DIRECTIONALANALOGLOCATIONINPUTPROCESSOR_H

            #include "../../../java/lang/Exception.h"
        
#include <org/allbinary/android/input/motion/AnalogLocationInputProcessor.h>

      
#include <org/allbinary/game/input/GameInputProcessor.h>

      
#include <org/allbinary/game/input/GameKeyEventSourceInterface.h>

      
#include <org/allbinary/game/input/GameKeyFactory.h>

      
#include <org/allbinary/game/input/analog/AnalogLocationInput.h>

      
#include <org/allbinary/game/input/event/GameKeyEvent.h>

      
#include <org/allbinary/game/input/event/GameKeyEventFactory.h>

      
#include <org/allbinary/graphics/CustomGPoint.h>

      
#include <org/allbinary/layer/AllBinaryLayerManager.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class DirectionalAnalogLocationInputProcessor: public AnalogLocationInputProcessor: public GameKeyEventSourceInterface {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: const inputProcessorArray: std::vector<GameInputProcessor>;

    private: const gameKeyFactory: GameKeyFactory = GameKeyFactory.getInstance()!;

    private: leftGameKeyEvent: GameKeyEvent = GameKeyEvent.NONE;

    private: rightGameKeyEvent: GameKeyEvent = GameKeyEvent.NONE;

    private: upGameKeyEvent: GameKeyEvent = GameKeyEvent.NONE;

    private: downGameKeyEvent: GameKeyEvent = GameKeyEvent.NONE;

    private: leftTriggerGameKeyEvent: GameKeyEvent = GameKeyEvent.NONE;

    private: rightTriggerGameKeyEvent: GameKeyEvent = GameKeyEvent.NONE;

public constructor (std::vector<GameInputProcessor> inputProcessorArray);

    public process(AllBinaryLayerManager allbinaryLayerManager, AnalogLocationInput analogLocationInput);

    public int32_t getSourceId();

};

            


        #endif //ORG_ALLBINARY_INPUT_DIRECTIONALANALOGLOCATIONINPUTPROCESSOR_H
