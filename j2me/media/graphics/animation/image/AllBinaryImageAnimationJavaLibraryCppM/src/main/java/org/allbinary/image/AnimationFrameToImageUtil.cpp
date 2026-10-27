
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
        



        #ifndef ORG_ALLBINARY_IMAGE_ANIMATIONFRAMETOIMAGEUTIL_CPP
        #define ORG_ALLBINARY_IMAGE_ANIMATIONFRAMETOIMAGEUTIL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/image/AnimationFrameToImageUtil.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Graphics.h>

      
#include <javax/microedition/lcdui/Image.h>

      
#include <org/allbinary/animation/Animation.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/image/GameFeatureImageCacheFactory.h"


AnimationFrameToImageUtil::AnimationFrameToImageUtil() {
        }
        auto AnimationFrameToImageUtil::instance_owner() -> AnimationFrameToImageUtil* { static std::unique_ptr<AnimationFrameToImageUtil> value(new AnimationFrameToImageUtil()); return value.get(); }
AnimationFrameToImageUtil* AnimationFrameToImageUtil::instance = AnimationFrameToImageUtil::instance_owner();

    auto AnimationFrameToImageUtil::getInstance() -> AnimationFrameToImageUtil*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return AnimationFrameToImageUtil::instance;
    
}


                //@Throws(Exception.constructor)
            
    auto AnimationFrameToImageUtil::getInstanceTranslate(int32_t width, int32_t height, Animation* animationInterface) -> Image*{

    Image* image = GameFeatureImageCacheFactory::getInstance()->get(AnimationFrameToImageUtil::instance->getClass()->getName(), ((width *3)>>1), ((height *3)>>1));;
    

    Graphics* graphics = image->getGraphics();;
    

    int32_t tranlateX = (width>>2);;
    

    int32_t tranlateY = (height>>2);;
    
graphics->translate(tranlateX, tranlateY);
    
animationInterface->paintXY(graphics, 0, 0);
    
graphics->translate( -tranlateX,  -tranlateY);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return image;
    
}


                //@Throws(Exception.constructor)
            
    auto AnimationFrameToImageUtil::getInstanceWH(int32_t width, int32_t height, Animation* animationInterface) -> Image*{

    Image* image = GameFeatureImageCacheFactory::getInstance()->get(AnimationFrameToImageUtil::instance->getClass()->getName(), width, height);;
    

    Graphics* graphics = image->getGraphics();;
    
animationInterface->paintXY(graphics, 0, 0);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return image;
    
}




        #endif //ORG_ALLBINARY_IMAGE_ANIMATIONFRAMETOIMAGEUTIL_CPP
