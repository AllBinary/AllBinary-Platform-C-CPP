
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
        



#include <org/allbinary/direction/Direction.h>

      
#include <org/allbinary/direction/DirectionUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/math/Angle.h>

      
#include <org/allbinary/math/AngleInfo.h>

      
#include <org/allbinary/math/FrameUtil.h>

      
#include <org/allbinary/util/CircularIndexUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "IndexedAnimation.h"
#include "RotationAnimationInterface.h"
#include "AnimationBehavior.h"

class RotationAnimation: public IndexedAnimation, public RotationAnimationInterface {

    protected: const FrameUtil frameUtil = FrameUtil::getInstance();

    protected: const DirectionUtil directionUtil = DirectionUtil::getInstance();

    protected: AngleInfo angleInfo;

    protected: CircularIndexUtil circularIndexUtil;

protected: RotationAnimation(AngleInfo angleInfo, CircularIndexUtil circularIndexUtil, AnimationBehavior animationBehavior) : IndexedAnimation(animationBehavior){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->angleInfo= angleInfo;
    
this->circularIndexUtil= circularIndexUtil;
    
}


    public: void nextRotationX(){
}


    public: void previousRotationX(){
}


    public: void nextRotation(){
this->angleInfo.adjustAngle(this->circularIndexUtil.next());
    
}


    public: void previousRotation(){
this->angleInfo.adjustAngle(this->circularIndexUtil.previous());
    
}


    public: void nextRotationZ(){
}


    public: void previousRotationZ(){
}


    public: void setFrame(int32_t index){
this->circularIndexUtil.setIndex(index);
    

    int32_t newFrame = this->circularIndexUtil.getIndex();;
    
this->angleInfo.adjustAngle(newFrame);
    
}


    public: void setFrameByDirection(Direction direction){

    Angle angle = this->directionUtil.getFrameAngle(direction);;
    
this->adjustFrameToAngle(angle);
    
}


    public: void setFrameToAngle(Angle angle){
this->adjustFrameToAngle(angle);
    
}


    public: void adjustFrameToAngle(Angle angle){
this->adjustFrame(angle.getValue());
    
}


    public: void adjustFrame(int16_t angle){
this->setFrame(this->frameUtil.getFrameForAngle(angle, static_cast<int32_t>(this->angleInfo.getAngleIncrementInfo().getAngleIncrement())));
    
}


    public: int32_t getFrame(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->circularIndexUtil.getIndex();;
    
}


    public: int32_t getSize(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->circularIndexUtil.getSize();;
    
}


    public: AngleInfo getAngleInfoP(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->angleInfo;
    
}


    public: std::string toString(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return StringMaker().append(super.toString()).append("circularIndexUtil: ").append(this->circularIndexUtil.toString()).append("angleInfo: ").append(this->angleInfo.toString()).toString();;
    
}


};

            

