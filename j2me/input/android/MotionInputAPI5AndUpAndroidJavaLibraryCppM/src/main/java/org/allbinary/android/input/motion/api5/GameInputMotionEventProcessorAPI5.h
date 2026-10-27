
        /*
                * 
                *  AllBinary Open License Version 1
                *  Copyright (c) 2009 AllBinary
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
        



        #ifndef ORG_ALLBINARY_ANDROID_INPUT_MOTION_API5_GAMEINPUTMOTIONEVENTPROCESSORAPI5_H
        #define ORG_ALLBINARY_ANDROID_INPUT_MOTION_API5_GAMEINPUTMOTIONEVENTPROCESSORAPI5_H

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <android/view/MotionEvent.h>

      
#include <org/allbinary/android/input/motion/BaseGameInputMotionEventProcessor.h>

      
#include <org/allbinary/graphics/displayable/DisplayInfoSingleton.h>

      
#include <org/allbinary/graphics/displayable/ScalableListener.h>

      
#include <org/allbinary/input/motion/AllMotionRecognizer.h>

      
#include <org/allbinary/input/motion/MotionRecognizer.h>

      
#include <org/allbinary/logic/NullUtil.h>

      
#include <org/allbinary/logic/communication/log/ForcedLogUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/android/input/motion/api5/GameInputMotionInfoAPI5.h"

class GameInputMotionEventProcessorAPI5: public BaseGameInputMotionEventProcessor {

    private: static inline Object* instance = NullUtil::getInstance()->NULL_OBJECT;

    public: static GameInputMotionEventProcessorAPI5* getInstance();

    protected: LogUtil* logUtil = LogUtil::getInstance();

    private: DisplayInfoSingleton* displayInfo = DisplayInfoSingleton::getInstance();

    private: std::vector<MotionRecognizer*> motionRecognizerArray;

    private: int32_t TOTAL_MINUS_ONE;

private: GameInputMotionEventProcessorAPI5();

    private: bool isValid(int32_t pointerId);

    public: void process(MotionEvent* motionEvent);

};

            


        #endif //ORG_ALLBINARY_ANDROID_INPUT_MOTION_API5_GAMEINPUTMOTIONEVENTPROCESSORAPI5_H
