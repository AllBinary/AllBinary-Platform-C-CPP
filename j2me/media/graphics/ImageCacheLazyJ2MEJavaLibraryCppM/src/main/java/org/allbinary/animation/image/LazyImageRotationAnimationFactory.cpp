
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2022 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_ANIMATION_IMAGE_LAZYIMAGEROTATIONANIMATIONFACTORY_CPP
        #define ORG_ALLBINARY_ANIMATION_IMAGE_LAZYIMAGEROTATIONANIMATIONFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/animation/image/LazyImageRotationAnimationFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/animation/Animation.h>

      
#include <org/allbinary/animation/AnimationBehaviorFactory.h>

      
#include <org/allbinary/animation/AnimationInterfaceFactoryInterface.h>

      
#include <org/allbinary/image/ImageCacheFactory.h>

      
#include <org/allbinary/logic/communication/log/ForcedLogUtil.h>

      
#include <org/allbinary/media/ScaleProperties.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/animation/image/BaseImageAnimationFactory.h"
#include "org/allbinary/animation/image/LazyImageRotationAnimation.h"


LazyImageRotationAnimationFactory::LazyImageRotationAnimationFactory(int32_t layoutIndex, int32_t associatedLazyAnimationId, BaseImageAnimationFactory* animationInterfaceFactoryInterface) : scaleProperties(ScaleProperties::instance){
this->layoutIndex= layoutIndex;
    
this->animationInterfaceFactoryInterface= animationInterfaceFactoryInterface;
    
ImageCacheFactory::getInstance()->hasAnyLazyAnimationFactories= true;
    

                        if(this->animationInterfaceFactoryInterface->animationBehaviorFactory == AnimationBehaviorFactory::getInstance())
                        
                                    {
                                    ForcedLogUtil::log("Using default AnimationBehaviorFactory with IndexedAnimationFactory", this);
    

                                    }
                                
}


                //@Throws(Exception.constructor)
            
    auto LazyImageRotationAnimationFactory::getInstance(int32_t instanceId) -> Animation*{

                        if(this->animationInterfaceFactoryInterface->getImage()->isReady())
                        
                                    {
                                    this->animationInterfaceFactoryInterface->setInitialScale(this->scaleProperties);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->animationInterfaceFactoryInterface->getInstance(instanceId);;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return new LazyImageRotationAnimation(this->layoutIndex, instanceId, this->scaleProperties, this->animationInterfaceFactoryInterface, this->animationInterfaceFactoryInterface->animationBehaviorFactory->getOrCreateInstance());
    

                        }
                            
}


    auto LazyImageRotationAnimationFactory::setInitialScale(ScaleProperties* scaleProperties) -> void{
this->scaleProperties= scaleProperties;
    
}




        #endif //ORG_ALLBINARY_ANIMATION_IMAGE_LAZYIMAGEROTATIONANIMATIONFACTORY_CPP
