
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class MotionEvent;
#include <org/allbinary/android/input/motion/BaseGameInputMotionEventProcessor.h>
class DisplayInfoSingleton;
class ScalableListener;
class AllMotionRecognizer;
class MotionRecognizer;
class NullUtil;
class ForcedLogUtil;
class LogUtil;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class GameInputMotionInfoAPI5;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class GameInputMotionEventProcessorAPI5: public BaseGameInputMotionEventProcessor {

    private: static Object* instance;

    public: static GameInputMotionEventProcessorAPI5* getInstance();

    /*protected*/ public: LogUtil* logUtil;

    private: DisplayInfoSingleton* displayInfo;

    private: std::vector<MotionRecognizer*> motionRecognizerArray;

    private: int32_t TOTAL_MINUS_ONE;

private: GameInputMotionEventProcessorAPI5();

    private: bool isValid(int32_t pointerId);

    public: void process(MotionEvent* motionEvent);

};

            


        #endif //ORG_ALLBINARY_ANDROID_INPUT_MOTION_API5_GAMEINPUTMOTIONEVENTPROCESSORAPI5_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_ANDROID_INPUT_MOTION_API5_GAMEINPUTMOTIONEVENTPROCESSORAPI5_H_COMPLETE)
        #define ORG_ALLBINARY_ANDROID_INPUT_MOTION_API5_GAMEINPUTMOTIONEVENTPROCESSORAPI5_H_COMPLETE
        #if __has_include(<android/view/MotionEvent.h>)
#include <android/view/MotionEvent.h>
#endif
#if __has_include(<org/allbinary/android/input/motion/BaseGameInputMotionEventProcessor.h>)
#include <org/allbinary/android/input/motion/BaseGameInputMotionEventProcessor.h>
#endif
#if __has_include(<org/allbinary/graphics/displayable/DisplayInfoSingleton.h>)
#include <org/allbinary/graphics/displayable/DisplayInfoSingleton.h>
#endif
#if __has_include(<org/allbinary/graphics/displayable/ScalableListener.h>)
#include <org/allbinary/graphics/displayable/ScalableListener.h>
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
#if __has_include(<org/allbinary/logic/communication/log/ForcedLogUtil.h>)
#include <org/allbinary/logic/communication/log/ForcedLogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include("org/allbinary/android/input/motion/api5/GameInputMotionInfoAPI5.h")
#include "org/allbinary/android/input/motion/api5/GameInputMotionInfoAPI5.h"
#endif

        #endif
    
