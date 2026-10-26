
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

            #include <vector>
        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Image.h>

      
#include <org/allbinary/animation/Animation.h>

      
#include <org/allbinary/animation/AnimationBehavior.h>

      
#include <org/allbinary/animation/AnimationBehaviorFactory.h>

      
#include <org/allbinary/animation/AnimationInterfaceFactoryInterface.h>

      
#include <org/allbinary/logic/communication/log/ForcedLogUtil.h>

      
#include <org/allbinary/media/ScaleProperties.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ImageArrayAnimation.h"
#include "AdjustedImageArrayAnimation.h"

class ImageArrayAnimationFactory
            : public Object
        : public AnimationInterfaceFactoryInterface {

    private: int32_t dx = 0;

    private: int32_t dy = 0;

    private: std::vector<Image> imageArray;

    private: AnimationBehaviorFactory animationBehaviorFactory;

public: ImageArrayAnimationFactory(std::vector<Image> imageArray, int32_t dx, int32_t dy, AnimationBehaviorFactory animationBehaviorFactory);

                //@Throws(Exception.constructor)
            
    public: Animation getInstance(int32_t instanceId);

    public: void setInitialScale(ScaleProperties scaleProperties);

};

            


        #endif //ORG_ALLBINARY_ANIMATION_IMAGE_IMAGEARRAYANIMATIONFACTORY_H
