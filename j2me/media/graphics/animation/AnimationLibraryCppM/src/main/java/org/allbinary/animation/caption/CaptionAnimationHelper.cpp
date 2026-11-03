
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
        



        #ifndef ORG_ALLBINARY_ANIMATION_CAPTION_CAPTIONANIMATIONHELPER_CPP
        #define ORG_ALLBINARY_ANIMATION_CAPTION_CAPTIONANIMATIONHELPER_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/animation/caption/CaptionAnimationHelper.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/animation/Animation.h>

      
#include <org/allbinary/animation/AnimationBehavior.h>

      
#include <org/allbinary/animation/NullAnimationFactory.h>

      
#include <org/allbinary/animation/text/TextAnimation.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/time/GameTickTimeDelayHelperFactory.h>

      
#include <org/allbinary/time/TimeDelayHelper.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/animation/caption/CaptionAnimationHelperBase.h"
#include "org/allbinary/animation/caption/CaptionAnimation.h"


CaptionAnimationHelper::CaptionAnimationHelper(Animation* captionAnimation, int32_t captionDx, int32_t captionDy, int32_t dx, int32_t dy) : timeHelper(new TimeDelayHelper(620)), textAnimation(new TextAnimation(StringUtil::getInstance()->EMPTY_STRING, AnimationBehavior::getInstance())), animation(NullAnimationFactory::getFactoryInstance()->getInstance(0)){
this->captionAnimation= new CaptionAnimation(captionAnimation, this->textAnimation, captionDx, captionDy, dx, dy);
    
}


    auto CaptionAnimationHelper::isShowing() -> bool{

                        if(this->animation == this->captionAnimation)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return true;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return false;
    

                        }
                            
}


    auto CaptionAnimationHelper::tick() -> void{

                        if(this->timeHelper->isTime(GameTickTimeDelayHelperFactory::getInstance()->startTime))
                        
                                    {
                                    this->animation= NullAnimationFactory::getFactoryInstance()->getInstance(0);
    

                                    }
                                
}


    auto CaptionAnimationHelper::update(std::string message, BasicColor* basicColor) -> void{
this->textAnimation->setBasicColorP(basicColor);
    
this->textAnimation->setText(message);
    
this->animation= this->captionAnimation;
    
this->timeHelper->setStartTimeTNT();
    
}


    auto CaptionAnimationHelper::paintXY(Graphics* graphics, int32_t x, int32_t y) -> void{
this->animation->paintXY(graphics, x, y);
    
}




        #endif //ORG_ALLBINARY_ANIMATION_CAPTION_CAPTIONANIMATIONHELPER_CPP
