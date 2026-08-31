
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
        



        #ifndef ORG_ALLBINARY_ANIMATION_VECTORANIMATION_H
        #define ORG_ALLBINARY_ANIMATION_VECTORANIMATION_H

            #include "../../../java/lang/Exception.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <javax/microedition/lcdui/Graphics.h>

      
#include <javax/microedition/lcdui/NullImage.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/logic/NullUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/math/PrimitiveIntUtil.h>

      
#include <org/allbinary/util/CircularIndexUtil.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "IndexedAnimation.h"
#include "VectorAnimationInterface.h"
#include "AnimationBehavior.h"

class VectorAnimation: public IndexedAnimation: public VectorAnimationInterface {
        

    public static VectorAnimation createVectorAnimation(std::vector<std::vector<int32_t>> currentPoints2, BasicColor basicColor, AnimationBehavior animationBehavior);

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: currentPoints: std::vector<std::vector<std::vector<int32_t>>> = NullUtil.getInstance()!.NULL_INT_ARRAY_ARRAY_ARRAY;

    private: circularIndexUtil: CircularIndexUtil = CircularIndexUtil.createInstance(0)!;

public constructor (std::vector<std::vector<std::vector<int32_t>>> currentPoints, BasicColor basicColor, AnimationBehavior animationBehavior);

    public setBasicColorP(BasicColor basicColor);

    public changeBasicColor(BasicColor basicColor);

    public setAlpha(int32_t alpha);

    public setScale(float scaleX, float scaleY);

    public setMaxScale(float maxScaleX, float maxScaleY);

    updateModifiers();

                //@Throws(Exception.constructor)
            
    public int32_t getAnimationSize();

    public int32_t getSize();

    public setSequence(std::vector<int32_t> sequence);

    public std::vector<int32_t> getSequence();

    public nextFrame();

    public previousFrame();

    paintVectors(Graphics graphics, int32_t x, int32_t y);

    public paintXY(Graphics graphics, int32_t x, int32_t y);

    public int32_t getFrame();

    public setFrame(int32_t index);

    public std::vector<std::vector<int32_t>> getPoints(int32_t frame);

    public setPoints(std::vector<std::vector<std::vector<int32_t>>> currentPoints);

};

            


        #endif //ORG_ALLBINARY_ANIMATION_VECTORANIMATION_H
