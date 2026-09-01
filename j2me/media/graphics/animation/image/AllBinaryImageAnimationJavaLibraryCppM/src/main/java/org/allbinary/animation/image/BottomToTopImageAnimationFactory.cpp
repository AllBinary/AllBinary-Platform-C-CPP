
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

      
#include <org/allbinary/animation/Animation.h>

      
#include <org/allbinary/animation/AnimationBehaviorFactory.h>

      
#include <org/allbinary/logic/math/PrimitiveIntUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "BaseImageAnimationFactory.h"
#include "BottomToTopImageAnimation.h"

class BottomToTopImageAnimationFactory: public BaseImageAnimationFactory {

public: BottomToTopImageAnimationFactory(Image image, AnimationBehaviorFactory animationBehaviorFactory){
            super(image, PrimitiveIntUtil::getArrayInstance(), image.getWidth(), image.getHeight(), 0, 0, animationBehaviorFactory);
                    

                            //For kotlin this is before the body of the constructor.
                    
}


                //@Throws(Exception.constructor)
            
    public: Animation getInstance(int32_t instanceId){

    Image scaledImage = this->animationFactoryImageScaleUtil.createImage(this->getImage(), this->animationFactoryInitializationVisitor.width, this->animationFactoryInitializationVisitor.height, this->scaleProperties.scaleWidth, this->scaleProperties.scaleHeight);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return BottomToTopImageAnimation(scaledImage, this->animationBehaviorFactory.getOrCreateInstance());
    
}


};

            

