
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
        



            #include <vector>
        
            #include "../../../../java/lang/Exception.h"
        
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
        #include "BaseImageAnimationFactory.h"
#include "ImageArrayRotationAnimation.h"
#include "AdjustedImageArrayRotationAnimation.h"

class AllBinaryArrayImageRotationAnimationFactory: public BaseImageAnimationFactory {

                //@Throws(Exception.constructor)
            
    public: static AllBinaryArrayImageRotationAnimationFactory createFactory(Image image, int32_t dx, int32_t dy){

    AllBinaryArrayImageRotationAnimationFactory arrayImageRotationAnimationFactory = AllBinaryArrayImageRotationAnimationFactory(image, image.getWidth(), image.getHeight(), AngleFactory::getInstance().TOTAL_ANGLE /GameConfigurationCentral::getInstance().getGameControlFidelity(), AnimationBehaviorFactory::getInstance());;
    
arrayImageRotationAnimationFactory.initDXY(dx, dy);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return arrayImageRotationAnimationFactory;
    
}


                //@Throws(Exception.constructor)
            
    public: static AllBinaryArrayImageRotationAnimationFactory createFactoryA(Image image, int32_t dx, int32_t dy, int32_t angleIncrement){

    AllBinaryArrayImageRotationAnimationFactory arrayImageRotationAnimationFactory = AllBinaryArrayImageRotationAnimationFactory(image, image.getWidth(), image.getHeight(), angleIncrement, AnimationBehaviorFactory::getInstance());;
    
arrayImageRotationAnimationFactory.initDXY(dx, dy);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return arrayImageRotationAnimationFactory;
    
}


    private: std::vector<Image> imageArray = NullImage::NULL_IMAGE_ARRAY;

    private: int32_t angleIncrement;

public: AllBinaryArrayImageRotationAnimationFactory(Image image, int32_t width, int32_t height, int32_t angleIncrement, AnimationBehaviorFactory animationBehaviorFactory){
            super(image, PrimitiveIntUtil::getArrayInstance(), width, height, 0, 0, animationBehaviorFactory);
                    

                            //For kotlin this is before the body of the constructor.
                    
this->angleIncrement= angleIncrement;
    
this->init();
    
}


                //@Throws(Exception.constructor)
            
    private: void init(){
this->setImageArray(ImageToRotationImageArrayUtil::getInstance().generate(this->getImage(), this->getAngleIncrement(), static_cast<int32_t>(AngleFactory::getInstance().TOTAL_ANGLE)));
    
}


    private: void initDXY(int32_t dx, int32_t dy){
this->animationFactoryInitializationVisitor.dx= dx;
    
this->animationFactoryInitializationVisitor.dy= dy;
    
this->animationFactoryInitializationVisitor.originalDx= dx;
    
this->animationFactoryInitializationVisitor.originalDy= dy;
    
}


                //@Throws(Exception.constructor)
            
    public: Animation getInstance(int32_t instanceId){

    std::vector<Image> scaledImageArray = new Array(this->imageArray.length);;
    

    int32_t size = scaledImageArray.size();;
    

    Image image = this->getImage();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
scaledImageArray[index]= this->animationFactoryImageScaleUtil.createImage(image, image.getWidth(), image.getHeight(), this->scaleProperties.scaleWidth, this->scaleProperties.scaleHeight);
    
}


                        if(this->animationFactoryInitializationVisitor.dx != 0 || this->animationFactoryInitializationVisitor.dy != 0)
                        
                                    {
                                    this->animationFactoryImageScaleUtil.processAdjust(this);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return AdjustedImageArrayRotationAnimation(scaledImageArray, AngleInfo::getInstance(this->getAngleIncrement()), static_cast<int32_t>(AngleFactory::getInstance().TOTAL_ANGLE), this->animationFactoryInitializationVisitor.dx, this->animationFactoryInitializationVisitor.dy, this->animationBehaviorFactory.getOrCreateInstance());
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ImageArrayRotationAnimation(scaledImageArray, AngleInfo::getInstance(this->getAngleIncrement()), static_cast<int32_t>(AngleFactory::getInstance().TOTAL_ANGLE), this->animationBehaviorFactory.getOrCreateInstance());
    

                        }
                            
}


    protected: void setImageArray(std::vector<Image> imageArray){
this->imageArray= imageArray;
    
}


    protected: int32_t getAngleIncrement(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->angleIncrement;
    
}


};

            

