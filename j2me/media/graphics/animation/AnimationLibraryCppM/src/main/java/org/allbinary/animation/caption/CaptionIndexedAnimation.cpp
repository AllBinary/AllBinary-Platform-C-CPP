
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
        



        #ifndef ORG_ALLBINARY_ANIMATION_CAPTION_CAPTIONINDEXEDANIMATION_CPP
        #define ORG_ALLBINARY_ANIMATION_CAPTION_CAPTIONINDEXEDANIMATION_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/animation/caption/CaptionIndexedAnimation.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Graphics.h>

      
#include <javax/microedition/media/Player.h>

      
#include <org/allbinary/animation/Animation.h>

      
#include <org/allbinary/animation/AnimationBehavior.h>

      
#include <org/allbinary/animation/AnimationEventHandler.h>

      
#include <org/allbinary/animation/IndexedAnimation.h>

      
#include <org/allbinary/logic/math/PrimitiveIntUtil.h>

      
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>

      
#include <org/allbinary/time/GameTickTimeDelayHelperFactory.h>

      
#include <org/allbinary/time/TimeDelayHelper.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

CaptionIndexedAnimation::CaptionIndexedAnimation(Animation* animationInterface, IndexedAnimation* movieIndexedAnimationInterface, Player* player, int32_t captionDx, int32_t captionDy, int32_t dx, int32_t dy, int32_t time, AnimationBehavior* animationBehavior) : IndexedAnimation(animationBehavior){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->animationInterface= animationInterface;
    
this->movieIndexedAnimationInterface= movieIndexedAnimationInterface;
    
this->captionDx= captionDx;
    
this->captionDy= captionDy;
    
this->dx= dx;
    
this->dy= dy;
    
this->time= time;
    
this->END_EVENT= new AllBinaryEventObject(this);
    

    int32_t timePerFrame = this->time /this->getSize();;
    
this->timeDelayHelper= new TimeDelayHelper(timePerFrame);
    
this->player= player;
    
this->player->start();
    
}


                //@Throws(Exception.constructor)
            
    auto CaptionIndexedAnimation::nextFrame() -> void{

                        if(this->timeDelayHelper->isTime(GameTickTimeDelayHelperFactory::getInstance()->startTime))
                        
                                    {
                                    this->movieIndexedAnimationInterface->nextFrame();
    

                                    }
                                

                        if(this->isLastFrame())
                        
                                    {
                                    AnimationEventHandler::getInstance()->fireEvent(this->END_EVENT);
    

                                    }
                                
}


    auto CaptionIndexedAnimation::isLastFrame() -> bool{

                        if(this->movieIndexedAnimationInterface->getFrame() == this->getSize() -1)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return true;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return false;
    

                        }
                            
}


    auto CaptionIndexedAnimation::previousFrame() -> void{
this->movieIndexedAnimationInterface->previousFrame();
    
}


    auto CaptionIndexedAnimation::setFrame(int32_t index) -> void{
this->movieIndexedAnimationInterface->setFrame(index);
    
}


    auto CaptionIndexedAnimation::getFrame() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->movieIndexedAnimationInterface->getFrame();;
    
}


    auto CaptionIndexedAnimation::getSize() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->movieIndexedAnimationInterface->getSize();;
    
}


    auto CaptionIndexedAnimation::setSequence(std::vector<int32_t> sequence) -> void{
}


    auto CaptionIndexedAnimation::getSequence() -> std::vector<int32_t>{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return PrimitiveIntUtil::getArrayInstance();;
    
}


    auto CaptionIndexedAnimation::paintXY(Graphics* graphics, int32_t x, int32_t y) -> void{
this->animationInterface->paintXY(graphics, x +this->captionDx, y +this->captionDy);
    
this->movieIndexedAnimationInterface->paintXY(graphics, x +this->captionDx +this->dx, y +this->captionDy +this->dy);
    
}


    auto CaptionIndexedAnimation::paintThreedXYZ(Graphics* graphics, int32_t x, int32_t y, int32_t z) -> void{
this->animationInterface->paintThreedXYZ(graphics, x +this->captionDx, y +this->captionDy, z);
    
this->movieIndexedAnimationInterface->paintThreedXYZ(graphics, x +this->captionDx +this->dx, y +this->captionDy +this->dy, z);
    
}




        #endif //ORG_ALLBINARY_ANIMATION_CAPTION_CAPTIONINDEXEDANIMATION_CPP
