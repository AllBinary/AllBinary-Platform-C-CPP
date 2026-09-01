
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

            #include <vector>
        
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
        
class DirectionalAnalogLocationInputProcessor: public AnalogLocationInputProcessor, public GameKeyEventSourceInterface {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: std::vector<GameInputProcessor> inputProcessorArray;

    private: const GameKeyFactory gameKeyFactory = GameKeyFactory::getInstance();

    private: GameKeyEvent leftGameKeyEvent = GameKeyEvent::NONE;

    private: GameKeyEvent rightGameKeyEvent = GameKeyEvent::NONE;

    private: GameKeyEvent upGameKeyEvent = GameKeyEvent::NONE;

    private: GameKeyEvent downGameKeyEvent = GameKeyEvent::NONE;

    private: GameKeyEvent leftTriggerGameKeyEvent = GameKeyEvent::NONE;

    private: GameKeyEvent rightTriggerGameKeyEvent = GameKeyEvent::NONE;

public: DirectionalAnalogLocationInputProcessor(std::vector<GameInputProcessor> inputProcessorArray);

    public: void process(AllBinaryLayerManager allbinaryLayerManager, AnalogLocationInput analogLocationInput);

    public: int32_t getSourceId();

};

            


        #endif //ORG_ALLBINARY_INPUT_DIRECTIONALANALOGLOCATIONINPUTPROCESSOR_H
