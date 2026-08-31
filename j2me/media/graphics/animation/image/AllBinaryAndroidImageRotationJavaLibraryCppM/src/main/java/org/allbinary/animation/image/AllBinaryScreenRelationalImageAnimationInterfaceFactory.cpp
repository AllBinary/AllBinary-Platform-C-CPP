
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
        

    private: lastImage: Image = NullImage.NULL_IMAGE;

public constructor (Image image, AnimationBehaviorFactory animationBehaviorFactory){
            super(image, PrimitiveIntUtil.getArrayInstance(), 0, 0, 0, 0, animationBehaviorFactory);
                    

                            //For kotlin this is before the body of the constructor.
                    

                        if(this.lastImage != NullImage.NULL_IMAGE)
                        
                                    {
                                    
    androidImageInterface: AndroidImageInterface = this.lastImage as AndroidImageInterface;;
    
androidImageInterface!.getBitmap()!.recycle();
    

                                    }
                                

    scale: float = ScreenRelationalUtil.getInstance()!.getScaleImage(image)!;;
    
this.lastImage= ImageScaleUtil.getInstance()!.createImage(GameFeatureImageCacheFactory.getInstance(), this.getImage(), scale, scale, false);
    
}


                //@Throws(Exception.constructor)
            
    public Animation getInstance(int32_t instanceId){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new ImageAnimation(this.lastImage, this.animationBehaviorFactory!.getOrCreateInstance());
    
}


};

            

