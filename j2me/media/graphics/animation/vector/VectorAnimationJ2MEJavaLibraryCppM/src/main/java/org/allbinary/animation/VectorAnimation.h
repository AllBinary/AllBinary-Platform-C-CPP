
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

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Graphics.h>

      
#include <javax/microedition/lcdui/NullImage.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/logic/NullUtil.h>

      
#include <org/allbinary/logic/math/PrimitiveIntUtil.h>

      
#include <org/allbinary/util/CircularIndexUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/animation/IndexedAnimation.h"
#include "org/allbinary/animation/VectorAnimationInterface.h"
#include "org/allbinary/animation/AnimationBehavior.h"

class VectorAnimation: public IndexedAnimation, public VectorAnimationInterface {

    public: static VectorAnimation* createVectorAnimation(std::vector<std::vector<int32_t>> currentPoints2, BasicColor* basicColor, AnimationBehavior* animationBehavior);

    private: std::vector<std::vector<std::vector<int32_t>>> currentPoints = NullUtil::getInstance()->NULL_INT_ARRAY_ARRAY_ARRAY;

    private: CircularIndexUtil* circularIndexUtil = CircularIndexUtil::createInstance(0);

public: VectorAnimation(std::vector<std::vector<std::vector<int32_t>>> currentPoints, BasicColor* basicColor, AnimationBehavior* animationBehavior);

    public: void setBasicColorP(BasicColor* basicColor);

    public: void changeBasicColor(BasicColor* basicColor);

    public: void setAlpha(int32_t alpha);

    public: void setScale(float scaleX, float scaleY);

    public: void setMaxScale(float maxScaleX, float maxScaleY);

    private: void updateModifiers();

                //@Throws(Exception.constructor)
            
    public: int32_t getAnimationSize();

    public: int32_t getSize();

    public: void setSequence(std::vector<int32_t> sequence);

    public: std::vector<int32_t> getSequence();

    public: void nextFrame();

    public: void previousFrame();

    protected: void paintVectors(Graphics* graphics, int32_t x, int32_t y);

    public: void paintXY(Graphics* graphics, int32_t x, int32_t y);

    public: int32_t getFrame();

    public: void setFrame(int32_t index);

    public: std::vector<std::vector<int32_t>> getPoints(int32_t frame);

    public: void setPoints(std::vector<std::vector<std::vector<int32_t>>> currentPoints);

};

            


        #endif //ORG_ALLBINARY_ANIMATION_VECTORANIMATION_H
