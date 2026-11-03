
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
        



        #ifndef ORG_ALLBINARY_ANIMATION_IMAGE_BASEIMAGEANIMATIONFACTORY_CPP
        #define ORG_ALLBINARY_ANIMATION_IMAGE_BASEIMAGEANIMATIONFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/animation/image/BaseImageAnimationFactory.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Image.h>

      
#include <org/allbinary/animation/Animation.h>

      
#include <org/allbinary/animation/AnimationBehaviorFactory.h>

      
#include <org/allbinary/animation/AnimationInterfaceFactoryInterface.h>

      
#include <org/allbinary/animation/NullAnimationFactory.h>

      
#include <org/allbinary/image/AnimationFactoryImageScaleUtil.h>

      
#include <org/allbinary/logic/communication/log/ForcedLogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/media/ScaleProperties.h>

      
#include <org/allbinary/string/CommonLabels.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/animation/image/AnimationFactoryInitializationVisitor.h"


                //@Throws(Exception.constructor)
            
    auto BaseImageAnimationFactory::createFactoryBase(Image* image, std::vector<int32_t> sequenceArray, int32_t width, int32_t height, AnimationBehaviorFactory* animationBehaviorFactory) -> BaseImageAnimationFactory*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return new BaseImageAnimationFactory(image, sequenceArray, width, height, 0, 0, animationBehaviorFactory);
    
}


BaseImageAnimationFactory::BaseImageAnimationFactory(Image* image, std::vector<int32_t> sequenceArray, int32_t width, int32_t height, int32_t dx, int32_t dy, AnimationBehaviorFactory* animationBehaviorFactory) : animationFactoryImageScaleUtil(AnimationFactoryImageScaleUtil::getInstance()), scaleProperties(ScaleProperties::instance){
this->animationFactoryInitializationVisitor= new AnimationFactoryInitializationVisitor();
    
this->image= image;
    
this->animationFactoryInitializationVisitor->width= width;
    
this->animationFactoryInitializationVisitor->height= height;
    
this->animationBehaviorFactory= animationBehaviorFactory;
    
this->sequenceArray= sequenceArray;
    
this->animationFactoryInitializationVisitor->dx= dx;
    
this->animationFactoryInitializationVisitor->dy= dy;
    
}


                //@Throws(Exception.constructor)
            
    auto BaseImageAnimationFactory::getInstance(int32_t instanceId) -> Animation*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return NullAnimationFactory::getFactoryInstance()->getInstance(instanceId);;
    
}


    auto BaseImageAnimationFactory::getImage() -> Image*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->image;
    
}


    auto BaseImageAnimationFactory::getSequenceArray() -> std::vector<int32_t>{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->sequenceArray;
    
}


    auto BaseImageAnimationFactory::setInitialScale(ScaleProperties* scaleProperties) -> void{
this->scaleProperties= scaleProperties;
    

                        if(this->scaleProperties->shouldScale)
                        
                                    {
                                    this->scaleProperties->scaleWidth= static_cast<int32_t>((this->animationFactoryInitializationVisitor->width *this->scaleProperties->scaleX));
    
this->scaleProperties->scaleHeight= static_cast<int32_t>((this->animationFactoryInitializationVisitor->height *this->scaleProperties->scaleY));
    

                                    }
                                
                        else {
                            
                        }
                            
}


    auto BaseImageAnimationFactory::getAnimationFactoryInitializationVisitorP() -> AnimationFactoryInitializationVisitor*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->animationFactoryInitializationVisitor;
    
}


    auto BaseImageAnimationFactory::getScalePropertiesP() -> ScaleProperties*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->scaleProperties;
    
}


    auto BaseImageAnimationFactory::toString() -> std::string{

    CommonSeps* commonSeps = CommonSeps::getInstance();;
    

    CommonLabels* commonLabels = CommonLabels::getInstance();;
    

    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append(Object::toString());
    
stringBuffer->append(commonLabels->HEIGHT_LABEL);
    
stringBuffer->appendint(this->image->getHeight());
    
stringBuffer->append(commonSeps->SPACE);
    
stringBuffer->append(this->animationFactoryInitializationVisitor->toString());
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return stringBuffer->toString();;
    
}




        #endif //ORG_ALLBINARY_ANIMATION_IMAGE_BASEIMAGEANIMATIONFACTORY_CPP
