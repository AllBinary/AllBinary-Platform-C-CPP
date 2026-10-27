
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
class GL;
class Graphics;
class AnimationBehavior;
#include <org/allbinary/animation/IndexedAnimation.h>
class PrimitiveIntUtil;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class SimultaneousCompoundIndexAnimation: public IndexedAnimation {

    private: std::vector<IndexedAnimation*> animationInterfaceArray;

public: SimultaneousCompoundIndexAnimation(std::vector<IndexedAnimation*> animationInterfaceArray, AnimationBehavior* animationBehavior);

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

    public: void paintXY(Graphics* graphics, int32_t x, int32_t y);

    public: void paintThreedXYZ(Graphics* graphics, int32_t x, int32_t y, int32_t z);

                //@Throws(Exception.constructor)
            
    public: void set(GL* gl);

    public: std::vector<IndexedAnimation*> getAnimationInterfaceArray();

    public: void setAnimationInterfaceArray(std::vector<IndexedAnimation*> animationInterfaceArray);

};

            


        #endif //ORG_ALLBINARY_ANIMATION_COMPOUND_SIMULTANEOUSCOMPOUNDINDEXANIMATION_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_ANIMATION_COMPOUND_SIMULTANEOUSCOMPOUNDINDEXANIMATION_H_COMPLETE)
        #define ORG_ALLBINARY_ANIMATION_COMPOUND_SIMULTANEOUSCOMPOUNDINDEXANIMATION_H_COMPLETE
        #if __has_include(<javax/microedition/khronos/opengles/GL.h>)
#include <javax/microedition/khronos/opengles/GL.h>
#endif
#if __has_include(<javax/microedition/lcdui/Graphics.h>)
#include <javax/microedition/lcdui/Graphics.h>
#endif
#if __has_include(<org/allbinary/animation/AnimationBehavior.h>)
#include <org/allbinary/animation/AnimationBehavior.h>
#endif
#if __has_include(<org/allbinary/animation/IndexedAnimation.h>)
#include <org/allbinary/animation/IndexedAnimation.h>
#endif
#if __has_include(<org/allbinary/logic/math/PrimitiveIntUtil.h>)
#include <org/allbinary/logic/math/PrimitiveIntUtil.h>
#endif

        #endif
    
