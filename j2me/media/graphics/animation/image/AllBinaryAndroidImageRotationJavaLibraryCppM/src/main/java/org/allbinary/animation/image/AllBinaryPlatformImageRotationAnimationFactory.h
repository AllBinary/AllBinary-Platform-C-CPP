
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2025 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_ANIMATION_IMAGE_ALLBINARYPLATFORMIMAGEROTATIONANIMATIONFACTORY_H
        #define ORG_ALLBINARY_ANIMATION_IMAGE_ALLBINARYPLATFORMIMAGEROTATIONANIMATIONFACTORY_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
class Image;
class AnimationBehaviorFactory;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/animation/image/AllBinaryAndroidImageRotationAnimationFactory.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class AllBinaryPlatformImageRotationAnimationFactory: public AllBinaryAndroidImageRotationAnimationFactory {

public: AllBinaryPlatformImageRotationAnimationFactory(Image* image, int32_t width, int32_t height, int16_t angleIncrement, AnimationBehaviorFactory* animationBehaviorFactory, bool resizeCanvasForRotation);

};

            


        #endif //ORG_ALLBINARY_ANIMATION_IMAGE_ALLBINARYPLATFORMIMAGEROTATIONANIMATIONFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_ANIMATION_IMAGE_ALLBINARYPLATFORMIMAGEROTATIONANIMATIONFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_ANIMATION_IMAGE_ALLBINARYPLATFORMIMAGEROTATIONANIMATIONFACTORY_H_COMPLETE
        #if __has_include(<javax/microedition/lcdui/Image.h>)
#include <javax/microedition/lcdui/Image.h>
#endif
#if __has_include(<org/allbinary/animation/AnimationBehaviorFactory.h>)
#include <org/allbinary/animation/AnimationBehaviorFactory.h>
#endif
#if __has_include("org/allbinary/animation/image/AllBinaryAndroidImageRotationAnimationFactory.h")
#include "org/allbinary/animation/image/AllBinaryAndroidImageRotationAnimationFactory.h"
#endif

        #endif
    
