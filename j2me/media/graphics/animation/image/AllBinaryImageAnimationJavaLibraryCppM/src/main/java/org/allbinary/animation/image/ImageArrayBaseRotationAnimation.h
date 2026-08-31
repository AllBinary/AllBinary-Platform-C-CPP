
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
        



        #ifndef ORG_ALLBINARY_ANIMATION_IMAGE_IMAGEARRAYBASEROTATIONANIMATION_H
        #define ORG_ALLBINARY_ANIMATION_IMAGE_IMAGEARRAYBASEROTATIONANIMATION_H

            #include "../../../../java/lang/Throwable.h"
        
            #include "../../../../java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Graphics.h>

      
#include <javax/microedition/lcdui/Image.h>

      
#include <javax/microedition/lcdui/NullImage.h>

      
#include <org/allbinary/DisposalUtil.h>

      
#include <org/allbinary/animation/AnimationBehavior.h>

      
#include <org/allbinary/animation/RotationAnimation.h>

      
#include <org/allbinary/graphics/Anchor.h>

      
#include <org/allbinary/logic/math/PrimitiveIntUtil.h>

      
#include <org/allbinary/math/AngleInfo.h>

      
#include <org/allbinary/media/image/ImageModifierUtil.h>

      
#include <org/allbinary/util/CircularIndexUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class ImageArrayBaseRotationAnimation: public RotationAnimation {
        

    private: const imageModifierUtil: ImageModifierUtil = ImageModifierUtil.getInstanceOrCreate()!;

    private: const originalImageArray: std::vector<Image>;

    private: imageArray: std::vector<Image> = NullImage.NULL_IMAGE_ARRAY;

    private: currentImage: Image;

    private: totalFrames: int32_t= 0;

public constructor (std::vector<Image> originalImageArray, AngleInfo angleInfo, AnimationBehavior animationBehavior);

                //@Throws(Exception.constructor)
            
    public int32_t getAnimationSize();

    public setAlpha(int32_t alpha);

    public nextRotation();

    public previousRotation();

    public setFrame(int32_t index2);

    public setSequence(std::vector<int32_t> sequence);

    public std::vector<int32_t> getSequence();

    setImageArray(std::vector<Image> imageArray);

    private: anchor: int32_t = Anchor.TOP_LEFT;

    public paintXY(Graphics graphics, int32_t x, int32_t y);

    public close();

                //@Throws(Throwable.constructor)
            
    finalize();

};

            


        #endif //ORG_ALLBINARY_ANIMATION_IMAGE_IMAGEARRAYBASEROTATIONANIMATION_H
