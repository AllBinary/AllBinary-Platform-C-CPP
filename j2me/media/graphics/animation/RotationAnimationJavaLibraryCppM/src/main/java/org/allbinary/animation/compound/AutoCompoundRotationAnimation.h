
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
        



        #ifndef ORG_ALLBINARY_ANIMATION_COMPOUND_AUTOCOMPOUNDROTATIONANIMATION_H
        #define ORG_ALLBINARY_ANIMATION_COMPOUND_AUTOCOMPOUNDROTATIONANIMATION_H

            #include "../../../../java/lang/Exception.h"
        
#include <javax/microedition/khronos/opengles/GL.h>

      
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/animation/AnimationBehavior.h>

      
#include <org/allbinary/animation/IndexedAnimation.h>

      
#include <org/allbinary/animation/RotationAnimation.h>

      
#include <org/allbinary/direction/Direction.h>

      
#include <org/allbinary/logic/math/PrimitiveIntUtil.h>

      
#include <org/allbinary/math/Angle.h>

      
#include <org/allbinary/math/AngleFactory.h>

      
#include <org/allbinary/math/AngleInfo.h>

      
#include <org/allbinary/util/CircularIndexUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "CompoundAnimationInterface.h"

class AutoCompoundRotationAnimation: public RotationAnimation: public CompoundAnimationInterface {
        

    private: animationInterfaceArray: std::vector<RotationAnimation>;

public constructor (std::vector<RotationAnimation> animationInterfaceArray, AnimationBehavior animationBehavior);

    public setFrame(int32_t index);

    public int32_t getFrame();

                //@Throws(Exception.constructor)
            
    public int32_t getAnimationSize();

    public int32_t getSize();

    public previousFrame();

                //@Throws(Exception.constructor)
            
    public nextFrame();

    public previousRotation();

    public nextRotation();

    public setSequence(std::vector<int32_t> sequence);

    public std::vector<int32_t> getSequence();

    public paintXY(Graphics graphics, int32_t x, int32_t y);

    public paintThreedXYZ(Graphics graphics, int32_t x, int32_t y, int32_t z);

    public IndexedAnimation getCurrentAnimation();

    public nextAnimation();

    public previousAnimation();

    public setAnimation(int32_t index);

    public setFrameByDirection(Direction direction);

    public setFrameToAngle(Angle angle);

    public adjustFrameToAngle(Angle newAngle);

    public adjustFrame(int16_t angle);

    public AngleInfo getAngleInfoP();

    public std::vector<RotationAnimation> getAnimationInterfaceArray();

    public setAnimationInterfaceArray(std::vector<RotationAnimation> animationInterfaceArray);

                //@Throws(Exception.constructor)
            
    public set(GL gl);

};

            


        #endif //ORG_ALLBINARY_ANIMATION_COMPOUND_AUTOCOMPOUNDROTATIONANIMATION_H
