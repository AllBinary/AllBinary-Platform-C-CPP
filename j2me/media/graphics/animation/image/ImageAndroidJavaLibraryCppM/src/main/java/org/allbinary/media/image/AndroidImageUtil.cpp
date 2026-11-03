
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
        



        #ifndef ORG_ALLBINARY_MEDIA_IMAGE_ANDROIDIMAGEUTIL_CPP
        #define ORG_ALLBINARY_MEDIA_IMAGE_ANDROIDIMAGEUTIL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/media/image/AndroidImageUtil.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <android/graphics/Bitmap.h>

      
#include <android/graphics/Canvas.h>

      
#include <android/graphics/Color.h>

      
#include <android/graphics/Matrix.h>

      
#include <android/graphics/Paint.h>

      
#include <javax/microedition/lcdui/Image.h>

      
#include <org/microemu/android/device/AndroidImageInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

AndroidImageUtil::AndroidImageUtil() {
        }
        auto AndroidImageUtil::instance_owner() -> AndroidImageUtil* { static std::unique_ptr<AndroidImageUtil> value(new AndroidImageUtil()); return value.get(); }
AndroidImageUtil* AndroidImageUtil::instance = AndroidImageUtil::instance_owner();

    auto AndroidImageUtil::getInstance() -> AndroidImageUtil*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return AndroidImageUtil::instance;
    
}


    auto AndroidImageUtil::paintBitmap(Bitmap* bitmap, Bitmap* originalBitmap, Paint* paint) -> void{
bitmap->eraseColor(Color::TRANSPARENT);
    

    Canvas* canvas = new android::graphics::Canvas();;
    
canvas->setBitmap(bitmap);
    
canvas->drawBitmap(originalBitmap, 0.0, 0.0, paint);
    
}


    auto AndroidImageUtil::paint(Image* image, Image* originalImage, Paint* paint) -> void{

    AndroidImageInterface* androidImage = dynamic_cast<AndroidImageInterface*>(image);;
    
androidImage->getBitmap()->eraseColor(Color::TRANSPARENT);
    

    Canvas* canvas = androidImage->getCanvas();;
    

    AndroidImageInterface* originalAndroidImage = dynamic_cast<AndroidImageInterface*>(originalImage);;
    
canvas->drawBitmap(originalAndroidImage->getBitmap(), 0.0, 0.0, paint);
    
}


    auto AndroidImageUtil::rotate(Image* image, Image* originalImage, Matrix* matrix, Paint* paint) -> void{

    AndroidImageInterface* androidImage = dynamic_cast<AndroidImageInterface*>(image);;
    
androidImage->getBitmap()->eraseColor(Color::TRANSPARENT);
    

    Canvas* canvas = androidImage->getCanvas();;
    
canvas->concat(matrix);
    

    AndroidImageInterface* originalAndroidImage = dynamic_cast<AndroidImageInterface*>(originalImage);;
    
canvas->drawBitmap(originalAndroidImage->getBitmap(), 0.0, 0.0, paint);
    
}




        #endif //ORG_ALLBINARY_MEDIA_IMAGE_ANDROIDIMAGEUTIL_CPP
