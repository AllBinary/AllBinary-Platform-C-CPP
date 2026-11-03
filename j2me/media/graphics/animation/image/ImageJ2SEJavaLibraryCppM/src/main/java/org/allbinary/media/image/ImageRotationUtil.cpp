
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
        
#include <java/awt/image/BufferedImage.h>

      
#include <javax/microedition/lcdui/Image.h>

      
#include <org/allbinary/logic/communication/log/PreLogUtil.h>

      
#include <org/microemu/device/j2se/J2SEImmutableImage.h>

      
#include <org/microemu/device/j2se/J2SEMutableImage.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/media/image/ImageJ2SERotationUtil.h"
#include "org/allbinary/media/image/ImageCreationUtil.h"

auto ImageRotationUtil::instance_owner() -> ImageRotationUtil* { static std::unique_ptr<ImageRotationUtil> value(new ImageRotationUtil()); return value.get(); }
ImageRotationUtil* ImageRotationUtil::instance = ImageRotationUtil::instance_owner();

    auto ImageRotationUtil::getInstance() -> ImageRotationUtil*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return ImageRotationUtil::instance;
    
}


ImageRotationUtil::ImageRotationUtil() : imageJ2SERotationUtil(ImageJ2SERotationUtil::getInstance()){
}


    auto ImageRotationUtil::rotateImage(Image* originalImage, Image* image, int32_t totalAngle) -> void{

                        if(image->isMutable())
                        
                                    {
                                    
    J2SEMutableImage* j2seImage = dynamic_cast<J2SEMutableImage*>(image);;
    

    BufferedImage* newBufferedImage = dynamic_cast<BufferedImage*>(j2seImage->getImage());;
    

    java::awt::Image* originalAwtImage = 
                null
            ;;
    

                        if(originalImage->isMutable())
                        
                                    {
                                    
    J2SEMutableImage* originalJ2SEImage = dynamic_cast<J2SEMutableImage*>(originalImage);;
    
originalAwtImage= dynamic_cast<java::awt::Image*>(originalJ2SEImage->getImage());
    

                                    }
                                
                        else {
                            
    J2SEImmutableImage* originalJ2SEImage = dynamic_cast<J2SEImmutableImage*>(originalImage);;
    
originalAwtImage= dynamic_cast<java::awt::Image*>(originalJ2SEImage->getImage());
    

                        }
                            
this->imageJ2SERotationUtil->rotateImage(originalAwtImage, newBufferedImage, totalAngle);
    

                                    }
                                
                        else {
                            PreLogUtil::putOE("Not Mutable", this, "getRotatedImage", new Exception());
    

                        }
                            
}


                //@Throws(Exception.constructor)
            
    auto ImageRotationUtil::createRotatedImage(Image* originalImage, int32_t rotationInDegrees) -> Image*{

    Image* image = ImageCreationUtil::getInstance()->createImageWH(originalImage->getWidth(), originalImage->getHeight());;
    

                        if(image->isMutable())
                        
                                    {
                                    
    java::awt::Image* originalAwtImage = 
                null
            ;;
    

                        if(originalImage->isMutable())
                        
                                    {
                                    
    J2SEMutableImage* originalJ2SEImage = dynamic_cast<J2SEMutableImage*>(originalImage);;
    
originalAwtImage= dynamic_cast<java::awt::Image*>(originalJ2SEImage->getImage());
    

                                    }
                                
                        else {
                            
    J2SEImmutableImage* originalJ2SEImage = dynamic_cast<J2SEImmutableImage*>(originalImage);;
    
originalAwtImage= dynamic_cast<java::awt::Image*>(originalJ2SEImage->getImage());
    

                        }
                            

    J2SEMutableImage* j2seImage = dynamic_cast<J2SEMutableImage*>(image);;
    

    BufferedImage* newBufferedImage = dynamic_cast<BufferedImage*>(j2seImage->getImage());;
    

    BufferedImage* bufferedImage = this->imageJ2SERotationUtil->createRotatedImage(originalAwtImage, newBufferedImage, rotationInDegrees);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return image;
    

                                    }
                                
                        else {
                            


                            throw Exception("Not Mutable");
                    

                        }
                            
}




        #endif //ORG_ALLBINARY_MEDIA_IMAGE_IMAGEROTATIONUTIL_CPP
