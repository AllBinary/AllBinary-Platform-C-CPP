
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
        



        #ifndef ORG_ALLBINARY_INPUT_MOTION_GESTURE_OBSERVER_GAMEMOTIONGESTURELISTENER_CPP
        #define ORG_ALLBINARY_INPUT_MOTION_GESTURE_OBSERVER_GAMEMOTIONGESTURELISTENER_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/input/motion/gesture/observer/GameMotionGestureListener.h"
        

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


GameMotionGestureListener::GameMotionGestureListener(CompleteMotionGestureListenerInterface* signed_) : logUtil(LogUtil::getInstance()), commonStrings(CommonStrings::getInstance()), motionGestureCollection(new BasicArrayListD()), touchGestureCollection(new BasicArrayListD()){
this->logUtil->putF(this->commonStrings->START, this, this->commonStrings->CONSTRUCTOR);
    
this->signed_= signed_;
    
}


    auto GameMotionGestureListener::onEvent(AllBinaryEventObject* eventObject) -> void{
ForcedLogUtil::log(this->commonStrings->NOT_IMPLEMENTED, this);
    
}


    auto GameMotionGestureListener::onUpMotionGestureEvent(MotionGestureEvent* ev) -> void{
this->onMotionGestureEvent(ev);
    
}


    auto GameMotionGestureListener::onDownMotionGestureEvent(MotionGestureEvent* ev) -> void{
this->onMotionGestureEvent(ev);
    
}


    auto GameMotionGestureListener::onLeftMotionGestureEvent(MotionGestureEvent* ev) -> void{
this->onMotionGestureEvent(ev);
    
}


    auto GameMotionGestureListener::onRightMotionGestureEvent(MotionGestureEvent* ev) -> void{
this->onMotionGestureEvent(ev);
    
}


    auto GameMotionGestureListener::onDiagonalDownRightMotionGestureEvent(MotionGestureEvent* ev) -> void{
this->onMotionGestureEvent(ev);
    
}


    auto GameMotionGestureListener::onDiagonalDownLeftMotionGestureEvent(MotionGestureEvent* ev) -> void{
this->onMotionGestureEvent(ev);
    
}


    auto GameMotionGestureListener::onDiagonalUpRightMotionGestureEvent(MotionGestureEvent* ev) -> void{
this->onMotionGestureEvent(ev);
    
}


    auto GameMotionGestureListener::onDiagonalUpLeftMotionGestureEvent(MotionGestureEvent* ev) -> void{
this->onMotionGestureEvent(ev);
    
}


    auto GameMotionGestureListener::onPressedMotionGestureEvent(MotionGestureEvent* ev) -> void{
this->touchGestureCollection->add(ev->getMotionGesture());
    
}


    auto GameMotionGestureListener::released(MotionGestureEvent* ev) -> void{

        try {
            this->touchGestureCollection->add(ev->getMotionGesture());
    
this->signed_->onMotionGestureCompleted(this->touchGestureCollection);
    
this->touchGestureCollection->clear();
    

                //: 
} catch(Exception& e) 
            {

    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append(this->commonStrings->EXCEPTION_LABEL);
    
stringBuffer->append(StringUtil::getInstance()->toString(ev->getMotionGesture()));
    
this->logUtil->put(stringBuffer->toString(), this, "release", &e);
    
}

}


    auto GameMotionGestureListener::onScrolledMotionGestureEvent(MotionGestureEvent* motionGestureEvent) -> void{
}


    auto GameMotionGestureListener::onMotionGestureEvent(MotionGestureEvent* ev) -> void{

        try {
            
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
                            this->motionGestureCollection->add(motionGestureInput);
    
this->signed_->onMotionGestureCompleted(this->motionGestureCollection);
    
this->motionGestureCollection->clear();
    
this->touchGestureCollection->clear();
    

                        }
                            

                //: 
} catch(Exception& e) 
            {

    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append(this->commonStrings->EXCEPTION_LABEL);
    
stringBuffer->append(StringUtil::getInstance()->toString(ev->getMotionGesture()));
    
this->logUtil->put(stringBuffer->toString(), this, "onMotionGestureEvent", &e);
    
}

}




        #endif //ORG_ALLBINARY_INPUT_MOTION_GESTURE_OBSERVER_GAMEMOTIONGESTURELISTENER_CPP
