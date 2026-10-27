
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
        



        #ifndef ORG_ALLBINARY_ANIMATION_CAPTION_CAPTIONANIMATION_CPP
        #define ORG_ALLBINARY_ANIMATION_CAPTION_CAPTIONANIMATION_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/animation/caption/CaptionAnimation.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/animation/Animation.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

CaptionAnimation::CaptionAnimation(Animation* animationInterface, Animation* overlayAnimationInterface, int32_t captionDx, int32_t captionDy, int32_t dx, int32_t dy){
this->animationInterface= animationInterface;
    
this->overlayAnimationInterface= overlayAnimationInterface;
    
this->captionDx= captionDx;
    
this->captionDy= captionDy;
    
this->dx= dx;
    
this->dy= dy;
    
}


                //@Throws(Exception.constructor)
            
    auto CaptionAnimation::nextFrame() -> void{
}


    auto CaptionAnimation::paintXY(Graphics* graphics, int32_t x, int32_t y) -> void{
this->animationInterface->paintXY(graphics, x +this->captionDx, y +this->captionDy);
    
this->overlayAnimationInterface->paintXY(graphics, x +this->captionDx +this->dx, y +this->captionDy +this->dy);
    
}


    auto CaptionAnimation::paintThreedXYZ(Graphics* graphics, int32_t x, int32_t y, int32_t z) -> void{
this->animationInterface->paintThreedXYZ(graphics, x +this->captionDx, y +this->captionDy, z);
    
this->overlayAnimationInterface->paintThreedXYZ(graphics, x +this->captionDx +this->dx, y +this->captionDy +this->dy, z);
    
}




        #endif //ORG_ALLBINARY_ANIMATION_CAPTION_CAPTIONANIMATION_CPP
