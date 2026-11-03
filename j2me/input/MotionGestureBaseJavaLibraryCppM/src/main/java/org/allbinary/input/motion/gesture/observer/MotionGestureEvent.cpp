
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
        



        #ifndef ORG_ALLBINARY_INPUT_MOTION_GESTURE_OBSERVER_MOTIONGESTUREEVENT_CPP
        #define ORG_ALLBINARY_INPUT_MOTION_GESTURE_OBSERVER_MOTIONGESTUREEVENT_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/input/motion/gesture/observer/MotionGestureEvent.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/graphics/GPoint.h>

      
#include <org/allbinary/graphics/PointFactory.h>

      
#include <org/allbinary/input/motion/gesture/MotionGestureInput.h>

      
#include <org/allbinary/input/motion/gesture/TouchMotionGestureFactory.h>

      
#include <org/allbinary/TsUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>

      
#include <org/allbinary/string/CommonLabels.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

MotionGestureEvent::MotionGestureEvent(Object* source, int32_t id, MotionGestureInput* motionGesture) : AllBinaryEventObject(source), motionGesture(TouchMotionGestureFactory::getInstance()->NO_MOTION), previousPoint(PointFactory::getInstance()->ZERO_ZERO), currentPoint(PointFactory::getInstance()->ZERO_ZERO), commonLabels(CommonLabels::getInstance()){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->id= id;
    
this->setMotionGesture(motionGesture);
    
}


    auto MotionGestureEvent::getMotionGesture() -> MotionGestureInput*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->motionGesture;
    
}


    auto MotionGestureEvent::setMotionGesture(MotionGestureInput* motionGesture) -> void{
this->motionGesture= motionGesture;
    
}


    auto MotionGestureEvent::getPreviousPoint() -> GPoint*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->previousPoint;
    
}


    auto MotionGestureEvent::setPreviousPoint(GPoint* previousPoint) -> void{
this->previousPoint= previousPoint;
    
}


    auto MotionGestureEvent::getCurrentPoint() -> GPoint*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->currentPoint;
    
}


    auto MotionGestureEvent::setCurrentPoint(GPoint* currentPoint) -> void{
this->currentPoint= currentPoint;
    
}


    auto MotionGestureEvent::toString() -> std::string{

    StringMaker* stringBuffer = new StringMaker();;
    

    StringUtil* stringUtil = StringUtil::getInstance();;
    
stringBuffer->append(stringUtil->toString(this->motionGesture));
    
stringBuffer->append(this->commonLabels->CURRENT);
    
stringBuffer->append(stringUtil->toString(this->currentPoint));
    
stringBuffer->append(MotionGestureEvent::PREVIOUS);
    
stringBuffer->append(stringUtil->toString(this->previousPoint));
    
stringBuffer->append(MotionGestureEvent::HASHCODE);
    
stringBuffer->appendint(TsUtil::getInstance()->hashCode(this));
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return stringBuffer->toString();;
    
}


    auto MotionGestureEvent::getId() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->id;
    
}




        #endif //ORG_ALLBINARY_INPUT_MOTION_GESTURE_OBSERVER_MOTIONGESTUREEVENT_CPP
