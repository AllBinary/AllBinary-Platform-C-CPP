
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
        



            #include "java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Image.h>

      
#include <org/allbinary/animation/Animation.h>

      
#include <org/allbinary/animation/AnimationBehaviorFactory.h>

      
#include <org/allbinary/game/configuration/GameConfigurationCentral.h>

      
#include <org/allbinary/game/configuration/feature/Features.h>

      
#include <org/allbinary/graphics/opengles/OpenGLFeatureFactory.h>

      
#include <org/allbinary/logic/math/PrimitiveIntUtil.h>

      
#include <org/allbinary/media/image/ImageCopyUtil.h>

      
#include <org/allbinary/math/AngleFactory.h>

      
#include <org/allbinary/math/AngleInfo.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "BaseImageAnimationFactory.h"
#include "AllBinaryFlickerAndroidImageRotationAnimation.h"
#include "AllBinaryAdjustedAndroidImageRotationAnimation.h"

class AllBinaryAndroidImageRotationAnimationFactory: public BaseImageAnimationFactory {

                //@Throws(Exception.constructor)
            
    public: static AllBinaryAndroidImageRotationAnimationFactory createFactory(Image image, int32_t width, int32_t height, AnimationBehaviorFactory animationBehaviorFactory){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return AllBinaryAndroidImageRotationAnimationFactory(image, width, height, (AngleFactory::getInstance().TOTAL_ANGLE /GameConfigurationCentral::getInstance().getGameControlFidelity()), animationBehaviorFactory, false);
    
}


                //@Throws(Exception.constructor)
            
    public: static AllBinaryAndroidImageRotationAnimationFactory createFactoryA(Image image, int32_t width, int32_t height, int16_t angleIncrement, AnimationBehaviorFactory animationBehaviorFactory){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return AllBinaryAndroidImageRotationAnimationFactory(image, width, height, angleIncrement, animationBehaviorFactory, false);
    
}


                //@Throws(Exception.constructor)
            
    public: static AllBinaryAndroidImageRotationAnimationFactory createFactoryU(Image image, AnimationBehaviorFactory animationBehaviorFactory){

    AllBinaryAndroidImageRotationAnimationFactory androidImageRotationAnimationFactory = AllBinaryAndroidImageRotationAnimationFactory(image, image.getWidth(), image.getHeight(), (AngleFactory::getInstance().TOTAL_ANGLE /GameConfigurationCentral::getInstance().getGameControlFidelity()), animationBehaviorFactory, false);;
    
androidImageRotationAnimationFactory.init( -(image.getWidth()>>2),  -(image.getHeight()>>2));
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return androidImageRotationAnimationFactory;
    
}


                //@Throws(Exception.constructor)
            
    public: static AllBinaryAndroidImageRotationAnimationFactory createFactoryDXYU(Image image, int32_t dx, int32_t dy, AnimationBehaviorFactory animationBehaviorFactory){

    AllBinaryAndroidImageRotationAnimationFactory androidImageRotationAnimationFactory = AllBinaryAndroidImageRotationAnimationFactory(image, image.getWidth(), image.getHeight(), (AngleFactory::getInstance().TOTAL_ANGLE /GameConfigurationCentral::getInstance().getGameControlFidelity()), animationBehaviorFactory, false);;
    
androidImageRotationAnimationFactory.init(dx, dy);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return androidImageRotationAnimationFactory;
    
}


                //@Throws(Exception.constructor)
            
    public: static AllBinaryAndroidImageRotationAnimationFactory createFactoryADXY(Image image, int32_t width, int32_t height, int32_t dx, int32_t dy, int16_t angleIncrement, AnimationBehaviorFactory animationBehaviorFactory, bool resizeCanvasForRotation){

    AllBinaryAndroidImageRotationAnimationFactory androidImageRotationAnimationFactory = AllBinaryAndroidImageRotationAnimationFactory(image, width, height, angleIncrement, animationBehaviorFactory, resizeCanvasForRotation);;
    
androidImageRotationAnimationFactory.init(dx, dy);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return androidImageRotationAnimationFactory;
    
}


    public: void init(int32_t dx, int32_t dy){
this->animationFactoryInitializationVisitor.dx= dx;
    
this->animationFactoryInitializationVisitor.dy= dy;
    
this->animationFactoryInitializationVisitor.originalDx= dx;
    
this->animationFactoryInitializationVisitor.originalDy= dy;
    
}


    private: int16_t angleIncrement;

    private: bool resizeCanvasForRotation;

public: AllBinaryAndroidImageRotationAnimationFactory(Image image, int32_t width, int32_t height, int16_t angleIncrement, AnimationBehaviorFactory animationBehaviorFactory, bool resizeCanvasForRotation) : BaseImageAnimationFactory(image, PrimitiveIntUtil::getArrayInstance(), width, height, 0, 0, animationBehaviorFactory){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->angleIncrement= angleIncrement;
    
this->resizeCanvasForRotation= resizeCanvasForRotation;
    
}


                //@Throws(Exception.constructor)
            
    private: Image getCanvasImage(){

    Features features = Features::getInstance();;
    

                        if(this->resizeCanvasForRotation && !features.isDefault(OpenGLFeatureFactory::getInstance().OPENGL))
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ImageCopyUtil::getInstance().createImageScale(this->getImage(), 1.44, false);;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->getImage();;
    

                        }
                            
}


                //@Throws(Exception.constructor)
            
    public: Animation getInstance(int32_t instanceId){

    Image canvasImage = this->getCanvasImage();;
    

    Image scaledImage = this->animationFactoryImageScaleUtil.createImage(canvasImage, this->animationFactoryInitializationVisitor.width, this->animationFactoryInitializationVisitor.height, this->scaleProperties.scaleWidth, this->scaleProperties.scaleHeight);;
    

    Image copyOfScaledImage = ImageCopyUtil::getInstance().createImage(scaledImage);;
    

                        if(this->animationFactoryInitializationVisitor.dx != 0 || this->animationFactoryInitializationVisitor.dy != 0)
                        
                                    {
                                    this->animationFactoryImageScaleUtil.processAdjust(this);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return AllBinaryAdjustedAndroidImageRotationAnimation(scaledImage, copyOfScaledImage, AngleInfo::getInstance(this->angleIncrement), AngleFactory::getInstance().TOTAL_ANGLE, this->animationFactoryInitializationVisitor.dx, this->animationFactoryInitializationVisitor.dy, animationBehaviorFactory.getOrCreateInstance());
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return AllBinaryFlickerAndroidImageRotationAnimation(scaledImage, copyOfScaledImage, AngleInfo::getInstance(this->angleIncrement), AngleFactory::getInstance().TOTAL_ANGLE, this->animationBehaviorFactory.getOrCreateInstance());
    

                        }
                            
}


};

            

