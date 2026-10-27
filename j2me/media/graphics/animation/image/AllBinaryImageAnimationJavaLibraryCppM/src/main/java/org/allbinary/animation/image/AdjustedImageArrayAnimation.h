
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
        



        #ifndef ORG_ALLBINARY_ANIMATION_IMAGE_ADJUSTEDIMAGEARRAYANIMATION_H
        #define ORG_ALLBINARY_ANIMATION_IMAGE_ADJUSTEDIMAGEARRAYANIMATION_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
class Graphics;
class Image;
class AnimationBehavior;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/animation/image/ImageArrayAnimation.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class AdjustedImageArrayAnimation: public ImageArrayAnimation {

    private: int32_t dx= 0;

    private: int32_t dy= 0;

public: AdjustedImageArrayAnimation(std::vector<Image*> imageArray, int32_t dx, int32_t dy, AnimationBehavior* animationBehavior);

                //@Throws(Exception.constructor)
            
    public: void init(int32_t dx, int32_t dy);

    public: void paintXY(Graphics* graphics, int32_t x, int32_t y);

    public: void setDx(int32_t dx);

    public: int32_t getDx();

    public: void setDy(int32_t dy);

    public: int32_t getDy();

};

            


        #endif //ORG_ALLBINARY_ANIMATION_IMAGE_ADJUSTEDIMAGEARRAYANIMATION_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_ANIMATION_IMAGE_ADJUSTEDIMAGEARRAYANIMATION_H_COMPLETE)
        #define ORG_ALLBINARY_ANIMATION_IMAGE_ADJUSTEDIMAGEARRAYANIMATION_H_COMPLETE
        #if __has_include(<javax/microedition/lcdui/Graphics.h>)
#include <javax/microedition/lcdui/Graphics.h>
#endif
#if __has_include(<javax/microedition/lcdui/Image.h>)
#include <javax/microedition/lcdui/Image.h>
#endif
#if __has_include(<org/allbinary/animation/AnimationBehavior.h>)
#include <org/allbinary/animation/AnimationBehavior.h>
#endif
#if __has_include("org/allbinary/animation/image/ImageArrayAnimation.h")
#include "org/allbinary/animation/image/ImageArrayAnimation.h"
#endif

        #endif
    
