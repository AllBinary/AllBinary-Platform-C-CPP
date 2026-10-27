
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
        



        #ifndef ORG_ALLBINARY_INPUT_MOTION_COMPLETEMOTIONGESTUREINPUTTOGAMEMOTIONGESTUREINPUT_H
        #define ORG_ALLBINARY_INPUT_MOTION_COMPLETEMOTIONGESTUREINPUTTOGAMEMOTIONGESTUREINPUT_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class TouchMotionGestureFactory;
class MotionGestureConfiguration;
class MotionGestureConfigurationFactory;
class DiagonalDownLeftTouchInputToGameKeyEventAction;
class DiagonalDownRightTouchInputToGameKeyEventAction;
class DiagonalUpLeftTouchInputToGameKeyEventAction;
class DiagonalUpRightTouchInputToGameKeyEventAction;
class DownTouchInputToGameKeyEventAction;
class LeftTouchInputToGameKeyEventAction;
class ReleaseTouchInputToGameKeyEventAction;
class RightTouchInputToGameKeyEventAction;
class UpTouchInputToGameKeyEventAction;
class LogUtil;
class PreLogUtil;
class CommonStrings;
class BasicArrayList;
class BasicArrayListD;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class CompleteMotionGestureInputToGameMotionGestureInput
            : public virtual Object
         {

    private: static CompleteMotionGestureInputToGameMotionGestureInput* instance_owner();
    private: static CompleteMotionGestureInputToGameMotionGestureInput* instance;

    public: static CompleteMotionGestureInputToGameMotionGestureInput* getInstance();


            
    public: CompleteMotionGestureInputToGameMotionGestureInput();
        
    /*protected*/ public: LogUtil* logUtil;

    public: void init();

};

            


        #endif //ORG_ALLBINARY_INPUT_MOTION_COMPLETEMOTIONGESTUREINPUTTOGAMEMOTIONGESTUREINPUT_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_INPUT_MOTION_COMPLETEMOTIONGESTUREINPUTTOGAMEMOTIONGESTUREINPUT_H_COMPLETE)
        #define ORG_ALLBINARY_INPUT_MOTION_COMPLETEMOTIONGESTUREINPUTTOGAMEMOTIONGESTUREINPUT_H_COMPLETE
        #if __has_include(<org/allbinary/input/motion/gesture/TouchMotionGestureFactory.h>)
#include <org/allbinary/input/motion/gesture/TouchMotionGestureFactory.h>
#endif
#if __has_include(<org/allbinary/input/motion/gesture/configuration/MotionGestureConfiguration.h>)
#include <org/allbinary/input/motion/gesture/configuration/MotionGestureConfiguration.h>
#endif
#if __has_include(<org/allbinary/input/motion/gesture/configuration/MotionGestureConfigurationFactory.h>)
#include <org/allbinary/input/motion/gesture/configuration/MotionGestureConfigurationFactory.h>
#endif
#if __has_include(<org/allbinary/input/motion/touch/action/DiagonalDownLeftTouchInputToGameKeyEventAction.h>)
#include <org/allbinary/input/motion/touch/action/DiagonalDownLeftTouchInputToGameKeyEventAction.h>
#endif
#if __has_include(<org/allbinary/input/motion/touch/action/DiagonalDownRightTouchInputToGameKeyEventAction.h>)
#include <org/allbinary/input/motion/touch/action/DiagonalDownRightTouchInputToGameKeyEventAction.h>
#endif
#if __has_include(<org/allbinary/input/motion/touch/action/DiagonalUpLeftTouchInputToGameKeyEventAction.h>)
#include <org/allbinary/input/motion/touch/action/DiagonalUpLeftTouchInputToGameKeyEventAction.h>
#endif
#if __has_include(<org/allbinary/input/motion/touch/action/DiagonalUpRightTouchInputToGameKeyEventAction.h>)
#include <org/allbinary/input/motion/touch/action/DiagonalUpRightTouchInputToGameKeyEventAction.h>
#endif
#if __has_include(<org/allbinary/input/motion/touch/action/DownTouchInputToGameKeyEventAction.h>)
#include <org/allbinary/input/motion/touch/action/DownTouchInputToGameKeyEventAction.h>
#endif
#if __has_include(<org/allbinary/input/motion/touch/action/LeftTouchInputToGameKeyEventAction.h>)
#include <org/allbinary/input/motion/touch/action/LeftTouchInputToGameKeyEventAction.h>
#endif
#if __has_include(<org/allbinary/input/motion/touch/action/ReleaseTouchInputToGameKeyEventAction.h>)
#include <org/allbinary/input/motion/touch/action/ReleaseTouchInputToGameKeyEventAction.h>
#endif
#if __has_include(<org/allbinary/input/motion/touch/action/RightTouchInputToGameKeyEventAction.h>)
#include <org/allbinary/input/motion/touch/action/RightTouchInputToGameKeyEventAction.h>
#endif
#if __has_include(<org/allbinary/input/motion/touch/action/UpTouchInputToGameKeyEventAction.h>)
#include <org/allbinary/input/motion/touch/action/UpTouchInputToGameKeyEventAction.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/PreLogUtil.h>)
#include <org/allbinary/logic/communication/log/PreLogUtil.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayListD.h>)
#include <org/allbinary/util/BasicArrayListD.h>
#endif

        #endif
    
