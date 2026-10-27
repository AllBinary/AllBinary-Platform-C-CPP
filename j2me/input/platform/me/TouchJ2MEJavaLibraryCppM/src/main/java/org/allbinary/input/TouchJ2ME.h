
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
        



        #ifndef ORG_ALLBINARY_INPUT_TOUCHJ2ME_H
        #define ORG_ALLBINARY_INPUT_TOUCHJ2ME_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class AllMotionRecognizer;
class BasicMotionGesturesHandler;
class GameMotionGestureListener;
class MotionGestureReceiveInterfaceFactory;
class LogUtil;
class CommonStrings;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        //TouchJ2ME
class TouchJ2ME
            : public virtual Object
         {

    /*protected*/ public: LogUtil* logUtil;

    private: const int32_t DEVICE_ID = 0;

    private: AllMotionRecognizer* motionRecognizer;

public: TouchJ2ME();

    public: void pointerDragged(int32_t x, int32_t y);

    public: void pointerPressed(int32_t x, int32_t y);

    public: void pointerReleased(int32_t x, int32_t y);

};

            


        #endif //ORG_ALLBINARY_INPUT_TOUCHJ2ME_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_INPUT_TOUCHJ2ME_H_COMPLETE)
        #define ORG_ALLBINARY_INPUT_TOUCHJ2ME_H_COMPLETE
        #if __has_include(<org/allbinary/input/motion/AllMotionRecognizer.h>)
#include <org/allbinary/input/motion/AllMotionRecognizer.h>
#endif
#if __has_include(<org/allbinary/input/motion/gesture/observer/BasicMotionGesturesHandler.h>)
#include <org/allbinary/input/motion/gesture/observer/BasicMotionGesturesHandler.h>
#endif
#if __has_include(<org/allbinary/input/motion/gesture/observer/GameMotionGestureListener.h>)
#include <org/allbinary/input/motion/gesture/observer/GameMotionGestureListener.h>
#endif
#if __has_include(<org/allbinary/input/motion/gesture/observer/MotionGestureReceiveInterfaceFactory.h>)
#include <org/allbinary/input/motion/gesture/observer/MotionGestureReceiveInterfaceFactory.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif

        #endif
    
