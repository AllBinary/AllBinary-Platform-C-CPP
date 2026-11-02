
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
        



        #ifndef ORG_ALLBINARY_ANIMATION_IMAGE_ADJUSTEDIMAGEARRAYROTATIONANIMATION_H
        #define ORG_ALLBINARY_ANIMATION_IMAGE_ADJUSTEDIMAGEARRAYROTATIONANIMATION_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class Graphics;
class Image;
class AnimationBehavior;
class AngleInfo;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/animation/image/ImageArrayRotationAnimation.h"
class ImageArrayRotationAnimationInfo;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        //TWB - Adjustments should be done in the resource creation and not at the animation level
class AdjustedImageArrayRotationAnimation: public ImageArrayRotationAnimation {

                //@Throws(Exception.constructor)
            
    public: static AdjustedImageArrayRotationAnimation* createAdjustedImageArrayRotationAnimationInfo(Object* anyType, AnimationBehavior* animationBehavior);
    public: static AdjustedImageArrayRotationAnimation* createAdjustedImageArrayRotationAnimationInfo(const std::string& anyType, AnimationBehavior* animationBehavior) { return createAdjustedImageArrayRotationAnimationInfo(JavaString::box(anyType), animationBehavior); }
    public: template<typename BoxValue, typename std::enable_if<std::is_arithmetic<BoxValue>::value, int>::type = 0> static AdjustedImageArrayRotationAnimation* createAdjustedImageArrayRotationAnimationInfo(BoxValue anyType, AnimationBehavior* animationBehavior) { return createAdjustedImageArrayRotationAnimationInfo(JavaBoxes::toObject(anyType), animationBehavior); }

                //@Throws(Exception.constructor)
            
    public: static AdjustedImageArrayRotationAnimation* createAnimation(std::vector<Image*> imageArray, AngleInfo* angleInfo, int32_t totalAngle, AnimationBehavior* animationBehavior);

    private: int32_t dx= 0;

    private: int32_t dy= 0;

public: AdjustedImageArrayRotationAnimation(std::vector<Image*> imageArray, AngleInfo* angleInfo, int32_t totalAngle, int32_t dx, int32_t dy, AnimationBehavior* animationBehavior);

                //@Throws(Exception.constructor)
            
    public: void init(int32_t dx, int32_t dy);

    public: void paintXY(Graphics* graphics, int32_t x, int32_t y);

    public: void setDx(int32_t dx);

    public: int32_t getDx();

    public: void setDy(int32_t dy);

    public: int32_t getDy();

};

            


        #endif //ORG_ALLBINARY_ANIMATION_IMAGE_ADJUSTEDIMAGEARRAYROTATIONANIMATION_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_ANIMATION_IMAGE_ADJUSTEDIMAGEARRAYROTATIONANIMATION_H_COMPLETE)
        #define ORG_ALLBINARY_ANIMATION_IMAGE_ADJUSTEDIMAGEARRAYROTATIONANIMATION_H_COMPLETE
        #if __has_include(<javax/microedition/lcdui/Graphics.h>)
#include <javax/microedition/lcdui/Graphics.h>
#endif
#if __has_include(<javax/microedition/lcdui/Image.h>)
#include <javax/microedition/lcdui/Image.h>
#endif
#if __has_include(<org/allbinary/animation/AnimationBehavior.h>)
#include <org/allbinary/animation/AnimationBehavior.h>
#endif
#if __has_include(<org/allbinary/math/AngleInfo.h>)
#include <org/allbinary/math/AngleInfo.h>
#endif
#if __has_include("org/allbinary/animation/image/ImageArrayRotationAnimation.h")
#include "org/allbinary/animation/image/ImageArrayRotationAnimation.h"
#endif
#if __has_include("org/allbinary/animation/image/ImageArrayRotationAnimationInfo.h")
#include "org/allbinary/animation/image/ImageArrayRotationAnimationInfo.h"
#endif

        #endif
    
