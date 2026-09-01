
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2022 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_ANIMATION_IMAGE_LAZYIMAGEROTATIONANIMATION_H
        #define ORG_ALLBINARY_ANIMATION_IMAGE_LAZYIMAGEROTATIONANIMATION_H

            #include <vector>
        
            #include "../../../../java/lang/Exception.h"
        
#include <javax/microedition/khronos/opengles/GL.h>

      
#include <javax/microedition/lcdui/Graphics.h>

      
#include <javax/microedition/lcdui/Image.h>

      
#include <org/allbinary/animation/AnimationBehavior.h>

      
#include <org/allbinary/animation/IndexedAnimation.h>

      
#include <org/allbinary/animation/NullRotationAnimationFactory.h>

      
#include <org/allbinary/animation/RotationAnimation.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/image/ImageCache.h>

      
#include <org/allbinary/image/ImageCacheFactory.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/math/AngleFactory.h>

      
#include <org/allbinary/math/AngleInfo.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/media/ScaleProperties.h>

      
#include <org/allbinary/util/CircularIndexUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "BaseImageAnimationFactory.h"

class LazyImageRotationAnimation: public RotationAnimation {

    private: static const std::string SET_REAL_ANIMATION = "setRealAnimation";

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: const CommonStrings commonStrings = CommonStrings::getInstance();

    public: int32_t layoutIndex;

    public: int32_t instanceId;

    public: BaseImageAnimationFactory animationInterfaceFactoryInterface;

    private: IndexedAnimation NULL_INDEX_ANIMATION;

    private: IndexedAnimation animation;

    public: ScaleProperties scaleProperties = ScaleProperties::instance;

public: LazyImageRotationAnimation(int32_t layoutIndex, int32_t instanceId, ScaleProperties scaleProperties, BaseImageAnimationFactory animationInterfaceFactoryInterface, AnimationBehavior animationBehavior);

    public: void setRealAnimation();

    public: void setScale(float scaleX, float scaleY);

    public: AnimationBehavior getAnimationBehavior();

                //@Throws(Exception.constructor)
            
    public: void set(GL gl);

    public: void setAlpha(int32_t alpha);

    public: void setDx(int32_t dx);

    public: void setDy(int32_t dy);

    public: void setMaxScale(float maxScaleX, float maxScaleY);

    public: void nextRotation();

    public: void previousRotation();

    public: void nextRotationX();

    public: void previousRotationX();

    public: void nextRotationZ();

    public: void previousRotationZ();

    public: void changeBasicColor(BasicColor basicColor);

    public: BasicColor getBasicColorP();

    public: BasicColor getChangeBasicColor();

    public: int32_t getChangeColor();

    public: int32_t getColor();

    public: int32_t getDx();

    public: int32_t getDy();

    public: bool isThreed();

                //@Throws(Exception.constructor)
            
    public: void nextFrame();

    public: void reset();

    public: void setFrame(int32_t index);

    public: int32_t getFrame();

                //@Throws(Exception.constructor)
            
    public: int32_t getAnimationSize();

    public: int32_t getSize();

    public: void previousFrame();

    public: bool isLastFrame();

    public: void setSequence(std::vector<int32_t> sequence);

    public: std::vector<int32_t> getSequence();

    public: int32_t getWidth();

    public: void paintXY(Graphics graphics, int32_t x, int32_t y);

    public: void paintThreedXYZ(Graphics graphics, int32_t x, int32_t y, int32_t z);

    public: std::string toString();

};

            


        #endif //ORG_ALLBINARY_ANIMATION_IMAGE_LAZYIMAGEROTATIONANIMATION_H
