
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
        



        #ifndef ORG_ALLBINARY_GAME_INPUT_COMPLETEMOTIONGESTUREINPUTEVENT_CPP
        #define ORG_ALLBINARY_GAME_INPUT_COMPLETEMOTIONGESTUREINPUTEVENT_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/input/CompleteMotionGestureInputEvent.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/input/motion/gesture/MotionGestureInput.h>

      
#include <org/allbinary/input/motion/gesture/TouchMotionGestureFactory.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/input/CompleteMotionGestureInputInterface.h"


CompleteMotionGestureInputEvent::CompleteMotionGestureInputEvent(std::string name, MotionGestureInput* motionGestureInput) : AllBinaryEventObject(motionGestureInput), logUtil(LogUtil::getInstance()), name(StringUtil::getInstance()->EMPTY_STRING), motionGestureInput(TouchMotionGestureFactory::getInstance()->NO_MOTION){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->setName(name);
    

        try {
            this->setMotionGestureInput(motionGestureInput);
    

                //: 
} catch(Exception& e) 
            {

    CommonStrings* commonStrings = CommonStrings::getInstance();;
    
this->logUtil->put(commonStrings->EXCEPTION, this, "InputToGameKeyEventAction", &e);
    
}

}


    auto CompleteMotionGestureInputEvent::setName(std::string name) -> void{
this->name= name;
    
}


    auto CompleteMotionGestureInputEvent::getName() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->name;
    
}


    auto CompleteMotionGestureInputEvent::setMotionGestureInput(MotionGestureInput* motionGestureInput) -> void{
this->motionGestureInput= motionGestureInput;
    
}


    auto CompleteMotionGestureInputEvent::getMotionGestureInput() -> MotionGestureInput*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->motionGestureInput;
    
}




        #endif //ORG_ALLBINARY_GAME_INPUT_COMPLETEMOTIONGESTUREINPUTEVENT_CPP
