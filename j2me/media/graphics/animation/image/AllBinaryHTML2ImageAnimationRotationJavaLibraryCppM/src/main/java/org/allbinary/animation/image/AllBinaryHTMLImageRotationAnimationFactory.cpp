
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
        



            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Image.h>

      
#include <org/allbinary/animation/Animation.h>

      
#include <org/allbinary/animation/AnimationBehaviorFactory.h>

      
#include <org/allbinary/game/configuration/GameConfigurationCentral.h>

      
#include <org/allbinary/logic/math/PrimitiveIntUtil.h>

      
#include <org/allbinary/media/image/ImageCopyUtil.h>

      
#include <org/allbinary/math/AngleFactory.h>

      
#include <org/allbinary/math/AngleInfo.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/animation/image/BaseImageAnimationFactory.h"
#include "org/allbinary/animation/image/AllBinaryHTMLImageRotationAnimation.h"
#include "org/allbinary/animation/image/AllBinaryAdjustedHTMLImageRotationAnimation.h"

class AllBinaryHTMLImageRotationAnimationFactory: public BaseImageAnimationFactory {

                //@Throws(Exception.constructor)
            
    public: static AllBinaryHTMLImageRotationAnimationFactory* createFactoryADXY(Image* image, int32_t width, int32_t height, int32_t dx, int32_t dy, int16_t angleIncrement, AnimationBehaviorFactory* animationBehaviorFactory){

    AllBinaryHTMLImageRotationAnimationFactory* htmlImageRotationAnimationFactory = new AllBinaryHTMLImageRotationAnimationFactory(image, width, height, angleIncrement, animationBehaviorFactory);;
    
htmlImageRotationAnimationFactory->init(dx, dy);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return htmlImageRotationAnimationFactory;
    
}


    protected: int16_t angleIncrement;

public: AllBinaryHTMLImageRotationAnimationFactory(Image* image, int32_t width, int32_t height, int16_t angleIncrement, AnimationBehaviorFactory* animationBehaviorFactory) : BaseImageAnimationFactory(image, PrimitiveIntUtil::getArrayInstance(), width, height, 0, 0, animationBehaviorFactory){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->angleIncrement= angleIncrement;
    
}


    public: void init(int32_t dx, int32_t dy){
this->animationFactoryInitializationVisitor.dx= dx;
    
this->animationFactoryInitializationVisitor.dy= dy;
    
this->animationFactoryInitializationVisitor.originalDx= dx;
    
this->animationFactoryInitializationVisitor.originalDy= dy;
    
}


                //@Throws(Exception.constructor)
            
    public: Animation* getInstance(int32_t instanceId){

    Image* scaledImage = this->animationFactoryImageScaleUtil.createImage(this->getImage(), this->animationFactoryInitializationVisitor.width, this->animationFactoryInitializationVisitor.height, this->scaleProperties.scaleWidth, this->scaleProperties.scaleHeight);;
    

    Image* copyOfScaledImage = ImageCopyUtil::getInstance()->createImage(scaledImage);;
    

                        if(this->animationFactoryInitializationVisitor.dx != 0 || this->animationFactoryInitializationVisitor.dy != 0)
                        
                                    {
                                    this->animationFactoryImageScaleUtil.processAdjust(this);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new AllBinaryAdjustedHTMLImageRotationAnimation(scaledImage, copyOfScaledImage, AngleInfo::getInstance(this->getAngleIncrement()), AngleFactory::getInstance()->TOTAL_ANGLE, this->animationFactoryInitializationVisitor.dx, this->animationFactoryInitializationVisitor.dy, this->animationBehaviorFactory.getOrCreateInstance());
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new AllBinaryHTMLImageRotationAnimation(scaledImage, copyOfScaledImage, AngleInfo::getInstance(this->angleIncrement), AngleFactory::getInstance()->TOTAL_ANGLE, this->animationBehaviorFactory.getOrCreateInstance());
    

                        }
                            
}


    protected: int16_t getAngleIncrement(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->angleIncrement;
    
}


};

            

