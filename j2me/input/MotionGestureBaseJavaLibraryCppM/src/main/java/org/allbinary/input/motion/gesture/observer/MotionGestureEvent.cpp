
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
        



#include <jsinterop/annotations/JsType.h>

      
#include <org/allbinary/graphics/GPoint.h>

      
#include <org/allbinary/graphics/PointFactory.h>

      
#include <org/allbinary/input/motion/gesture/MotionGestureInput.h>

      
#include <org/allbinary/input/motion/gesture/TouchMotionGestureFactory.h>

      
#include <org/allbinary/TsUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>

      
#include <org/allbinary/string/CommonLabels.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class MotionGestureEvent: public AllBinaryEventObject {

    private: static const std::string CURRENT = CommonLabels::getInstance().CURRENT;

    private: static const std::string PREVIOUS = " Previous: ";

    private: static const std::string HASHCODE = " hashcode: ";

    private: MotionGestureInput motionGesture = TouchMotionGestureFactory::getInstance().NO_MOTION;

    private: int32_t id;

    private: GPoint previousPoint = PointFactory::getInstance().ZERO_ZERO;

    private: GPoint currentPoint = PointFactory::getInstance().ZERO_ZERO;

public: MotionGestureEvent(Object* source, int32_t id, MotionGestureInput motionGesture){
            super(source);
                    

                            //For kotlin this is before the body of the constructor.
                    
this->id= id;
    
this->setMotionGesture(motionGesture);
    
}


    public: MotionGestureInput getMotionGesture(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->motionGesture;
    
}


    public: void setMotionGesture(MotionGestureInput motionGesture){
this->motionGesture= motionGesture;
    
}


    public: GPoint getPreviousPoint(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->previousPoint;
    
}


    public: void setPreviousPoint(GPoint previousPoint){
this->previousPoint= previousPoint;
    
}


    public: GPoint getCurrentPoint(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->currentPoint;
    
}


    public: void setCurrentPoint(GPoint currentPoint){
this->currentPoint= currentPoint;
    
}


    public: std::string toString(){

    StringMaker stringBuffer = StringMaker();;
    

    StringUtil stringUtil = StringUtil::getInstance();;
    
stringBuffer.append(stringUtil.toString(this->motionGesture));
    
stringBuffer.append(MotionGestureEvent::CURRENT);
    
stringBuffer.append(stringUtil.toString(this->currentPoint));
    
stringBuffer.append(MotionGestureEvent::PREVIOUS);
    
stringBuffer.append(stringUtil.toString(this->previousPoint));
    
stringBuffer.append(MotionGestureEvent::HASHCODE);
    
stringBuffer.appendint(TsUtil::getInstance().hashCode(this));
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer.toString();;
    
}


    public: int32_t getId(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->id;
    
}


};

            

