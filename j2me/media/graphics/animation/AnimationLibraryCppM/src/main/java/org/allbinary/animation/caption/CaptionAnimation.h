
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
        



        #ifndef ORG_ALLBINARY_ANIMATION_CAPTION_CAPTIONANIMATION_H
        #define ORG_ALLBINARY_ANIMATION_CAPTION_CAPTIONANIMATION_H

            #include "../../../../java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/animation/Animation.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class CaptionAnimation: public Animation {
        

    private: const animationInterface: Animation;

    private: const overlayAnimationInterface: Animation;

    private: const captionDx: int32_t;

    private: const captionDy: int32_t;

    private: const dx: int32_t;

    private: const dy: int32_t;

public constructor (Animation animationInterface, Animation overlayAnimationInterface, int32_t captionDx, int32_t captionDy, int32_t dx, int32_t dy);

                //@Throws(Exception.constructor)
            
    public nextFrame();

    public paintXY(Graphics graphics, int32_t x, int32_t y);

    public paintThreedXYZ(Graphics graphics, int32_t x, int32_t y, int32_t z);

};

            


        #endif //ORG_ALLBINARY_ANIMATION_CAPTION_CAPTIONANIMATION_H
