
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
        



        #ifndef ORG_ALLBINARY_ANIMATION_IMAGE_ALLBINARYSCREENRELATIONALIMAGEANIMATIONINTERFACEFACTORY_H
        #define ORG_ALLBINARY_ANIMATION_IMAGE_ALLBINARYSCREENRELATIONALIMAGEANIMATIONINTERFACEFACTORY_H

            #include "../../../../java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Image.h>

      
#include <javax/microedition/lcdui/NullImage.h>

      
#include <org/allbinary/image/GameFeatureImageCacheFactory.h>

      
#include <org/allbinary/animation/Animation.h>

      
#include <org/allbinary/animation/AnimationBehaviorFactory.h>

      
#include <org/allbinary/graphics/displayable/ScreenRelationalUtil.h>

      
#include <org/allbinary/logic/math/PrimitiveIntUtil.h>

      
#include <org/allbinary/media/image/ImageScaleUtil.h>

      
#include <org/microemu/android/device/AndroidImageInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "BaseImageAnimationFactory.h"
#include "ImageAnimation.h"

class AllBinaryScreenRelationalImageAnimationInterfaceFactory: public BaseImageAnimationFactory {

    private: Image lastImage = NullImage::NULL_IMAGE;

public: AllBinaryScreenRelationalImageAnimationInterfaceFactory(Image image, AnimationBehaviorFactory animationBehaviorFactory);

                //@Throws(Exception.constructor)
            
    public: Animation getInstance(int32_t instanceId);

};

            


        #endif //ORG_ALLBINARY_ANIMATION_IMAGE_ALLBINARYSCREENRELATIONALIMAGEANIMATIONINTERFACEFACTORY_H
