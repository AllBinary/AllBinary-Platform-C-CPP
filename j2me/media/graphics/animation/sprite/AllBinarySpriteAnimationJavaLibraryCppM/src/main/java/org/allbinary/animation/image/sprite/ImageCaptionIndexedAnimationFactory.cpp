
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
        



            #include "../../../../../java/lang/Object.h"
        
            #include "../../../../../java/lang/Exception.h"
        
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
        #include "SpriteIndexedAnimation.h"

class ImageCaptionIndexedAnimationFactory
            : public Object
        : public AnimationInterfaceFactoryInterface {
        

    const animationFactoryImageScaleUtil: AnimationFactoryImageScaleUtil = AnimationFactoryImageScaleUtil.getInstance()!;

    private: const animationFactorySpriteScaleUtil: AnimationFactorySpriteScaleUtil = AnimationFactorySpriteScaleUtil.getInstance()!;

    private: captionImage: Image;

    private: spriteMovieImage: Image;

    private: frameWidth: int32_t;

    private: frameHeight: int32_t;

    private: captionDx: int32_t;

    private: captionDy: int32_t;

    private: dx: int32_t;

    private: dy: int32_t;

    private: time: int32_t;

    private: soundInterface: Sound;

    public scaleProperties: ScaleProperties = ScaleProperties.instance;

    private: const animationBehaviorFactory: AnimationBehaviorFactory;

public constructor (Image captionImage, Image spriteMovieImage, Sound soundInterface, int32_t frameWidth, int32_t frameHeight, int32_t captionDx, int32_t captionDy, int32_t dx, int32_t dy, int32_t time, AnimationBehaviorFactory animationBehaviorFactory){

            super();
        
                        if(animationBehaviorFactory == AnimationBehaviorFactory.getInstance())
                        
                                    {
                                    ForcedLogUtil.log("Using default AnimationBehaviorFactory with IndexedAnimationFactory", this);
    

                                    }
                                
this.captionImage= captionImage;
    
this.spriteMovieImage= spriteMovieImage;
    
this.frameWidth= frameWidth;
    
this.frameHeight= frameHeight;
    
this.captionDx= captionDx;
    
this.captionDy= captionDy;
    
this.dx= dx;
    
this.dy= dy;
    
this.time= time;
    
this.soundInterface= soundInterface;
    
this.animationBehaviorFactory= animationBehaviorFactory;
    
}


                //@Throws(Exception.constructor)
            
    public Animation getInstance(int32_t instanceId){

    scaledImage: Image = this.animationFactoryImageScaleUtil!.createImage(this.captionImage, this.captionImage!.getWidth(), this.captionImage!.getHeight(), this.scaleProperties!.scaleWidth, this.scaleProperties!.scaleHeight)!;;
    

    animationInterface: Animation = new ImageAnimation(scaledImage, this.animationBehaviorFactory!.getOrCreateInstance());;
    

    sprite: Sprite = this.animationFactorySpriteScaleUtil!.createImage(this.spriteMovieImage, this.frameWidth, this.frameHeight, this.scaleProperties!.scaleWidth, this.scaleProperties!.scaleHeight)!;;
    

    movieIndexedAnimationInterface: IndexedAnimation = new SpriteIndexedAnimation(sprite, this.spriteMovieImage, BasicColorUtil.getInstance()!.ZERO_ARRAY, this.animationBehaviorFactory!.getOrCreateInstance());;
    

    player: Player = this.soundInterface!.getPlayerP()!;;
    

                        if(player == 
                                    null
                                )
                        
                                    {
                                    


                            throw new Exception("Sound Was not Initialized");
                    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new CaptionIndexedAnimation(animationInterface, movieIndexedAnimationInterface, player, this.captionDx, this.captionDy, this.dx, this.dy, this.time, this.animationBehaviorFactory!.getOrCreateInstance());
    
}


    public setInitialScale(ScaleProperties scaleProperties){
this.scaleProperties= scaleProperties;
    
}


};

            

