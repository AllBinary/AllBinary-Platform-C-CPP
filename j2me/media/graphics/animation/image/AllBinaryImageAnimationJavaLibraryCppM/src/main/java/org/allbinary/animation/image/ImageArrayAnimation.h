
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
        



        #ifndef ORG_ALLBINARY_ANIMATION_IMAGE_IMAGEARRAYANIMATION_H
        #define ORG_ALLBINARY_ANIMATION_IMAGE_IMAGEARRAYANIMATION_H

            #include <vector>
        
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
        
class ImageArrayAnimation: public IndexedAnimation {

    private: std::vector<Image> imageArray = NullImage::NULL_IMAGE_ARRAY;

    private: int32_t totalFrames= 0;

    protected: CircularIndexUtil circularIndexUtil = CircularIndexUtil::NULL_CIRCULAR_INDEX_UTIL;

public: ImageArrayAnimation(std::vector<Image> imageArray, AnimationBehavior animationBehavior);

                //@Throws(Exception.constructor)
            
    public: int32_t getAnimationSize();

    public: void nextFrame();

    public: void previousFrame();

    public: void setFrame(int32_t index);

    public: int32_t getFrame();

    public: int32_t getSize();

    public: void setSequence(std::vector<int32_t> sequence);

    public: std::vector<int32_t> getSequence();

    public: Image getImage(int32_t index);

    public: std::vector<Image> getImageArray();

    protected: void setImageArray(std::vector<Image> imageArray);

    private: int32_t anchor = Anchor::TOP_LEFT;

    public: void paintXY(Graphics graphics, int32_t x, int32_t y);

};

            


        #endif //ORG_ALLBINARY_ANIMATION_IMAGE_IMAGEARRAYANIMATION_H
