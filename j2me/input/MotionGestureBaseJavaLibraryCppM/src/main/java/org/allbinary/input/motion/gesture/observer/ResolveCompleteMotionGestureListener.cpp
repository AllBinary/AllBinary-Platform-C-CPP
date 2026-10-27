
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
        



        #ifndef ORG_ALLBINARY_INPUT_MOTION_GESTURE_OBSERVER_RESOLVECOMPLETEMOTIONGESTURELISTENER_CPP
        #define ORG_ALLBINARY_INPUT_MOTION_GESTURE_OBSERVER_RESOLVECOMPLETEMOTIONGESTURELISTENER_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/input/motion/gesture/observer/ResolveCompleteMotionGestureListener.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/game/input/CompleteMotionGestureInputEventHandler.h>

      
#include <org/allbinary/game/input/motion/action/GameKeyCompleteMotionGestureInputEvent.h>

      
#include <org/allbinary/game/input/motion/action/GameKeyFromMotionGestureEventListener.h>

      
#include <org/allbinary/input/motion/gesture/MotionGestureToMotionGestureActionAssociation.h>

      
#include <org/allbinary/input/motion/gesture/configuration/MotionGestureConfiguration.h>

      
#include <org/allbinary/input/motion/gesture/configuration/MotionGestureConfigurationFactory.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/input/motion/gesture/observer/CompleteMotionGestureListenerInterface.h"


ResolveCompleteMotionGestureListener::ResolveCompleteMotionGestureListener() : logUtil(LogUtil::getInstance()){

    CommonStrings* commonStrings = CommonStrings::getInstance();;
    
this->logUtil->putF("MotionGesture to CompleteMotionGesture Reciever", this, commonStrings->CONSTRUCTOR);
    
CompleteMotionGestureInputEventHandler::getInstance()->addListener(new GameKeyFromMotionGestureEventListener());
    
}


                //@Throws(Exception.constructor)
            
    auto ResolveCompleteMotionGestureListener::onMotionGestureCompleted(BasicArrayList* list) -> void{

    MotionGestureConfiguration* configuration = MotionGestureConfigurationFactory::getInstance();;
    

    BasicArrayList* commandActionsList = configuration->getAssociateCommandActionsList();;
    

    int32_t size = commandActionsList->size();;
    




                        for (
    int32_t index = size -1;index >= 0; index--)
        {

    MotionGestureToMotionGestureActionAssociation* association = dynamic_cast<MotionGestureToMotionGestureActionAssociation*>(commandActionsList->objectArray[index]);;
    

                        if(association->isMotionGestureArrayEquals(list) == true)
                        
                                    {
                                    
    GameKeyCompleteMotionGestureInputEvent* completeMotionGestureInputEvent = dynamic_cast<GameKeyCompleteMotionGestureInputEvent*>(association->getCommandAction());;
    
CompleteMotionGestureInputEventHandler::getInstance()->fireEvent(completeMotionGestureInputEvent);
    
break;

                    

                                    }
                                
}

}




        #endif //ORG_ALLBINARY_INPUT_MOTION_GESTURE_OBSERVER_RESOLVECOMPLETEMOTIONGESTURELISTENER_CPP
