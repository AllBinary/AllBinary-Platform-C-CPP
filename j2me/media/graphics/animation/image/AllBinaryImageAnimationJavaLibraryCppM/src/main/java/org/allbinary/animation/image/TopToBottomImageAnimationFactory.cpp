
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
        



        #ifndef ORG_ALLBINARY_ANIMATION_IMAGE_TOPTOBOTTOMIMAGEANIMATIONFACTORY_CPP
        #define ORG_ALLBINARY_ANIMATION_IMAGE_TOPTOBOTTOMIMAGEANIMATIONFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/animation/image/TopToBottomImageAnimationFactory.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Image.h>

      
#include <org/allbinary/animation/Animation.h>

      
#include <org/allbinary/animation/AnimationBehaviorFactory.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/animation/image/BaseImageAnimationFactory.h"
#include "org/allbinary/animation/image/TopToBottomImageAnimation.h"


TopToBottomImageAnimationFactory::TopToBottomImageAnimationFactory(Image* image, std::vector<int32_t> sequenceArray, AnimationBehaviorFactory* animationBehaviorFactory) : BaseImageAnimationFactory(image, sequenceArray, image->getWidth(), image->getHeight(), 0, 0, animationBehaviorFactory){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}


                //@Throws(Exception.constructor)
            
    auto TopToBottomImageAnimationFactory::getInstance(int32_t instanceId) -> Animation*{

    Image* scaledImage = this->animationFactoryImageScaleUtil->createImage(this->getImage(), this->animationFactoryInitializationVisitor->width, this->animationFactoryInitializationVisitor->height, this->scaleProperties->scaleWidth, this->scaleProperties->scaleHeight);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new TopToBottomImageAnimation(scaledImage, this->getSequenceArray(), this->animationBehaviorFactory->getOrCreateInstance());
    
}




        #endif //ORG_ALLBINARY_ANIMATION_IMAGE_TOPTOBOTTOMIMAGEANIMATIONFACTORY_CPP
