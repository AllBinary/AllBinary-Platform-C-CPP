
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

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Throwable.h"
        
            #include "java/lang/Exception.h"
        
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

    private: ImageModifierUtil* imageModifierUtil = ImageModifierUtil::getInstanceOrCreate();

    private: std::vector<Image*> originalImageArray;

    private: std::vector<Image*> imageArray = NullImage::NULL_IMAGE_ARRAY;

    private: Image* currentImage;

    private: int32_t totalFrames= 0;

public: ImageArrayBaseRotationAnimation(std::vector<Image*> originalImageArray, AngleInfo* angleInfo, AnimationBehavior* animationBehavior);

                //@Throws(Exception.constructor)
            
    public: int32_t getAnimationSize();

    public: void setAlpha(int32_t alpha);

    public: void nextRotation();

    public: void previousRotation();

    public: void setFrame(int32_t index2);

    public: void setSequence(std::vector<int32_t> sequence);

    public: std::vector<int32_t> getSequence();

    protected: void setImageArray(std::vector<Image*> imageArray);

    private: int32_t anchor = Anchor::TOP_LEFT;

    public: void paintXY(Graphics* graphics, int32_t x, int32_t y);

    public: void close();

                //@Throws(Throwable.constructor)
            
    protected: void finalize();

};

            


        #endif //ORG_ALLBINARY_ANIMATION_IMAGE_IMAGEARRAYBASEROTATIONANIMATION_H
