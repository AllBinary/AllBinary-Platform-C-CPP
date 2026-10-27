
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/android/input/motion/AnalogLocationInputProcessor.h>
class GameInputProcessor;
#include <org/allbinary/game/input/GameKeyEventSourceInterface.h>
class GameKeyFactory;
class AnalogLocationInput;
class GameKeyEvent;
class GameKeyEventFactory;
class CustomGPoint;
class AllBinaryLayerManager;
class LogUtil;
class CommonStrings;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class DirectionalAnalogLocationInputProcessor: public AnalogLocationInputProcessor, public GameKeyEventSourceInterface {

    /*protected*/ public: LogUtil* logUtil;

    private: std::vector<GameInputProcessor*> inputProcessorArray;

    private: GameKeyFactory* gameKeyFactory;

    private: GameKeyEvent* leftGameKeyEvent;

    private: GameKeyEvent* rightGameKeyEvent;

    private: GameKeyEvent* upGameKeyEvent;

    private: GameKeyEvent* downGameKeyEvent;

    private: GameKeyEvent* leftTriggerGameKeyEvent;

    private: GameKeyEvent* rightTriggerGameKeyEvent;

public: DirectionalAnalogLocationInputProcessor(std::vector<GameInputProcessor*> inputProcessorArray);

    public: void process(AllBinaryLayerManager* allbinaryLayerManager, AnalogLocationInput* analogLocationInput);

    public: int32_t getSourceId();

};

            


        #endif //ORG_ALLBINARY_INPUT_DIRECTIONALANALOGLOCATIONINPUTPROCESSOR_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_INPUT_DIRECTIONALANALOGLOCATIONINPUTPROCESSOR_H_COMPLETE)
        #define ORG_ALLBINARY_INPUT_DIRECTIONALANALOGLOCATIONINPUTPROCESSOR_H_COMPLETE
        #if __has_include(<org/allbinary/android/input/motion/AnalogLocationInputProcessor.h>)
#include <org/allbinary/android/input/motion/AnalogLocationInputProcessor.h>
#endif
#if __has_include(<org/allbinary/game/input/GameInputProcessor.h>)
#include <org/allbinary/game/input/GameInputProcessor.h>
#endif
#if __has_include(<org/allbinary/game/input/GameKeyEventSourceInterface.h>)
#include <org/allbinary/game/input/GameKeyEventSourceInterface.h>
#endif
#if __has_include(<org/allbinary/game/input/GameKeyFactory.h>)
#include <org/allbinary/game/input/GameKeyFactory.h>
#endif
#if __has_include(<org/allbinary/game/input/analog/AnalogLocationInput.h>)
#include <org/allbinary/game/input/analog/AnalogLocationInput.h>
#endif
#if __has_include(<org/allbinary/game/input/event/GameKeyEvent.h>)
#include <org/allbinary/game/input/event/GameKeyEvent.h>
#endif
#if __has_include(<org/allbinary/game/input/event/GameKeyEventFactory.h>)
#include <org/allbinary/game/input/event/GameKeyEventFactory.h>
#endif
#if __has_include(<org/allbinary/graphics/CustomGPoint.h>)
#include <org/allbinary/graphics/CustomGPoint.h>
#endif
#if __has_include(<org/allbinary/layer/AllBinaryLayerManager.h>)
#include <org/allbinary/layer/AllBinaryLayerManager.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif

        #endif
    
