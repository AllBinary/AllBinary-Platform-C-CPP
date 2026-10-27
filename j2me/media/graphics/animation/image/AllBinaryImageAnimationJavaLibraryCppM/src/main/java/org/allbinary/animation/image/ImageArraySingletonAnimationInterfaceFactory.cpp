
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
        



        #ifndef ORG_ALLBINARY_ANIMATION_IMAGE_IMAGEARRAYSINGLETONANIMATIONINTERFACEFACTORY_CPP
        #define ORG_ALLBINARY_ANIMATION_IMAGE_IMAGEARRAYSINGLETONANIMATIONINTERFACEFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/animation/image/ImageArraySingletonAnimationInterfaceFactory.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Image.h>

      
#include <org/allbinary/animation/Animation.h>

      
#include <org/allbinary/animation/AnimationBehavior.h>

      
#include <org/allbinary/animation/IndexedAnimation.h>

      
#include <org/allbinary/animation/SingletonAnimationInterfaceFactory.h>

      
#include <org/allbinary/image/IndexedAnimationToImageArrayUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/animation/image/ImageArrayAnimation.h"


ImageArraySingletonAnimationInterfaceFactory::ImageArraySingletonAnimationInterfaceFactory(std::vector<Image*> imageArray) : SingletonAnimationInterfaceFactory(new ImageArrayAnimation(imageArray, AnimationBehavior::getInstance())){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}




        #endif //ORG_ALLBINARY_ANIMATION_IMAGE_IMAGEARRAYSINGLETONANIMATIONINTERFACEFACTORY_CPP
