
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
        



        #ifndef ORG_ALLBINARY_ANIMATION_COMPOUND_COMPOUNDINDEXEDANIMATION_H
        #define ORG_ALLBINARY_ANIMATION_COMPOUND_COMPOUNDINDEXEDANIMATION_H

            #include <vector>
        
            #include "../../../../java/lang/Exception.h"
        
#include <javax/microedition/khronos/opengles/GL.h>

      
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/animation/Animation.h>

      
#include <org/allbinary/animation/AnimationBehavior.h>

      
#include <org/allbinary/animation/IndexedAnimation.h>

      
#include <org/allbinary/logic/math/PrimitiveIntUtil.h>

      
#include <org/allbinary/util/CircularIndexUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "CompoundAnimationInterface.h"

class CompoundIndexedAnimation: public IndexedAnimation, public CompoundAnimationInterface {

    private: CircularIndexUtil circularIndexUtil;

    private: std::vector<Animation> animationInterfaceArray;

public: CompoundIndexedAnimation(std::vector<Animation> animationInterfaceArray, AnimationBehavior animationBehavior);

    public: void setFrame(int32_t index);

    public: int32_t getFrame();

    public: int32_t getSize();

    public: void previousFrame();

    public: void setSequence(std::vector<int32_t> sequence);

    public: std::vector<int32_t> getSequence();

                //@Throws(Exception.constructor)
            
    public: void nextFrame();

    public: void paintXY(Graphics graphics, int32_t x, int32_t y);

    public: void paintThreedXYZ(Graphics graphics, int32_t x, int32_t y, int32_t z);

    public: IndexedAnimation getCurrentAnimation();

    public: void nextAnimation();

    public: void previousAnimation();

    public: void setAnimation(int32_t index);

    public: std::vector<Animation> getAnimationInterfaceArray();

    public: void setAnimationInterfaceArray(std::vector<Animation> animationInterfaceArray);

                //@Throws(Exception.constructor)
            
    public: void set(GL gl);

};

            


        #endif //ORG_ALLBINARY_ANIMATION_COMPOUND_COMPOUNDINDEXEDANIMATION_H
