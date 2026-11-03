
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
        



        #ifndef ORG_ALLBINARY_ANIMATION_IMAGE_IMAGEARRAYROTATIONANIMATION_H
        #define ORG_ALLBINARY_ANIMATION_IMAGE_IMAGEARRAYROTATIONANIMATION_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class Image;
class AnimationBehavior;
class AngleInfo;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/animation/image/ImageArrayBaseRotationAnimation.h"
class ImageArrayRotationAnimationInfo;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class ImageArrayRotationAnimation: public ImageArrayBaseRotationAnimation {

                //@Throws(Exception.constructor)
            
    /*protected*/ public: static ImageArrayRotationAnimation* createAnimation(Object* anyType, AnimationBehavior* animationBehavior);
    /*protected*/ public: static ImageArrayRotationAnimation* createAnimation(const std::string& anyType, AnimationBehavior* animationBehavior) { return createAnimation(JavaString::box(anyType), animationBehavior); }
    /*protected*/ public: template<typename BoxValue, typename std::enable_if<std::is_arithmetic<BoxValue>::value, int>::type = 0> static ImageArrayRotationAnimation* createAnimation(BoxValue anyType, AnimationBehavior* animationBehavior) { return createAnimation(JavaBoxes::toObject(anyType), animationBehavior); }
    /*protected*/ public: template<typename BoxElement> static ImageArrayRotationAnimation* createAnimation(const std::vector<BoxElement>& anyType, AnimationBehavior* animationBehavior) { return createAnimation(JavaBoxes::toObject(anyType), animationBehavior); }

    private: int32_t expectedTotalFrames= 0;

public: ImageArrayRotationAnimation(std::vector<Image*> imageArray, AngleInfo* angleInfo, int32_t totalAngle, AnimationBehavior* animationBehavior);

                //@Throws(Exception.constructor)
            
    private: void init(std::vector<Image*> imageArray, AngleInfo* angleInfo, int32_t totalAngle);

    public: void setImageArray(std::vector<Image*> imageArray);

};

            


        #endif //ORG_ALLBINARY_ANIMATION_IMAGE_IMAGEARRAYROTATIONANIMATION_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_ANIMATION_IMAGE_IMAGEARRAYROTATIONANIMATION_H_COMPLETE)
        #define ORG_ALLBINARY_ANIMATION_IMAGE_IMAGEARRAYROTATIONANIMATION_H_COMPLETE
        #if __has_include(<javax/microedition/lcdui/Image.h>)
#include <javax/microedition/lcdui/Image.h>
#endif
#if __has_include(<org/allbinary/animation/AnimationBehavior.h>)
#include <org/allbinary/animation/AnimationBehavior.h>
#endif
#if __has_include(<org/allbinary/math/AngleInfo.h>)
#include <org/allbinary/math/AngleInfo.h>
#endif
#if __has_include("org/allbinary/animation/image/ImageArrayBaseRotationAnimation.h")
#include "org/allbinary/animation/image/ImageArrayBaseRotationAnimation.h"
#endif
#if __has_include("org/allbinary/animation/image/ImageArrayRotationAnimationInfo.h")
#include "org/allbinary/animation/image/ImageArrayRotationAnimationInfo.h"
#endif

        #endif
    
