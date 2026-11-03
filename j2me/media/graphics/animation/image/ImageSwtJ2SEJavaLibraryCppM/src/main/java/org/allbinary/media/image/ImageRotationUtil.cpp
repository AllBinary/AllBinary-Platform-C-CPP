
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
        



        #ifndef ORG_ALLBINARY_MEDIA_IMAGE_IMAGEROTATIONUTIL_CPP
        #define ORG_ALLBINARY_MEDIA_IMAGE_IMAGEROTATIONUTIL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/media/image/ImageRotationUtil.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Image.h>

      
#include <org/allbinary/game/configuration/feature/Features.h>

      
#include <org/allbinary/graphics/opengles/OpenGLFeatureFactory.h>

      
#include <org/allbinary/image/opengles/OpenGLESImage.h>

      
#include <org/allbinary/logic/communication/log/PreLogUtil.h>

      
#include <org/eclipse/swt/graphics/GC.h>

      
#include <org/microemu/device/swt/SwtImmutableImage.h>

      
#include <org/microemu/device/swt/SwtMutableImage.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/media/image/ImageSwtRotationUtil.h"

auto ImageRotationUtil::instance_owner() -> ImageRotationUtil* { static std::unique_ptr<ImageRotationUtil> value(new ImageRotationUtil()); return value.get(); }
ImageRotationUtil* ImageRotationUtil::instance = ImageRotationUtil::instance_owner();

    auto ImageRotationUtil::getInstance() -> ImageRotationUtil*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return ImageRotationUtil::instance;
    
}


ImageRotationUtil::ImageRotationUtil() : imageSwtRotationUtil(ImageSwtRotationUtil::getInstance()), features(Features::getInstance()){
}


    auto ImageRotationUtil::rotateImage(Image* originalImage, Image* image, int32_t totalAngle) -> void{

    Image* originalImage2 = originalImage;;
    

                        if(this->features->isFeature(OpenGLFeatureFactory::getInstance()->OPENGL))
                        
                                    {
                                    
                        if(image->getType() >= OpenGLESImage::TYPE)
                        
                                    {
                                    
    OpenGLESImage* openGLESImage = (dynamic_cast<OpenGLESImage*>(image));;
    
openGLESImage->openGLESImageProperties->angle= totalAngle;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return ;
    

                                    }
                                
                        else {
                            PreLogUtil::put(JavaString::valueOf(JavaString::valueOf(JavaString::valueOf("OpenGL but image is: ") +JavaString::valueOf(image)) +JavaString::valueOf(" type: ")) +JavaString::valueOf(image->getType()), this, "rotateImage");
    

                        }
                            

                                    }
                                

    org::eclipse::swt::graphics::Image* originalSwtImage = (dynamic_cast<org::eclipse::swt::graphics::Image*>(originalImage2->getImage()));;
    

    GC* gc = 
                null
            ;;
    

    org::eclipse::swt::graphics::Image* copySwtImage = 
                null
            ;;
    

                        if(image->isMutable())
                        
                                    {
                                    
    SwtMutableImage* swtImage = dynamic_cast<SwtMutableImage*>(image);;
    
copySwtImage= dynamic_cast<org::eclipse::swt::graphics::Image*>(swtImage->getImage());
    
gc= swtImage->getGc();
    
this->imageSwtRotationUtil->rotateImage(originalSwtImage, copySwtImage, gc, totalAngle);
    

                                    }
                                
                        else {
                            PreLogUtil::put(JavaString::valueOf("No rotation for: ") +JavaString::valueOf(image->toString()), this, "rotateImage");
    

                        }
                            
}


                //@Throws(Exception.constructor)
            
    auto ImageRotationUtil::createRotatedImage(Image* originalImage, int32_t rotationInDegrees) -> Image*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return originalImage;
    
}




        #endif //ORG_ALLBINARY_MEDIA_IMAGE_IMAGEROTATIONUTIL_CPP
