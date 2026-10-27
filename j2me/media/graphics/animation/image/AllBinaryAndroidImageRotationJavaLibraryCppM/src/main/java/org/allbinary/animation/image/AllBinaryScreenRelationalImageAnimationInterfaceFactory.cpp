
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
        



            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
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
        #include "org/allbinary/animation/image/BaseImageAnimationFactory.h"
#include "org/allbinary/animation/image/ImageAnimation.h"

class AllBinaryScreenRelationalImageAnimationInterfaceFactory: public BaseImageAnimationFactory {

    private: Image* lastImage = NullImage::NULL_IMAGE;

public: AllBinaryScreenRelationalImageAnimationInterfaceFactory(Image* image, AnimationBehaviorFactory* animationBehaviorFactory) : BaseImageAnimationFactory(image, PrimitiveIntUtil::getArrayInstance(), 0, 0, 0, 0, animationBehaviorFactory){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    

                        if(this->lastImage != NullImage::NULL_IMAGE)
                        
                                    {
                                    
    AndroidImageInterface* androidImageInterface = dynamic_cast<AndroidImageInterface*>(this->lastImage);;
    
androidImageInterface->getBitmap()->recycle();
    

                                    }
                                

    float scale = ScreenRelationalUtil::getInstance()->getScaleImage(image);;
    
this->lastImage= ImageScaleUtil::getInstance()->createImage(GameFeatureImageCacheFactory::getInstance(), this->getImage(), scale, scale, false);
    
}


                //@Throws(Exception.constructor)
            
    public: Animation* getInstance(int32_t instanceId){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new ImageAnimation(this->lastImage, this->animationBehaviorFactory.getOrCreateInstance());
    
}


};

            

