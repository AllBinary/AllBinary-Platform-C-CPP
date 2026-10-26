
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
        



        #ifndef ORG_ALLBINARY_ANDROID_INPUT_MOTION_API1_GAMEINPUTMOTIONEVENTPROCESSORAPI1_H
        #define ORG_ALLBINARY_ANDROID_INPUT_MOTION_API1_GAMEINPUTMOTIONEVENTPROCESSORAPI1_H

            #include "java/lang/Exception.h"
        
#include <android/view/MotionEvent.h>

      
#include <org/allbinary/android/input/motion/BaseGameInputMotionEventProcessor.h>

      
#include <org/allbinary/input/motion/AllMotionRecognizer.h>

      
#include <org/allbinary/input/motion/MotionRecognizer.h>

      
#include <org/allbinary/logic/NullUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class GameInputMotionEventProcessorAPI1: public BaseGameInputMotionEventProcessor {

    private: static Object* instance = NullUtil::getInstance().NULL_OBJECT;

    public: static GameInputMotionEventProcessorAPI1 getInstance();

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: const MotionRecognizer motionRecognizer = AllMotionRecognizer();

private: GameInputMotionEventProcessorAPI1();

    public: void process(MotionEvent motionEvent);

};

            


        #endif //ORG_ALLBINARY_ANDROID_INPUT_MOTION_API1_GAMEINPUTMOTIONEVENTPROCESSORAPI1_H
