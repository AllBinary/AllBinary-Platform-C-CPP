
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

            #include "../../../../java/lang/Exception.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <org/allbinary/input/motion/gesture/MotionGestureInput.h>

      
#include <org/allbinary/input/motion/gesture/TouchMotionGestureFactory.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "CompleteMotionGestureInputInterface.h"

class CompleteMotionGestureInputEvent: public AllBinaryEventObject, public CompleteMotionGestureInputInterface {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: std::string name = StringUtil::getInstance().EMPTY_STRING;

    private: MotionGestureInput motionGestureInput = TouchMotionGestureFactory::getInstance().NO_MOTION;

public: CompleteMotionGestureInputEvent(std::string name, MotionGestureInput motionGestureInput);

    protected: void setName(std::string name);

    public: std::string getName();

    public: void setMotionGestureInput(MotionGestureInput motionGestureInput);

    public: MotionGestureInput getMotionGestureInput();

};

            


        #endif //ORG_ALLBINARY_GAME_INPUT_COMPLETEMOTIONGESTUREINPUTEVENT_H
