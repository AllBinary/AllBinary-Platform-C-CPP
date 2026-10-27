
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
        



        #ifndef ORG_ALLBINARY_ANIMATION_TEXT_CUSTOMTEXTANIMATIONFACTORY_CPP
        #define ORG_ALLBINARY_ANIMATION_TEXT_CUSTOMTEXTANIMATIONFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/animation/text/CustomTextAnimationFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Font.h>

      
#include <org/allbinary/animation/Animation.h>

      
#include <org/allbinary/animation/AnimationBehaviorFactory.h>

      
#include <org/allbinary/animation/AnimationInterfaceFactoryInterface.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/graphics/color/BasicColorFactory.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/media/ScaleProperties.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/animation/text/CustomTextAnimation.h"
#include "org/allbinary/animation/text/AdjustCustomTextAnimation.h"


    auto CustomTextAnimationFactory::createDXY(std::string text, int32_t fontSize, int32_t dx, int32_t dy, AnimationBehaviorFactory* animationBehaviorFactory) -> CustomTextAnimationFactory*{

    CustomTextAnimationFactory* customTextAnimationFactory = new CustomTextAnimationFactory(text, fontSize, animationBehaviorFactory);;
    
customTextAnimationFactory->dx= dx;
    
customTextAnimationFactory->dy= dy;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return customTextAnimationFactory;
    
}


CustomTextAnimationFactory::CustomTextAnimationFactory(std::string text, int32_t fontSize, AnimationBehaviorFactory* animationBehaviorFactory) : logUtil(LogUtil::getInstance()), basicColor(BasicColorFactory::getInstance()->BLACK){
this->scaleProperties= new ScaleProperties();
    
this->text= text;
    
this->scaleProperties->scaleHeight= static_cast<int32_t>(fontSize) -(fontSize /4);
    
this->initScaleHeight= this->scaleProperties->scaleHeight;
    
this->animationBehaviorFactory= animationBehaviorFactory;
    
this->font= Font::getFont(Font::FACE_SYSTEM, Font::STYLE_PLAIN, this->initScaleHeight);
    
}


                //@Throws(Exception.constructor)
            
    auto CustomTextAnimationFactory::getInstance(int32_t instanceId) -> Animation*{

    CustomTextAnimation* customTextAnimation;;
    

                        if(this->dx != 0 || this->dy != 0)
                        
                                    {
                                    customTextAnimation= new AdjustCustomTextAnimation(this->text, this->scaleProperties->scaleHeight, this->dx, this->dy, this->animationBehaviorFactory->getOrCreateInstance());
    

                                    }
                                
                        else {
                            customTextAnimation= new CustomTextAnimation(this->text, this->scaleProperties->scaleHeight, this->animationBehaviorFactory->getOrCreateInstance());
    

                        }
                            
customTextAnimation->setBasicColorP(this->basicColor);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return customTextAnimation;
    
}


    auto CustomTextAnimationFactory::setInitialScale(ScaleProperties* scaleProperties) -> void{
}


    auto CustomTextAnimationFactory::getWidth() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->font->stringWidth(this->text);;
    
}


    auto CustomTextAnimationFactory::getHeight() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->font->getHeight();;
    
}




        #endif //ORG_ALLBINARY_ANIMATION_TEXT_CUSTOMTEXTANIMATIONFACTORY_CPP
