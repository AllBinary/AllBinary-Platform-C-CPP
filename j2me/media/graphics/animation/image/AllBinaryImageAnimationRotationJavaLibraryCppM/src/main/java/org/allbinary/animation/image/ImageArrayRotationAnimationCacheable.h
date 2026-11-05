
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
        



        #ifndef ORG_ALLBINARY_ANIMATION_IMAGE_IMAGEARRAYROTATIONANIMATIONCACHEABLE_H
        #define ORG_ALLBINARY_ANIMATION_IMAGE_IMAGEARRAYROTATIONANIMATIONCACHEABLE_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class AnimationBehavior;
class NullUtil;
class StringUtil;
#include <org/allbinary/logic/util/cache/CacheableInterface.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/animation/image/AdjustedImageArrayRotationAnimation.h"
class ImageArrayRotationAnimationInfo;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class ImageArrayRotationAnimationCacheable: public AdjustedImageArrayRotationAnimation, public virtual CacheableInterface {

public: ImageArrayRotationAnimationCacheable(Object* anyType, AnimationBehavior* animationBehavior);
public: ImageArrayRotationAnimationCacheable(const std::string& anyType, AnimationBehavior* animationBehavior) : ImageArrayRotationAnimationCacheable(JavaString::box(anyType), animationBehavior) { }
public: template<typename BoxValue, typename std::enable_if<std::is_arithmetic<BoxValue>::value, int>::type = 0> ImageArrayRotationAnimationCacheable(BoxValue anyType, AnimationBehavior* animationBehavior) : ImageArrayRotationAnimationCacheable(JavaBoxes::toObject(anyType), animationBehavior) { }
public: template<typename BoxElement> ImageArrayRotationAnimationCacheable(const std::vector<BoxElement>& anyType, AnimationBehavior* animationBehavior) : ImageArrayRotationAnimationCacheable(JavaBoxes::toObject(anyType), animationBehavior) { }

    public: Object* getKey();

    public: std::string toString();

};

            


        #endif //ORG_ALLBINARY_ANIMATION_IMAGE_IMAGEARRAYROTATIONANIMATIONCACHEABLE_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_ANIMATION_IMAGE_IMAGEARRAYROTATIONANIMATIONCACHEABLE_H_COMPLETE)
        #define ORG_ALLBINARY_ANIMATION_IMAGE_IMAGEARRAYROTATIONANIMATIONCACHEABLE_H_COMPLETE
        #if __has_include(<org/allbinary/animation/AnimationBehavior.h>)
#include <org/allbinary/animation/AnimationBehavior.h>
#endif
#if __has_include(<org/allbinary/logic/NullUtil.h>)
#include <org/allbinary/logic/NullUtil.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringUtil.h>)
#include <org/allbinary/logic/string/StringUtil.h>
#endif
#if __has_include(<org/allbinary/logic/util/cache/CacheableInterface.h>)
#include <org/allbinary/logic/util/cache/CacheableInterface.h>
#endif
#if __has_include("org/allbinary/animation/image/AdjustedImageArrayRotationAnimation.h")
#include "org/allbinary/animation/image/AdjustedImageArrayRotationAnimation.h"
#endif
#if __has_include("org/allbinary/animation/image/ImageArrayRotationAnimationInfo.h")
#include "org/allbinary/animation/image/ImageArrayRotationAnimationInfo.h"
#endif

        #endif
    
