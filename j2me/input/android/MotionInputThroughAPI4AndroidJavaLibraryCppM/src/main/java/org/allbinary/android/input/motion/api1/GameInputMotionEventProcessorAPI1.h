
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class MotionEvent;
#include <org/allbinary/android/input/motion/BaseGameInputMotionEventProcessor.h>
class AllMotionRecognizer;
class MotionRecognizer;
class NullUtil;
class LogUtil;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class GameInputMotionEventProcessorAPI1: public BaseGameInputMotionEventProcessor {

    private: static Object* instance;

    public: static GameInputMotionEventProcessorAPI1* getInstance();

    /*protected*/ public: LogUtil* logUtil;

    private: MotionRecognizer* motionRecognizer;

private: GameInputMotionEventProcessorAPI1();

    public: void process(MotionEvent* motionEvent);

};

            


        #endif //ORG_ALLBINARY_ANDROID_INPUT_MOTION_API1_GAMEINPUTMOTIONEVENTPROCESSORAPI1_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_ANDROID_INPUT_MOTION_API1_GAMEINPUTMOTIONEVENTPROCESSORAPI1_H_COMPLETE)
        #define ORG_ALLBINARY_ANDROID_INPUT_MOTION_API1_GAMEINPUTMOTIONEVENTPROCESSORAPI1_H_COMPLETE
        #if __has_include(<android/view/MotionEvent.h>)
#include <android/view/MotionEvent.h>
#endif
#if __has_include(<org/allbinary/android/input/motion/BaseGameInputMotionEventProcessor.h>)
#include <org/allbinary/android/input/motion/BaseGameInputMotionEventProcessor.h>
#endif
#if __has_include(<org/allbinary/input/motion/AllMotionRecognizer.h>)
#include <org/allbinary/input/motion/AllMotionRecognizer.h>
#endif
#if __has_include(<org/allbinary/input/motion/MotionRecognizer.h>)
#include <org/allbinary/input/motion/MotionRecognizer.h>
#endif
#if __has_include(<org/allbinary/logic/NullUtil.h>)
#include <org/allbinary/logic/NullUtil.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif

        #endif
    
