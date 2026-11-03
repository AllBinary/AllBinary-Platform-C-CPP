
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
        



        #ifndef ORG_ALLBINARY_ANIMATION_IMAGE_SPRITE_SPRITEINDEXEDANIMATION_CPP
        #define ORG_ALLBINARY_ANIMATION_IMAGE_SPRITE_SPRITEINDEXEDANIMATION_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/animation/image/sprite/SpriteIndexedAnimation.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Throwable.h"
        
            #include "java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Graphics.h>

      
#include <javax/microedition/lcdui/Image.h>

      
#include <javax/microedition/lcdui/game/Sprite.h>

      
#include <org/allbinary/animation/AnimationBehavior.h>

      
#include <org/allbinary/animation/IndexedAnimation.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/graphics/color/BasicColorFactory.h>

      
#include <org/allbinary/graphics/color/ColorCompositeInterface.h>

      
#include <org/allbinary/logic/math/PrimitiveIntUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonLabels.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

SpriteIndexedAnimation::SpriteIndexedAnimation(Sprite* sprite, Image* image, std::vector<BasicColor*> basicColorArray, AnimationBehavior* animationBehavior) : IndexedAnimation(animationBehavior){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->sprite= sprite;
    
this->image= image;
    
this->basicColorArray= basicColorArray;
    

                        if(this->basicColorArray.size() != 0 && this->getSize() != this->basicColorArray.size())
                        
                                    {
                                    


                            throw Exception((new StringMaker())->append(CommonLabels::getInstance()->TOTAL_LABEL)->appendint(this->getSize())->append("!=")->appendint(this->basicColorArray.size())->toString());
                    

                                    }
                                
}


                //@Throws(Exception.constructor)
            
    auto SpriteIndexedAnimation::getAnimationSize() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->getSize();;
    
}


    auto SpriteIndexedAnimation::setBasicColorP(BasicColor* basicColor) -> void{




                        for (
    int32_t index = 0;index < this->basicColorArray.size(); index++)
        {

                        if(basicColor == this->basicColorArray[index])
                        
                                    {
                                    this->setFrame(index);
    
break;

                    

                                    }
                                
}

}


    auto SpriteIndexedAnimation::getBasicColorP() -> BasicColor*{

                        if(this->basicColorArray.size() < this->getFrame())
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->basicColorArray[this->getFrame()];
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return BasicColorFactory::getInstance()->WHITE;
    

                        }
                            
}


    auto SpriteIndexedAnimation::paintFrame(Graphics* graphics, int32_t frame, int32_t x, int32_t y) -> void{
this->setFrame(frame);
    
this->sprite->setPosition(x, y);
    
this->sprite->paint(graphics);
    
}


    auto SpriteIndexedAnimation::paintXY(Graphics* graphics, int32_t x, int32_t y) -> void{
this->sprite->setPosition(x, y);
    
this->sprite->paint(graphics);
    
}


    auto SpriteIndexedAnimation::paint(Graphics* graphics) -> void{
this->sprite->paint(graphics);
    
}


    auto SpriteIndexedAnimation::nextFrame() -> void{
this->sprite->nextFrame();
    
}


    auto SpriteIndexedAnimation::previousFrame() -> void{
this->sprite->prevFrame();
    
}


    auto SpriteIndexedAnimation::getSize() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->sprite->getRawFrameCount();;
    
}


    auto SpriteIndexedAnimation::setFrame(int32_t frame) -> void{
this->sprite->setFrame(frame);
    
}


    auto SpriteIndexedAnimation::getFrame() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->sprite->getFrame();;
    
}


    auto SpriteIndexedAnimation::isLastFrame() -> bool{

                        if(this->sprite->getFrame() == this->getSize() -1)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return true;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return false;
    

                        }
                            
}


    auto SpriteIndexedAnimation::getLastFrame() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->getSize();;
    
}


    auto SpriteIndexedAnimation::setSequence(std::vector<int32_t> sequence) -> void{
}


    auto SpriteIndexedAnimation::getSequence() -> std::vector<int32_t>{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return PrimitiveIntUtil::getArrayInstance();;
    
}


    auto SpriteIndexedAnimation::close() -> void{
}


                //@Throws(Throwable.constructor)
            
    auto SpriteIndexedAnimation::finalize() -> void{
}




        #endif //ORG_ALLBINARY_ANIMATION_IMAGE_SPRITE_SPRITEINDEXEDANIMATION_CPP
