
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
        



        #ifndef ORG_ALLBINARY_ANIMATION_IMAGE_IMAGEARRAYSPECIALANIMATION_CPP
        #define ORG_ALLBINARY_ANIMATION_IMAGE_IMAGEARRAYSPECIALANIMATION_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/animation/image/ImageArraySpecialAnimation.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Graphics.h>

      
#include <javax/microedition/lcdui/Image.h>

      
#include <org/allbinary/animation/AnimationBehavior.h>

      
#include <org/allbinary/animation/special/SpecialAnimationInterface.h>

      
#include <org/allbinary/graphics/displayable/DisplayInfoSingleton.h>

      
#include <org/allbinary/time/GameTickTimeDelayHelperFactory.h>

      
#include <org/allbinary/time/TimeDelayHelper.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/animation/image/ImageArrayAnimation.h"


ImageArraySpecialAnimation::ImageArraySpecialAnimation(std::vector<Image*> imageArray, AnimationBehavior* animationBehavior) : ImageArrayAnimation(imageArray, animationBehavior), timeDelayHelper(new TimeDelayHelper(270)){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->reset();
    
}


    auto ImageArraySpecialAnimation::getLoopCount() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->loopCount;
    
}


    auto ImageArraySpecialAnimation::setLastFrame() -> void{
this->circularIndexUtil->setIndex(this->circularIndexUtil->getSize() -1);
    
}


    auto ImageArraySpecialAnimation::reset() -> void{
this->setFrame(this->getSize() -1);
    
this->loopCount= 0;
    
}


    auto ImageArraySpecialAnimation::nextFrame() -> void{

                        if(this->getFrame() > 0)
                        
                                    {
                                    
                        if(this->timeDelayHelper->isTime(GameTickTimeDelayHelperFactory::getInstance()->startTime))
                        
                                    {
                                    this->previousFrame();
    

                        if(this->getFrame() == 0)
                        
                                    {
                                    this->loopCount++;
    

                                    }
                                

                                    }
                                

                                    }
                                
}


    auto ImageArraySpecialAnimation::isComplete() -> bool{

                        if(this->loopCount < this->loopCountTotal || this->getFrame() != 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                        }
                            
}


    auto ImageArraySpecialAnimation::paintXY(Graphics* graphics, int32_t x, int32_t y) -> void{
x= DisplayInfoSingleton::getInstance()->getLastHalfWidth() -(this->getImage(this->circularIndexUtil->getIndex())->getWidth()>>1);
    
y= 5;
    
ImageArrayAnimation::paintXY(graphics, x, y);
    
}




        #endif //ORG_ALLBINARY_ANIMATION_IMAGE_IMAGEARRAYSPECIALANIMATION_CPP
