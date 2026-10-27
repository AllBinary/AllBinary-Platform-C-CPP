
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
        



        #ifndef ORG_ALLBINARY_ANIMATION_IMAGE_ALLBINARYARRAYIMAGEROTATIONANIMATIONFACTORY_CPP
        #define ORG_ALLBINARY_ANIMATION_IMAGE_ALLBINARYARRAYIMAGEROTATIONANIMATIONFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/animation/image/AllBinaryArrayImageRotationAnimationFactory.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Image.h>

      
#include <javax/microedition/lcdui/NullImage.h>

      
#include <org/allbinary/animation/Animation.h>

      
#include <org/allbinary/animation/AnimationBehaviorFactory.h>

      
#include <org/allbinary/game/configuration/GameConfigurationCentral.h>

      
#include <org/allbinary/logic/math/PrimitiveIntUtil.h>

      
#include <org/allbinary/math/AngleFactory.h>

      
#include <org/allbinary/math/AngleInfo.h>

      
#include <org/allbinary/media/image/ImageToRotationImageArrayUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/animation/image/BaseImageAnimationFactory.h"
#include "org/allbinary/animation/image/ImageArrayRotationAnimation.h"
#include "org/allbinary/animation/image/AdjustedImageArrayRotationAnimation.h"


                //@Throws(Exception.constructor)
            
    auto AllBinaryArrayImageRotationAnimationFactory::createFactory(Image* image, int32_t dx, int32_t dy) -> AllBinaryArrayImageRotationAnimationFactory*{

    AllBinaryArrayImageRotationAnimationFactory* arrayImageRotationAnimationFactory = new AllBinaryArrayImageRotationAnimationFactory(image, image->getWidth(), image->getHeight(), AngleFactory::getInstance()->TOTAL_ANGLE /GameConfigurationCentral::getInstance()->getGameControlFidelity(), AnimationBehaviorFactory::getInstance());;
    
arrayImageRotationAnimationFactory->initDXY(dx, dy);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return arrayImageRotationAnimationFactory;
    
}


                //@Throws(Exception.constructor)
            
    auto AllBinaryArrayImageRotationAnimationFactory::createFactoryA(Image* image, int32_t dx, int32_t dy, int32_t angleIncrement) -> AllBinaryArrayImageRotationAnimationFactory*{

    AllBinaryArrayImageRotationAnimationFactory* arrayImageRotationAnimationFactory = new AllBinaryArrayImageRotationAnimationFactory(image, image->getWidth(), image->getHeight(), angleIncrement, AnimationBehaviorFactory::getInstance());;
    
arrayImageRotationAnimationFactory->initDXY(dx, dy);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return arrayImageRotationAnimationFactory;
    
}


AllBinaryArrayImageRotationAnimationFactory::AllBinaryArrayImageRotationAnimationFactory(Image* image, int32_t width, int32_t height, int32_t angleIncrement, AnimationBehaviorFactory* animationBehaviorFactory) : BaseImageAnimationFactory(image, PrimitiveIntUtil::getArrayInstance(), width, height, 0, 0, animationBehaviorFactory), imageArray(NullImage::NULL_IMAGE_ARRAY){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->angleIncrement= angleIncrement;
    
this->init();
    
}


                //@Throws(Exception.constructor)
            
    auto AllBinaryArrayImageRotationAnimationFactory::init() -> void{
this->setImageArray(ImageToRotationImageArrayUtil::getInstance()->generate(this->getImage(), this->getAngleIncrement(), static_cast<int32_t>(AngleFactory::getInstance()->TOTAL_ANGLE)));
    
}


    auto AllBinaryArrayImageRotationAnimationFactory::initDXY(int32_t dx, int32_t dy) -> void{
this->animationFactoryInitializationVisitor->dx= dx;
    
this->animationFactoryInitializationVisitor->dy= dy;
    
this->animationFactoryInitializationVisitor->originalDx= dx;
    
this->animationFactoryInitializationVisitor->originalDy= dy;
    
}


                //@Throws(Exception.constructor)
            
    auto AllBinaryArrayImageRotationAnimationFactory::getInstance(int32_t instanceId) -> Animation*{

    std::vector<Image*> scaledImageArray = std::vector<Image*>(this->imageArray.length);;
    

    int32_t size = scaledImageArray.size();;
    

    Image* image = this->getImage();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
scaledImageArray[index]= this->animationFactoryImageScaleUtil->createImage(image, image->getWidth(), image->getHeight(), this->scaleProperties->scaleWidth, this->scaleProperties->scaleHeight);
    
}


                        if(this->animationFactoryInitializationVisitor->dx != 0 || this->animationFactoryInitializationVisitor->dy != 0)
                        
                                    {
                                    this->animationFactoryImageScaleUtil->processAdjust(this);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new AdjustedImageArrayRotationAnimation(scaledImageArray, AngleInfo::getInstance(this->getAngleIncrement()), static_cast<int32_t>(AngleFactory::getInstance()->TOTAL_ANGLE), this->animationFactoryInitializationVisitor->dx, this->animationFactoryInitializationVisitor->dy, this->animationBehaviorFactory->getOrCreateInstance());
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new ImageArrayRotationAnimation(scaledImageArray, AngleInfo::getInstance(this->getAngleIncrement()), static_cast<int32_t>(AngleFactory::getInstance()->TOTAL_ANGLE), this->animationBehaviorFactory->getOrCreateInstance());
    

                        }
                            
}


    auto AllBinaryArrayImageRotationAnimationFactory::setImageArray(std::vector<Image*> imageArray) -> void{
this->imageArray= imageArray;
    
}


    auto AllBinaryArrayImageRotationAnimationFactory::getAngleIncrement() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->angleIncrement;
    
}




        #endif //ORG_ALLBINARY_ANIMATION_IMAGE_ALLBINARYARRAYIMAGEROTATIONANIMATIONFACTORY_CPP
