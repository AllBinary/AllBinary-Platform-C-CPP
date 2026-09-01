
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
        



            #include "../../../../java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Image.h>

      
#include <org/allbinary/animation/Animation.h>

      
#include <org/allbinary/animation/AnimationBehaviorFactory.h>

      
#include <org/allbinary/graphics/opengles/OpenGLUtil.h>

      
#include <org/allbinary/logic/math/PrimitiveIntUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "BaseImageAnimationFactory.h"
#include "ImageAnimation.h"
#include "AdjustedImageAnimation.h"

class ImageAnimationFactory: public BaseImageAnimationFactory {

                //@Throws(Exception.constructor)
            
    public: static ImageAnimationFactory createFactory(Image image){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ImageAnimationFactory(image, image.getWidth(), image.getHeight(), 0, 0, AnimationBehaviorFactory::getInstance());
    
}


public: ImageAnimationFactory(Image image, int32_t width, int32_t height, int32_t dx, int32_t dy, AnimationBehaviorFactory animationBehaviorFactory){
            super(image, PrimitiveIntUtil::getArrayInstance(), width, height, dx, dy, animationBehaviorFactory);
                    

                            //For kotlin this is before the body of the constructor.
                    
}


                //@Throws(Exception.constructor)
            
    public: Animation getInstance(int32_t instanceId){

    Image scaledImage = this->animationFactoryImageScaleUtil.createImage(this->getImage(), this->animationFactoryInitializationVisitor.width, this->animationFactoryInitializationVisitor.height, this->scaleProperties.scaleWidth, this->scaleProperties.scaleHeight);;
    

    OpenGLUtil openGLUtil = OpenGLUtil::getInstance();;
    
scaledImage= openGLUtil.addImage(scaledImage);
    

                        if(this->animationFactoryInitializationVisitor.dx != 0 || this->animationFactoryInitializationVisitor.dy != 0)
                        
                                    {
                                    this->animationFactoryImageScaleUtil.processAdjust(this);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return AdjustedImageAnimation(scaledImage, this->animationFactoryInitializationVisitor.dx, this->animationFactoryInitializationVisitor.dy, this->animationBehaviorFactory.getOrCreateInstance());
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ImageAnimation(scaledImage, this->animationBehaviorFactory.getOrCreateInstance());
    

                        }
                            
}


};

            

