
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
        



            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Graphics.h>

      
#include <javax/microedition/lcdui/Image.h>

      
#include <javax/microedition/lcdui/game/Sprite.h>

      
#include <org/allbinary/animation/AnimationBehavior.h>

      
#include <org/allbinary/animation/RotationAnimation.h>

      
#include <org/allbinary/logic/math/PrimitiveIntUtil.h>

      
#include <org/allbinary/math/AngleInfo.h>

      
#include <org/allbinary/util/CircularIndexUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class HackRotationSpriteIndexedAnimation: public RotationAnimation {

    protected: Sprite* sprite;

    private: Image* image;

public: HackRotationSpriteIndexedAnimation(Sprite* sprite, Image* image, AngleInfo* angleInfo, AnimationBehavior* animationBehavior) : RotationAnimation(angleInfo, CircularIndexUtil::createInstance(360 /angleInfo->getAngleIncrementInfo()->getAngleIncrement()), animationBehavior){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->sprite= sprite;
    
this->image= image;
    
}


                //@Throws(Exception.constructor)
            
    public: int32_t getAnimationSize(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->getSize();;
    
}


    public: void paintFrame(Graphics* g, int32_t frame, int32_t x, int32_t y){
this->setFrame(frame);
    
this->paintXY(g, x, y);
    
}


    public: void paintXY(Graphics* g, int32_t x, int32_t y){
this->sprite->setPosition(x, y);
    
this->paint(g);
    
}


    protected: void paint(Graphics* g){
this->sprite->paint(g);
    
}


    public: void nextRotation(){
this->sprite->nextFrame();
    
}


    public: void previousRotation(){
this->sprite->prevFrame();
    
}


    public: int32_t getSize(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->sprite->getRawFrameCount();;
    
}


    public: void setFrame(int32_t frame){
this->sprite->setFrame(frame);
    
}


    public: int32_t getFrame(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->sprite->getFrame();;
    
}


    public: void setSequence(std::vector<int32_t> sequence){
}


    public: std::vector<int32_t> getSequence(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return PrimitiveIntUtil::getArrayInstance();;
    
}


};

            

