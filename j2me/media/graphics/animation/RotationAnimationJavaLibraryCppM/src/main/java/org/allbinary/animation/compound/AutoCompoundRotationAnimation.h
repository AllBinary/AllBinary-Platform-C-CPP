
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

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
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
        #include "org/allbinary/animation/compound/CompoundAnimationInterface.h"

class AutoCompoundRotationAnimation: public RotationAnimation, public CompoundAnimationInterface {

    private: std::vector<RotationAnimation*> animationInterfaceArray;

public: AutoCompoundRotationAnimation(std::vector<RotationAnimation*> animationInterfaceArray, AnimationBehavior* animationBehavior);

    public: void setFrame(int32_t index);

    public: int32_t getFrame();

                //@Throws(Exception.constructor)
            
    public: int32_t getAnimationSize();

    public: int32_t getSize();

    public: void previousFrame();

                //@Throws(Exception.constructor)
            
    public: void nextFrame();

    public: void previousRotation();

    public: void nextRotation();

    public: void setSequence(std::vector<int32_t> sequence);

    public: std::vector<int32_t> getSequence();

    public: void paintXY(Graphics* graphics, int32_t x, int32_t y);

    public: void paintThreedXYZ(Graphics* graphics, int32_t x, int32_t y, int32_t z);

    public: IndexedAnimation* getCurrentAnimation();

    public: void nextAnimation();

    public: void previousAnimation();

    public: void setAnimation(int32_t index);

    public: void setFrameByDirection(Direction* direction);

    public: void setFrameToAngle(Angle* angle);

    public: void adjustFrameToAngle(Angle* newAngle);

    public: void adjustFrame(int16_t angle);

    public: AngleInfo* getAngleInfoP();

    public: std::vector<RotationAnimation*> getAnimationInterfaceArray();

    public: void setAnimationInterfaceArray(std::vector<RotationAnimation*> animationInterfaceArray);

                //@Throws(Exception.constructor)
            
    public: void set(GL* gl);

};

            


        #endif //ORG_ALLBINARY_ANIMATION_COMPOUND_AUTOCOMPOUNDROTATIONANIMATION_H
