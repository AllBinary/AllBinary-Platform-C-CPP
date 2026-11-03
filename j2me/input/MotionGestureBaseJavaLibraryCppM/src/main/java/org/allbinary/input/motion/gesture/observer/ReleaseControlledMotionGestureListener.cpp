
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
        



        #ifndef ORG_ALLBINARY_INPUT_MOTION_GESTURE_OBSERVER_RELEASECONTROLLEDMOTIONGESTURELISTENER_CPP
        #define ORG_ALLBINARY_INPUT_MOTION_GESTURE_OBSERVER_RELEASECONTROLLEDMOTIONGESTURELISTENER_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/input/motion/gesture/observer/ReleaseControlledMotionGestureListener.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/input/motion/gesture/MotionGestureInput.h>

      
#include <org/allbinary/input/motion/gesture/TouchMotionGestureFactory.h>

      
#include <org/allbinary/logic/communication/log/ForcedLogUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/input/motion/gesture/observer/MotionGestureEventListener.h"
#include "org/allbinary/input/motion/gesture/observer/CompleteMotionGestureListenerInterface.h"
#include "org/allbinary/input/motion/gesture/observer/MotionGestureEvent.h"


ReleaseControlledMotionGestureListener::ReleaseControlledMotionGestureListener(CompleteMotionGestureListenerInterface* signed_) : logUtil(LogUtil::getInstance()), commonStrings(CommonStrings::getInstance()), currentMotionGesture(TouchMotionGestureFactory::getInstance()->NO_MOTION), motionGestureCollection(new BasicArrayListD()){
this->logUtil->putF(this->commonStrings->START, this, this->commonStrings->CONSTRUCTOR);
    
this->signed_= signed_;
    
}


    auto ReleaseControlledMotionGestureListener::onEvent(AllBinaryEventObject* eventObject) -> void{
ForcedLogUtil::log(this->commonStrings->NOT_IMPLEMENTED, this);
    
}


    auto ReleaseControlledMotionGestureListener::onUpMotionGestureEvent(MotionGestureEvent* ev) -> void{
this->onMotionGestureEvent(ev);
    
}


    auto ReleaseControlledMotionGestureListener::onDownMotionGestureEvent(MotionGestureEvent* ev) -> void{
this->onMotionGestureEvent(ev);
    
}


    auto ReleaseControlledMotionGestureListener::onLeftMotionGestureEvent(MotionGestureEvent* ev) -> void{
this->onMotionGestureEvent(ev);
    
}


    auto ReleaseControlledMotionGestureListener::onRightMotionGestureEvent(MotionGestureEvent* ev) -> void{
this->onMotionGestureEvent(ev);
    
}


    auto ReleaseControlledMotionGestureListener::onDiagonalDownRightMotionGestureEvent(MotionGestureEvent* ev) -> void{
this->onMotionGestureEvent(ev);
    
}


    auto ReleaseControlledMotionGestureListener::onDiagonalDownLeftMotionGestureEvent(MotionGestureEvent* ev) -> void{
this->onMotionGestureEvent(ev);
    
}


    auto ReleaseControlledMotionGestureListener::onDiagonalUpRightMotionGestureEvent(MotionGestureEvent* ev) -> void{
this->onMotionGestureEvent(ev);
    
}


    auto ReleaseControlledMotionGestureListener::onDiagonalUpLeftMotionGestureEvent(MotionGestureEvent* ev) -> void{
this->onMotionGestureEvent(ev);
    
}


    auto ReleaseControlledMotionGestureListener::onPressedMotionGestureEvent(MotionGestureEvent* ev) -> void{
this->isMouseGestureOccurring= true;
    
this->currentMotionGesture= TouchMotionGestureFactory::getInstance()->NO_MOTION;
    
this->onMotionGestureEvent(ev);
    
}


    auto ReleaseControlledMotionGestureListener::onScrolledMotionGestureEvent(MotionGestureEvent* motionGestureEvent) -> void{
}


    auto ReleaseControlledMotionGestureListener::released(MotionGestureEvent* ev) -> void{

        try {
            
                        if(this->isMouseGestureOccurring == false)
                        


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return ;
    
this->isMouseGestureOccurring= false;
    
this->signed_->onMotionGestureCompleted(this->motionGestureCollection);
    
this->motionGestureCollection->clear();
    

                //: 
} catch(Exception& e) 
            {
this->logUtil->put((new StringMaker())->append(this->commonStrings->EXCEPTION_LABEL)->append(StringUtil::getInstance()->toString(ev->getMotionGesture()))->toString(), this, "release", &e);
    
}

}


    auto ReleaseControlledMotionGestureListener::onMotionGestureEvent(MotionGestureEvent* ev) -> void{

                        if(this->isMouseGestureOccurring == false)
                        


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return ;
    

    MotionGestureInput* motionGestureInput = ev->getMotionGesture();;
    

                        if(motionGestureInput == TouchMotionGestureFactory::getInstance()->PRESSED)
                        
                                    {
                                    this->onPressedMotionGestureEvent(ev);
    

                                    }
                                
                             else 
                        if(motionGestureInput == TouchMotionGestureFactory::getInstance()->RELEASED)
                        
                                    {
                                    this->released(ev);
    

                                    }
                                
                        else {
                            
                        if(this->currentMotionGesture != motionGestureInput)
                        
                                    {
                                    this->currentMotionGesture= motionGestureInput;
    
this->motionGestureCollection->add(ev->getMotionGesture());
    

                                    }
                                

                        }
                            
}




        #endif //ORG_ALLBINARY_INPUT_MOTION_GESTURE_OBSERVER_RELEASECONTROLLEDMOTIONGESTURELISTENER_CPP
