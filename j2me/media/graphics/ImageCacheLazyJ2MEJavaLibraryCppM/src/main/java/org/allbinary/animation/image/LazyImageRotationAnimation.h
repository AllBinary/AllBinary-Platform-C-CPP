
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
        

    private: static const SET_REAL_ANIMATION: string = "setRealAnimation";

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: const commonStrings: CommonStrings = CommonStrings.getInstance()!;

    public const layoutIndex: int32_t;

    public const instanceId: int32_t;

    public const animationInterfaceFactoryInterface: BaseImageAnimationFactory;

    private: const NULL_INDEX_ANIMATION: IndexedAnimation;

    private: animation: IndexedAnimation;

    public scaleProperties: ScaleProperties = ScaleProperties.instance;

public constructor (int32_t layoutIndex, int32_t instanceId, ScaleProperties scaleProperties, BaseImageAnimationFactory animationInterfaceFactoryInterface, AnimationBehavior animationBehavior);

    public setRealAnimation();

    public setScale(float scaleX, float scaleY);

    public AnimationBehavior getAnimationBehavior();

                //@Throws(Exception.constructor)
            
    public set(GL gl);

    public setAlpha(int32_t alpha);

    public setDx(int32_t dx);

    public setDy(int32_t dy);

    public setMaxScale(float maxScaleX, float maxScaleY);

    public nextRotation();

    public previousRotation();

    public nextRotationX();

    public previousRotationX();

    public nextRotationZ();

    public previousRotationZ();

    public changeBasicColor(BasicColor basicColor);

    public BasicColor getBasicColorP();

    public BasicColor getChangeBasicColor();

    public int32_t getChangeColor();

    public int32_t getColor();

    public int32_t getDx();

    public int32_t getDy();

    public bool isThreed();

                //@Throws(Exception.constructor)
            
    public nextFrame();

    public reset();

    public setFrame(int32_t index);

    public int32_t getFrame();

                //@Throws(Exception.constructor)
            
    public int32_t getAnimationSize();

    public int32_t getSize();

    public previousFrame();

    public bool isLastFrame();

    public setSequence(std::vector<int32_t> sequence);

    public std::vector<int32_t> getSequence();

    public int32_t getWidth();

    public paintXY(Graphics graphics, int32_t x, int32_t y);

    public paintThreedXYZ(Graphics graphics, int32_t x, int32_t y, int32_t z);

    public string toString();

};

            


        #endif //ORG_ALLBINARY_ANIMATION_IMAGE_LAZYIMAGEROTATIONANIMATION_H
