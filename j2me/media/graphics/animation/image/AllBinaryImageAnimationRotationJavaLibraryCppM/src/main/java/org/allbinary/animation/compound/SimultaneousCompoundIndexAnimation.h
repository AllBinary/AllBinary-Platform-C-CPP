
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
        



        #ifndef ORG_ALLBINARY_ANIMATION_COMPOUND_SIMULTANEOUSCOMPOUNDINDEXANIMATION_H
        #define ORG_ALLBINARY_ANIMATION_COMPOUND_SIMULTANEOUSCOMPOUNDINDEXANIMATION_H

            #include <vector>
        
            #include "../../../../java/lang/Exception.h"
        
#include <javax/microedition/khronos/opengles/GL.h>

      
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/animation/AnimationBehavior.h>

      
#include <org/allbinary/animation/IndexedAnimation.h>

      
#include <org/allbinary/logic/math/PrimitiveIntUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class SimultaneousCompoundIndexAnimation: public IndexedAnimation {

    private: std::vector<IndexedAnimation> animationInterfaceArray;

public: SimultaneousCompoundIndexAnimation(std::vector<IndexedAnimation> animationInterfaceArray, AnimationBehavior animationBehavior);

    public: void setFrame(int32_t frameIndex);

    public: int32_t getFrame();

                //@Throws(Exception.constructor)
            
    public: int32_t getAnimationSize();

    public: int32_t getSize();

    public: void previousFrame();

                //@Throws(Exception.constructor)
            
    public: void nextFrame();

    public: void setSequence(std::vector<int32_t> sequence);

    public: std::vector<int32_t> getSequence();

    public: void paintXY(Graphics graphics, int32_t x, int32_t y);

    public: void paintThreedXYZ(Graphics graphics, int32_t x, int32_t y, int32_t z);

                //@Throws(Exception.constructor)
            
    public: void set(GL gl);

    public: std::vector<IndexedAnimation> getAnimationInterfaceArray();

    public: void setAnimationInterfaceArray(std::vector<IndexedAnimation> animationInterfaceArray);

};

            


        #endif //ORG_ALLBINARY_ANIMATION_COMPOUND_SIMULTANEOUSCOMPOUNDINDEXANIMATION_H
