
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
        



        #ifndef ORG_ALLBINARY_ANIMATION_IMAGE_ADJUSTEDIMAGEARRAYANIMATION_H
        #define ORG_ALLBINARY_ANIMATION_IMAGE_ADJUSTEDIMAGEARRAYANIMATION_H

            #include "../../../../java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Graphics.h>

      
#include <javax/microedition/lcdui/Image.h>

      
#include <org/allbinary/animation/AnimationBehavior.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ImageArrayAnimation.h"

class AdjustedImageArrayAnimation: public ImageArrayAnimation {
        

    private: dx: int32_t= 0;

    private: dy: int32_t= 0;

public constructor (std::vector<Image> imageArray, int32_t dx, int32_t dy, AnimationBehavior animationBehavior);

                //@Throws(Exception.constructor)
            
    public init(int32_t dx, int32_t dy);

    public paintXY(Graphics graphics, int32_t x, int32_t y);

    public setDx(int32_t dx);

    public int32_t getDx();

    public setDy(int32_t dy);

    public int32_t getDy();

};

            


        #endif //ORG_ALLBINARY_ANIMATION_IMAGE_ADJUSTEDIMAGEARRAYANIMATION_H
