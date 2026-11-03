
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
        



        #ifndef ORG_ALLBINARY_ANIMATION_IMAGE_ALLBINARYJ2SEIMAGEROTATIONANIMATIONFACTORY_CPP
        #define ORG_ALLBINARY_ANIMATION_IMAGE_ALLBINARYJ2SEIMAGEROTATIONANIMATIONFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/animation/image/AllBinaryJ2SEImageRotationAnimationFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Image.h>

      
#include <org/allbinary/animation/Animation.h>

      
#include <org/allbinary/animation/AnimationBehaviorFactory.h>

      
#include <org/allbinary/game/configuration/feature/Features.h>

      
#include <org/allbinary/graphics/opengles/OpenGLFeatureFactory.h>

      
#include <org/allbinary/graphics/opengles/OpenGLUtil.h>

      
#include <org/allbinary/logic/math/PrimitiveIntUtil.h>

      
#include <org/allbinary/math/AngleFactory.h>

      
#include <org/allbinary/math/AngleInfo.h>

      
#include <org/allbinary/media/image/ImageCopyUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/animation/image/BaseImageAnimationFactory.h"
#include "org/allbinary/animation/image/AllBinaryJ2SEImageRotationAnimation.h"
#include "org/allbinary/animation/image/AllBinaryAdjustedJ2SEImageRotationAnimation.h"


                //@Throws(Exception.constructor)
            
    auto AllBinaryJ2SEImageRotationAnimationFactory::createDXY(Image* image, int32_t width, int32_t height, int32_t dx, int32_t dy, int16_t angleIncrement, AnimationBehaviorFactory* animationBehaviorFactory, bool resizeCanvasForRotation) -> AllBinaryJ2SEImageRotationAnimationFactory*{

    AllBinaryJ2SEImageRotationAnimationFactory* imageRotationAnimationFactory = new AllBinaryJ2SEImageRotationAnimationFactory(image, width, height, angleIncrement, animationBehaviorFactory, resizeCanvasForRotation);;
    
imageRotationAnimationFactory->animationFactoryInitializationVisitor->dx= dx;
    
imageRotationAnimationFactory->animationFactoryInitializationVisitor->dy= dy;
    
imageRotationAnimationFactory->animationFactoryInitializationVisitor->originalDx= dx;
    
imageRotationAnimationFactory->animationFactoryInitializationVisitor->originalDy= dy;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return imageRotationAnimationFactory;
    
}


AllBinaryJ2SEImageRotationAnimationFactory::AllBinaryJ2SEImageRotationAnimationFactory(Image* image, int32_t width, int32_t height, int16_t angleIncrement, AnimationBehaviorFactory* animationBehaviorFactory, bool resizeCanvasForRotation) : BaseImageAnimationFactory(image, PrimitiveIntUtil::getArrayInstance(), width, height, 0, 0, animationBehaviorFactory){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->angleIncrementP= angleIncrement;
    
this->resizeCanvasForRotation= resizeCanvasForRotation;
    
}


                //@Throws(Exception.constructor)
            
    auto AllBinaryJ2SEImageRotationAnimationFactory::getCanvasImage() -> Image*{

    Features* features = Features::getInstance();;
    

                        if(this->resizeCanvasForRotation && !features->isDefault(OpenGLFeatureFactory::getInstance()->OPENGL))
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return ImageCopyUtil::getInstance()->createImageScale(this->getImage(), 1.44, false);;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->getImage();;
    

                        }
                            
}


                //@Throws(Exception.constructor)
            
    auto AllBinaryJ2SEImageRotationAnimationFactory::getInstance(int32_t instanceId) -> Animation*{

    ImageCopyUtil* imageCopyUtil = ImageCopyUtil::getInstance();;
    

    Image* canvasImage = this->getCanvasImage();;
    

    Image* scaledImage = this->animationFactoryImageScaleUtil->createImage(canvasImage, this->animationFactoryInitializationVisitor->width, this->animationFactoryInitializationVisitor->height, this->scaleProperties->scaleWidth, this->scaleProperties->scaleHeight);;
    

    OpenGLUtil* openGLUtil = OpenGLUtil::getInstance();;
    
scaledImage= openGLUtil->addImage(scaledImage);
    

    Image* copyOfScaledImage = imageCopyUtil->createImageForRotation(scaledImage);;
    

                        if(this->animationFactoryInitializationVisitor->dx != 0 || this->animationFactoryInitializationVisitor->dy != 0)
                        
                                    {
                                    this->animationFactoryImageScaleUtil->processAdjust(this);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return new AllBinaryAdjustedJ2SEImageRotationAnimation(scaledImage, copyOfScaledImage, AngleInfo::getInstance(this->angleIncrementP), AngleFactory::getInstance()->TOTAL_ANGLE, this->animationFactoryInitializationVisitor->dx, this->animationFactoryInitializationVisitor->dy, this->animationBehaviorFactory->getOrCreateInstance());
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return new AllBinaryJ2SEImageRotationAnimation(scaledImage, copyOfScaledImage, AngleInfo::getInstance(this->angleIncrementP), AngleFactory::getInstance()->TOTAL_ANGLE, this->animationBehaviorFactory->getOrCreateInstance());
    

                        }
                            
}


    auto AllBinaryJ2SEImageRotationAnimationFactory::getAngleIncrement() -> int16_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->angleIncrementP;
    
}




        #endif //ORG_ALLBINARY_ANIMATION_IMAGE_ALLBINARYJ2SEIMAGEROTATIONANIMATIONFACTORY_CPP
