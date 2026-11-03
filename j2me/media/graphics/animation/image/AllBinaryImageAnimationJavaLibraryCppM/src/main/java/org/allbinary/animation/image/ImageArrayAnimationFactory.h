
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
        



        #ifndef ORG_ALLBINARY_ANIMATION_IMAGE_IMAGEARRAYANIMATIONFACTORY_H
        #define ORG_ALLBINARY_ANIMATION_IMAGE_IMAGEARRAYANIMATIONFACTORY_H

        
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
class Animation;
class AnimationBehavior;
class AnimationBehaviorFactory;
#include <org/allbinary/animation/AnimationInterfaceFactoryInterface.h>

class ScaleProperties;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class ImageArrayAnimation;
class AdjustedImageArrayAnimation;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class ImageArrayAnimationFactory
            : public virtual Object
        , public virtual AnimationInterfaceFactoryInterface {

    private: int32_t dx = 0;

    private: int32_t dy = 0;

    private: std::vector<Image*> imageArray;

    private: AnimationBehaviorFactory* animationBehaviorFactory;

public: ImageArrayAnimationFactory(std::vector<Image*> imageArray, int32_t dx, int32_t dy, AnimationBehaviorFactory* animationBehaviorFactory);

                //@Throws(Exception.constructor)
            
    public: Animation* getInstance(int32_t instanceId);

    public: void setInitialScale(ScaleProperties* scaleProperties);

};

            


        #endif //ORG_ALLBINARY_ANIMATION_IMAGE_IMAGEARRAYANIMATIONFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_ANIMATION_IMAGE_IMAGEARRAYANIMATIONFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_ANIMATION_IMAGE_IMAGEARRAYANIMATIONFACTORY_H_COMPLETE
        #if __has_include(<javax/microedition/lcdui/Image.h>)
#include <javax/microedition/lcdui/Image.h>
#endif
#if __has_include(<org/allbinary/animation/Animation.h>)
#include <org/allbinary/animation/Animation.h>
#endif
#if __has_include(<org/allbinary/animation/AnimationBehavior.h>)
#include <org/allbinary/animation/AnimationBehavior.h>
#endif
#if __has_include(<org/allbinary/animation/AnimationBehaviorFactory.h>)
#include <org/allbinary/animation/AnimationBehaviorFactory.h>
#endif
#if __has_include(<org/allbinary/animation/AnimationInterfaceFactoryInterface.h>)
#include <org/allbinary/animation/AnimationInterfaceFactoryInterface.h>
#endif

#if __has_include(<org/allbinary/media/ScaleProperties.h>)
#include <org/allbinary/media/ScaleProperties.h>
#endif
#if __has_include("org/allbinary/animation/image/ImageArrayAnimation.h")
#include "org/allbinary/animation/image/ImageArrayAnimation.h"
#endif
#if __has_include("org/allbinary/animation/image/AdjustedImageArrayAnimation.h")
#include "org/allbinary/animation/image/AdjustedImageArrayAnimation.h"
#endif

        #endif
    
