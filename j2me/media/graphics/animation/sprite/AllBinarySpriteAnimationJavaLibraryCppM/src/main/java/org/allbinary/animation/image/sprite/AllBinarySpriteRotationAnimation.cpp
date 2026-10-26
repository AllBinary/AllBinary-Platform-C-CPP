
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
        



#include <javax/microedition/lcdui/Image.h>

      
#include <javax/microedition/lcdui/game/Sprite.h>

      
#include <org/allbinary/animation/AnimationBehavior.h>

      
#include <org/allbinary/direction/Direction.h>

      
#include <org/allbinary/math/Angle.h>

      
#include <org/allbinary/math/AngleFactory.h>

      
#include <org/allbinary/math/AngleInfo.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "HackRotationSpriteIndexedAnimation.h"

class AllBinarySpriteRotationAnimation: public HackRotationSpriteIndexedAnimation {

public: AllBinarySpriteRotationAnimation(Sprite sprite, Image image, AnimationBehavior animationBehavior) : HackRotationSpriteIndexedAnimation(sprite, image, AngleInfo::getInstance((AngleFactory::getInstance().TOTAL_ANGLE /sprite.getRawFrameCount())), animationBehavior){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->angleInfo.adjustAngle(this->sprite.getFrame());
    
}


    public: void nextRotation(){
this->sprite.nextFrame();
    
this->angleInfo.adjustAngle(this->sprite.getFrame());
    
}


    public: void previousRotation(){
this->sprite.prevFrame();
    
this->angleInfo.adjustAngle(this->sprite.getFrame());
    
}


    public: void setFrameByDirection(Direction direction){

    Angle angle = this->directionUtil.getFrameAngle(direction);;
    
this->adjustFrameToAngle(angle);
    
}


    public: void setFrameToAngle(Angle angle){
this->adjustFrameToAngle(angle);
    
}


    public: void setFrame(int32_t index){
this->sprite.setFrame(index);
    
this->angleInfo.adjustAngle(this->getFrame());
    
}


    public: void adjustFrameToAngle(Angle angle){
this->adjustFrame(angle.getValue());
    
}


    public: void adjustFrame(int16_t angle){
this->setFrame(this->frameUtil.getFrameForAngle(angle, static_cast<int32_t>(this->angleInfo.getAngleIncrementInfo().getAngleIncrement())));
    
}


};

            

