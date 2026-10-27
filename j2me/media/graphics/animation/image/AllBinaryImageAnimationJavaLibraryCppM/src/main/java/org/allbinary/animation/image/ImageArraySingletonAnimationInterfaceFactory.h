
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
        



        #ifndef ORG_ALLBINARY_ANIMATION_IMAGE_IMAGEARRAYSINGLETONANIMATIONINTERFACEFACTORY_H
        #define ORG_ALLBINARY_ANIMATION_IMAGE_IMAGEARRAYSINGLETONANIMATIONINTERFACEFACTORY_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
class Image;

class AnimationBehavior;

#include <org/allbinary/animation/SingletonAnimationInterfaceFactory.h>

















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class ImageArrayAnimation;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class ImageArraySingletonAnimationInterfaceFactory: public SingletonAnimationInterfaceFactory {

public: ImageArraySingletonAnimationInterfaceFactory(std::vector<Image*> imageArray);

};

            


        #endif //ORG_ALLBINARY_ANIMATION_IMAGE_IMAGEARRAYSINGLETONANIMATIONINTERFACEFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_ANIMATION_IMAGE_IMAGEARRAYSINGLETONANIMATIONINTERFACEFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_ANIMATION_IMAGE_IMAGEARRAYSINGLETONANIMATIONINTERFACEFACTORY_H_COMPLETE
        #if __has_include(<javax/microedition/lcdui/Image.h>)
#include <javax/microedition/lcdui/Image.h>
#endif

#if __has_include(<org/allbinary/animation/AnimationBehavior.h>)
#include <org/allbinary/animation/AnimationBehavior.h>
#endif

#if __has_include(<org/allbinary/animation/SingletonAnimationInterfaceFactory.h>)
#include <org/allbinary/animation/SingletonAnimationInterfaceFactory.h>
#endif

#if __has_include("org/allbinary/animation/image/ImageArrayAnimation.h")
#include "org/allbinary/animation/image/ImageArrayAnimation.h"
#endif

        #endif
    
