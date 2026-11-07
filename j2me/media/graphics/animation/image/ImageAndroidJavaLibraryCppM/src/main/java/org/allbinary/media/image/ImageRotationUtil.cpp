
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

      
#include <org/allbinary/graphics/Anchor.h>

      
#include <android/graphics/Bitmap.h>

      
#include <android/graphics/Canvas.h>

      
#include <android/graphics/Matrix.h>

      
#include <org/microemu/android/device/AndroidImageInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/media/image/ImageCreationUtil.h"

auto ImageRotationUtil::instance_owner() -> ImageRotationUtil* { static std::unique_ptr<ImageRotationUtil> value(new ImageRotationUtil()); return value.get(); }
ImageRotationUtil* ImageRotationUtil::instance = ImageRotationUtil::instance_owner();

    auto ImageRotationUtil::getInstance() -> ImageRotationUtil*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return ImageRotationUtil::instance;
    
}


ImageRotationUtil::ImageRotationUtil() : matrix(new Matrix()), anchor(Anchor::TOP_LEFT){
}


                //@Throws(Exception.constructor)
            
    auto ImageRotationUtil::createRotatedImage(Image* originalImage, int32_t rotationInDegrees) -> Image*{

    Image* image = ImageCreationUtil::getInstance()->createImageWH(originalImage->getWidth(), originalImage->getHeight());;
    

                        if(image->isMutable())
                        
                                    {
                                    
    Bitmap* bitmap = (dynamic_cast<AndroidImageInterface*>(image))->getBitmap();;
    

    int32_t width = bitmap->getWidth();;
    

    int32_t height = bitmap->getHeight();;
    
this->matrix->setRotate(rotationInDegrees, (width>>1), (height>>1));
    

    Canvas* canvas = (dynamic_cast<AndroidImageInterface*>(image))->getCanvas();;
    
canvas->concat(this->matrix);
    
image->getGraphics()->drawImage(originalImage, 0, 0, this->anchor);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return image;
    

                                    }
                                
                        else {
                            


                            throw Exception("Not Mutable");
                    

                        }
                            
}




        #endif //ORG_ALLBINARY_MEDIA_IMAGE_IMAGEROTATIONUTIL_CPP
