
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
        



        #ifndef ORG_ALLBINARY_ANIMATION_IMAGE_SPRITE_IMAGECAPTIONINDEXEDANIMATIONFACTORY_CPP
        #define ORG_ALLBINARY_ANIMATION_IMAGE_SPRITE_IMAGECAPTIONINDEXEDANIMATIONFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/animation/image/sprite/ImageCaptionIndexedAnimationFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Image.h>

      
#include <javax/microedition/lcdui/game/Sprite.h>

      
#include <javax/microedition/media/Player.h>

      
#include <org/allbinary/animation/Animation.h>

      
#include <org/allbinary/animation/AnimationBehaviorFactory.h>

      
#include <org/allbinary/animation/AnimationInterfaceFactoryInterface.h>

      
#include <org/allbinary/animation/IndexedAnimation.h>

      
#include <org/allbinary/animation/caption/CaptionIndexedAnimation.h>

      
#include <org/allbinary/animation/image/ImageAnimation.h>

      
#include <org/allbinary/graphics/color/BasicColorUtil.h>

      
#include <org/allbinary/image/AnimationFactoryImageScaleUtil.h>

      
#include <org/allbinary/image/sprite/AnimationFactorySpriteScaleUtil.h>

      
#include <org/allbinary/logic/communication/log/ForcedLogUtil.h>

      
#include <org/allbinary/media/ScaleProperties.h>

      
#include <org/allbinary/media/audio/Sound.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/animation/image/sprite/SpriteIndexedAnimation.h"


ImageCaptionIndexedAnimationFactory::ImageCaptionIndexedAnimationFactory(Image* captionImage, Image* spriteMovieImage, Sound* soundInterface, int32_t frameWidth, int32_t frameHeight, int32_t captionDx, int32_t captionDy, int32_t dx, int32_t dy, int32_t time, AnimationBehaviorFactory* animationBehaviorFactory) : animationFactoryImageScaleUtil(AnimationFactoryImageScaleUtil::getInstance()), animationFactorySpriteScaleUtil(AnimationFactorySpriteScaleUtil::getInstance()), scaleProperties(ScaleProperties::instance){

                        if(animationBehaviorFactory == AnimationBehaviorFactory::getInstance())
                        
                                    {
                                    ForcedLogUtil::log("Using default AnimationBehaviorFactory with IndexedAnimationFactory", this);
    

                                    }
                                
this->captionImage= captionImage;
    
this->spriteMovieImage= spriteMovieImage;
    
this->frameWidth= frameWidth;
    
this->frameHeight= frameHeight;
    
this->captionDx= captionDx;
    
this->captionDy= captionDy;
    
this->dx= dx;
    
this->dy= dy;
    
this->time= time;
    
this->soundInterface= soundInterface;
    
this->animationBehaviorFactory= animationBehaviorFactory;
    
}


                //@Throws(Exception.constructor)
            
    auto ImageCaptionIndexedAnimationFactory::getInstance(int32_t instanceId) -> Animation*{

    Image* scaledImage = this->animationFactoryImageScaleUtil->createImage(this->captionImage, this->captionImage->getWidth(), this->captionImage->getHeight(), this->scaleProperties->scaleWidth, this->scaleProperties->scaleHeight);;
    

    Animation* animationInterface = new ImageAnimation(scaledImage, this->animationBehaviorFactory->getOrCreateInstance());;
    

    Sprite* sprite = this->animationFactorySpriteScaleUtil->createImage(this->spriteMovieImage, this->frameWidth, this->frameHeight, this->scaleProperties->scaleWidth, this->scaleProperties->scaleHeight);;
    

    IndexedAnimation* movieIndexedAnimationInterface = new SpriteIndexedAnimation(sprite, this->spriteMovieImage, BasicColorUtil::getInstance()->ZERO_ARRAY, this->animationBehaviorFactory->getOrCreateInstance());;
    

    Player* player = this->soundInterface->getPlayerP();;
    

                        if(player == 
                                    nullptr
                                )
                        
                                    {
                                    


                            throw Exception("Sound Was not Initialized");
                    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new CaptionIndexedAnimation(animationInterface, movieIndexedAnimationInterface, player, this->captionDx, this->captionDy, this->dx, this->dy, this->time, this->animationBehaviorFactory->getOrCreateInstance());
    
}


    auto ImageCaptionIndexedAnimationFactory::setInitialScale(ScaleProperties* scaleProperties) -> void{
this->scaleProperties= scaleProperties;
    
}




        #endif //ORG_ALLBINARY_ANIMATION_IMAGE_SPRITE_IMAGECAPTIONINDEXEDANIMATIONFACTORY_CPP
