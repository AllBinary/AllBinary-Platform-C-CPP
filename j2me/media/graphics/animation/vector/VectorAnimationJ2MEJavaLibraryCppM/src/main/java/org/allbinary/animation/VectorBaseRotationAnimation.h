
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
        



        #ifndef ORG_ALLBINARY_ANIMATION_VECTORBASEROTATIONANIMATION_H
        #define ORG_ALLBINARY_ANIMATION_VECTORBASEROTATIONANIMATION_H

            #include "../../../java/lang/Exception.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/logic/NullUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/math/PrimitiveIntUtil.h>

      
#include <org/allbinary/math/AngleInfo.h>

      
#include <org/allbinary/util/CircularIndexUtil.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "RotationAnimation.h"
#include "VectorAnimationInterface.h"
#include "AnimationBehavior.h"

class VectorBaseRotationAnimation: public RotationAnimation: public VectorAnimationInterface {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: currentPoints: std::vector<std::vector<std::vector<int32_t>>> = NullUtil.getInstance()!.NULL_INT_ARRAY_ARRAY_ARRAY;

public constructor (AngleInfo angleInfo, std::vector<std::vector<std::vector<int32_t>>> currentPoints, BasicColor basicColor, AnimationBehavior animationBehavior);

                //@Throws(Exception.constructor)
            
    public int32_t getAnimationSize();

    public int32_t getFrame();

    public setFrame(int32_t index);

    public nextFrame();

    public previousFrame();

    public int32_t getSize();

    public setSequence(std::vector<int32_t> sequence);

    public std::vector<int32_t> getSequence();

    public paintXY(Graphics graphics, int32_t x, int32_t y);

    public std::vector<std::vector<int32_t>> getPoints(int32_t frame);

    public setPoints(std::vector<std::vector<std::vector<int32_t>>> currentPoints);

};

            


        #endif //ORG_ALLBINARY_ANIMATION_VECTORBASEROTATIONANIMATION_H
