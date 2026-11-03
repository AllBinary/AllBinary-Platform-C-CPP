
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
        



        #ifndef ORG_ALLBINARY_GAME_INPUT_COMPLETEMOTIONGESTUREINPUTEVENT_H
        #define ORG_ALLBINARY_GAME_INPUT_COMPLETEMOTIONGESTUREINPUTEVENT_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
class MotionGestureInput;
class TouchMotionGestureFactory;
class LogUtil;
class StringUtil;
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>
class CommonStrings;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/input/CompleteMotionGestureInputInterface.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class CompleteMotionGestureInputEvent: public AllBinaryEventObject, public virtual CompleteMotionGestureInputInterface {

    /*protected*/ public: LogUtil* logUtil;

    private: std::string name;

    private: MotionGestureInput* motionGestureInput;

public: CompleteMotionGestureInputEvent(std::string name, MotionGestureInput* motionGestureInput);

    /*protected*/ public: void setName(std::string name);

    public: std::string getName();

    public: void setMotionGestureInput(MotionGestureInput* motionGestureInput);

    public: MotionGestureInput* getMotionGestureInput();

};

            


        #endif //ORG_ALLBINARY_GAME_INPUT_COMPLETEMOTIONGESTUREINPUTEVENT_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_INPUT_COMPLETEMOTIONGESTUREINPUTEVENT_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_INPUT_COMPLETEMOTIONGESTUREINPUTEVENT_H_COMPLETE
        #if __has_include(<org/allbinary/input/motion/gesture/MotionGestureInput.h>)
#include <org/allbinary/input/motion/gesture/MotionGestureInput.h>
#endif
#if __has_include(<org/allbinary/input/motion/gesture/TouchMotionGestureFactory.h>)
#include <org/allbinary/input/motion/gesture/TouchMotionGestureFactory.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringUtil.h>)
#include <org/allbinary/logic/string/StringUtil.h>
#endif
#if __has_include(<org/allbinary/logic/util/event/AllBinaryEventObject.h>)
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include("org/allbinary/game/input/CompleteMotionGestureInputInterface.h")
#include "org/allbinary/game/input/CompleteMotionGestureInputInterface.h"
#endif

        #endif
    
