
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
        



        #ifndef ORG_ALLBINARY_ANIMATION_IMAGE_LAZYIMAGEROTATIONANIMATIONFACTORY_H
        #define ORG_ALLBINARY_ANIMATION_IMAGE_LAZYIMAGEROTATIONANIMATIONFACTORY_H

            #include "../../../../java/lang/Object.h"
        
            #include "../../../../java/lang/Exception.h"
        
#include <org/allbinary/animation/Animation.h>

      
#include <org/allbinary/animation/AnimationBehaviorFactory.h>

      
#include <org/allbinary/animation/AnimationInterfaceFactoryInterface.h>

      
#include <org/allbinary/image/ImageCacheFactory.h>

      
#include <org/allbinary/logic/communication/log/ForcedLogUtil.h>

      
#include <org/allbinary/media/ScaleProperties.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "BaseImageAnimationFactory.h"
#include "LazyImageRotationAnimation.h"

class LazyImageRotationAnimationFactory
            : public Object
        : public AnimationInterfaceFactoryInterface {
        

    private: const layoutIndex: int32_t;

    private: const animationInterfaceFactoryInterface: BaseImageAnimationFactory;

    public scaleProperties: ScaleProperties = ScaleProperties.instance;

public constructor (int32_t layoutIndex, int32_t associatedLazyAnimationId, BaseImageAnimationFactory animationInterfaceFactoryInterface);

                //@Throws(Exception.constructor)
            
    public Animation getInstance(int32_t instanceId);

    public setInitialScale(ScaleProperties scaleProperties);

};

            


        #endif //ORG_ALLBINARY_ANIMATION_IMAGE_LAZYIMAGEROTATIONANIMATIONFACTORY_H
