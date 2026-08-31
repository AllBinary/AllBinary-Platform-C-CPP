
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

      
#include <javax/microedition/lcdui/Image.h>

      
#include <javax/microedition/lcdui/game/Sprite.h>

      
#include <org/allbinary/animation/AnimationBehavior.h>

      
#include <org/allbinary/direction/Direction.h>

      
#include <org/allbinary/math/Angle.h>

      
#include <org/allbinary/math/AngleFactory.h>

      
#include <org/allbinary/math/AngleInfo.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "HackRotationSpriteIndexedAnimation.h"

class AllBinarySpriteRotationAnimation: public HackRotationSpriteIndexedAnimation {
        

public constructor (Sprite sprite, Image image, AnimationBehavior animationBehavior){
            super(sprite, image, AngleInfo.getInstance((AngleFactory.getInstance()!.TOTAL_ANGLE /sprite.getRawFrameCount())), animationBehavior);
                    

                            //For kotlin this is before the body of the constructor.
                    
this.angleInfo!.adjustAngle(this.sprite.getFrame());
    
}


    public nextRotation(){
this.sprite.nextFrame();
    
this.angleInfo!.adjustAngle(this.sprite.getFrame());
    
}


    public previousRotation(){
this.sprite.prevFrame();
    
this.angleInfo!.adjustAngle(this.sprite.getFrame());
    
}


    public setFrameByDirection(Direction direction){

    angle: Angle = this.directionUtil!.getFrameAngle(direction)!;;
    
this.adjustFrameToAngle(angle);
    
}


    public setFrameToAngle(Angle angle){
this.adjustFrameToAngle(angle);
    
}


    public setFrame(int32_t index){
this.sprite.setFrame(index);
    
this.angleInfo!.adjustAngle(this.getFrame());
    
}


    public adjustFrameToAngle(Angle angle){
this.adjustFrame(angle.getValue());
    
}


    public adjustFrame(int16_t angle){
this.setFrame(this.frameUtil!.getFrameForAngle(angle, static_cast<int32_t>(this.angleInfo!.getAngleIncrementInfo()!.getAngleIncrement())));
    
}


};

            

