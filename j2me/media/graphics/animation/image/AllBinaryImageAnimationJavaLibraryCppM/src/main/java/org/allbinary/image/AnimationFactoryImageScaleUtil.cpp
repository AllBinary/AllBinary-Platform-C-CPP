
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
        



        #ifndef ORG_ALLBINARY_IMAGE_ANIMATIONFACTORYIMAGESCALEUTIL_CPP
        #define ORG_ALLBINARY_IMAGE_ANIMATIONFACTORYIMAGESCALEUTIL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/image/AnimationFactoryImageScaleUtil.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Image.h>

      
#include <org/allbinary/animation/image/AnimationFactoryInitializationVisitor.h>

      
#include <org/allbinary/animation/image/BaseImageAnimationFactory.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/media/ScaleProperties.h>

      
#include <org/allbinary/media/image/ImageJ2MEScaleUtil.h>

      
#include <org/allbinary/string/CommonLabels.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

AnimationFactoryImageScaleUtil::AnimationFactoryImageScaleUtil() : imageScaleUtil(ImageJ2MEScaleUtil::getInstance()) {
        }
        auto AnimationFactoryImageScaleUtil::instance_owner() -> AnimationFactoryImageScaleUtil* { static std::unique_ptr<AnimationFactoryImageScaleUtil> value(new AnimationFactoryImageScaleUtil()); return value.get(); }
AnimationFactoryImageScaleUtil* AnimationFactoryImageScaleUtil::instance = AnimationFactoryImageScaleUtil::instance_owner();

    auto AnimationFactoryImageScaleUtil::getInstance() -> AnimationFactoryImageScaleUtil*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return AnimationFactoryImageScaleUtil::instance;
    
}


                //@Throws(Exception.constructor)
            
    auto AnimationFactoryImageScaleUtil::createImage(Image* image, int32_t width, int32_t height, int32_t scaleWidth, int32_t scaleHeight) -> Image*{

    Image* scaledImage;;
    

                        if(scaleWidth != 0 && scaleHeight != 0)
                        
                                    {
                                    
    float scaleX = (scaleWidth) /(width);;
    

    float scaleY = (scaleHeight) /(height);;
    

                        if((scaleX == 1.0 && scaleY == 1.0) || (scaleX == 0.0 || scaleY == 0.0))
                        
                                    {
                                    scaledImage= image;
    

                                    }
                                
                        else {
                            
    int32_t scaledWidth = static_cast<int32_t>((scaleX *width));;
    

    int32_t scaledHeight = static_cast<int32_t>((scaleY *height));;
    
scaledImage= this->imageScaleUtil->scale(image, scaledWidth, scaledHeight);
    

                        }
                            

                                    }
                                
                        else {
                            scaledImage= image;
    

                        }
                            



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return scaledImage;
    
}


                //@Throws(Exception.constructor)
            
    auto AnimationFactoryImageScaleUtil::processAdjust(BaseImageAnimationFactory* baseImageAnimationFactory) -> void{

    ScaleProperties* scaleProperties = baseImageAnimationFactory->getScalePropertiesP();;
    

                        if(scaleProperties->scaleWidth != 0 && scaleProperties->scaleHeight != 0)
                        
                                    {
                                    
    AnimationFactoryInitializationVisitor* animationFactoryInitializationVisitor = baseImageAnimationFactory->getAnimationFactoryInitializationVisitorP();;
    

    float scaleX = (scaleProperties->scaleWidth) /(animationFactoryInitializationVisitor->width);;
    

    float scaleY = (scaleProperties->scaleHeight) /(animationFactoryInitializationVisitor->height);;
    

                        if((scaleX == 1.0 && scaleY == 1.0) || (scaleX == 0.0 || scaleY == 0.0))
                        
                                    {
                                    
                                    }
                                
                        else {
                            animationFactoryInitializationVisitor->dx= static_cast<int32_t>((animationFactoryInitializationVisitor->originalDx *scaleX));
    
animationFactoryInitializationVisitor->dy= static_cast<int32_t>((animationFactoryInitializationVisitor->originalDy *scaleY));
    

                        }
                            

                                    }
                                
                        else {
                            
                        }
                            
}




        #endif //ORG_ALLBINARY_IMAGE_ANIMATIONFACTORYIMAGESCALEUTIL_CPP
