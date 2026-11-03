
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
        



        #ifndef ORG_ALLBINARY_ANIMATION_IMAGE_IMAGEARRAYANIMATION_CPP
        #define ORG_ALLBINARY_ANIMATION_IMAGE_IMAGEARRAYANIMATION_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/animation/image/ImageArrayAnimation.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Graphics.h>

      
#include <javax/microedition/lcdui/Image.h>

      
#include <javax/microedition/lcdui/NullImage.h>

      
#include <org/allbinary/animation/AnimationBehavior.h>

      
#include <org/allbinary/animation/IndexedAnimation.h>

      
#include <org/allbinary/graphics/Anchor.h>

      
#include <org/allbinary/logic/math/PrimitiveIntUtil.h>

      
#include <org/allbinary/util/CircularIndexUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

ImageArrayAnimation::ImageArrayAnimation(std::vector<Image*> imageArray, AnimationBehavior* animationBehavior) : IndexedAnimation(animationBehavior), imageArray(NullImage::NULL_IMAGE_ARRAY), circularIndexUtil(CircularIndexUtil::NULL_CIRCULAR_INDEX_UTIL), anchor(Anchor::TOP_LEFT){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->setImageArray(imageArray);
    
}


                //@Throws(Exception.constructor)
            
    auto ImageArrayAnimation::getAnimationSize() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->getSize();;
    
}


    auto ImageArrayAnimation::nextFrame() -> void{
this->circularIndexUtil->next();
    
}


    auto ImageArrayAnimation::previousFrame() -> void{
this->circularIndexUtil->previous();
    
}


    auto ImageArrayAnimation::setFrame(int32_t index) -> void{
this->circularIndexUtil->setIndex(index);
    
}


    auto ImageArrayAnimation::getFrame() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->circularIndexUtil->getIndex();;
    
}


    auto ImageArrayAnimation::getSize() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->totalFrames;
    
}


    auto ImageArrayAnimation::setSequence(std::vector<int32_t> sequence) -> void{
}


    auto ImageArrayAnimation::getSequence() -> std::vector<int32_t>{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return PrimitiveIntUtil::getArrayInstance();;
    
}


    auto ImageArrayAnimation::getImage(int32_t index) -> Image*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->imageArray[index];
    
}


    auto ImageArrayAnimation::getImageArray() -> std::vector<Image*>{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->imageArray;
    
}


    auto ImageArrayAnimation::setImageArray(std::vector<Image*> imageArray) -> void{
this->imageArray= imageArray;
    
this->totalFrames= imageArray.size();
    
this->circularIndexUtil= CircularIndexUtil::createInstance(this->totalFrames);
    
}


    auto ImageArrayAnimation::paintXY(Graphics* graphics, int32_t x, int32_t y) -> void{
graphics->drawImage(this->imageArray[this->circularIndexUtil->getIndex()], x, y, this->anchor);
    
}




        #endif //ORG_ALLBINARY_ANIMATION_IMAGE_IMAGEARRAYANIMATION_CPP
