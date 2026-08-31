
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

      
#include <org/allbinary/direction/Direction.h>

      
#include <org/allbinary/direction/DirectionUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/math/Angle.h>

      
#include <org/allbinary/math/AngleInfo.h>

      
#include <org/allbinary/math/FrameUtil.h>

      
#include <org/allbinary/util/CircularIndexUtil.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "IndexedAnimation.h"
#include "RotationAnimationInterface.h"
#include "AnimationBehavior.h"

class RotationAnimation: public IndexedAnimation: public RotationAnimationInterface {
        

    const frameUtil: FrameUtil = FrameUtil.getInstance()!;

    const directionUtil: DirectionUtil = DirectionUtil.getInstance()!;

    const angleInfo: AngleInfo;

    circularIndexUtil: CircularIndexUtil;

protected constructor (AngleInfo angleInfo, CircularIndexUtil circularIndexUtil, AnimationBehavior animationBehavior){
            super(animationBehavior);
                    

                            //For kotlin this is before the body of the constructor.
                    
this.angleInfo= angleInfo;
    
this.circularIndexUtil= circularIndexUtil;
    
}


    public nextRotationX(){
}


    public previousRotationX(){
}


    public nextRotation(){
this.angleInfo!.adjustAngle(this.circularIndexUtil!.next());
    
}


    public previousRotation(){
this.angleInfo!.adjustAngle(this.circularIndexUtil!.previous());
    
}


    public nextRotationZ(){
}


    public previousRotationZ(){
}


    public setFrame(int32_t index){
this.circularIndexUtil!.setIndex(index);
    

    newFrame: int32_t = this.circularIndexUtil!.getIndex()!;;
    
this.angleInfo!.adjustAngle(newFrame);
    
}


    public setFrameByDirection(Direction direction){

    angle: Angle = this.directionUtil!.getFrameAngle(direction)!;;
    
this.adjustFrameToAngle(angle);
    
}


    public setFrameToAngle(Angle angle){
this.adjustFrameToAngle(angle);
    
}


    public adjustFrameToAngle(Angle angle){
this.adjustFrame(angle.getValue());
    
}


    public adjustFrame(int16_t angle){
this.setFrame(this.frameUtil!.getFrameForAngle(angle, static_cast<int32_t>(this.angleInfo!.getAngleIncrementInfo()!.getAngleIncrement())));
    
}


    public int32_t getFrame(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.circularIndexUtil!.getIndex();;
    
}


    public int32_t getSize(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.circularIndexUtil!.getSize();;
    
}


    public AngleInfo getAngleInfoP(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.angleInfo;
    
}


    public string toString(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new StringMaker().append(super.toString())!.append("circularIndexUtil: ")!.append(this.circularIndexUtil!.toString())!.append("angleInfo: ")!.append(this.angleInfo!.toString())!.toString();;
    
}


};

            

