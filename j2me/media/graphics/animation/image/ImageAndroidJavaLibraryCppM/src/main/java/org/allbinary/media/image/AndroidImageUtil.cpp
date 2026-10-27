
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
        



            #include <hilog/log.h>
        
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
        
class AndroidImageUtil
            : public Object
         {

    private: static AndroidImageUtil* instance() { static std::unique_ptr<AndroidImageUtil> value(new AndroidImageUtil()); return value.get(); }

    public: static AndroidImageUtil* getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return AndroidImageUtil::instance();
    
}


    public: void paintBitmap(Bitmap* bitmap, Bitmap* originalBitmap, Paint* paint){
bitmap->eraseColor(Color::TRANSPARENT);
    

    Canvas* canvas = new android::graphics::Canvas();;
    
canvas->setBitmap(bitmap);
    
canvas->drawBitmap(originalBitmap, 0.0, 0.0, paint);
    
}


    public: void paint(Image* image, Image* originalImage, Paint* paint){

    AndroidImageInterface* androidImage = dynamic_cast<AndroidImageInterface*>(image);;
    
androidImage->getBitmap()->eraseColor(Color::TRANSPARENT);
    

    Canvas* canvas = androidImage->getCanvas();;
    

    AndroidImageInterface* originalAndroidImage = dynamic_cast<AndroidImageInterface*>(originalImage);;
    
canvas->drawBitmap(originalAndroidImage->getBitmap(), 0.0, 0.0, paint);
    
}


    public: void rotate(Image* image, Image* originalImage, Matrix* matrix, Paint* paint){

    AndroidImageInterface* androidImage = dynamic_cast<AndroidImageInterface*>(image);;
    
androidImage->getBitmap()->eraseColor(Color::TRANSPARENT);
    

    Canvas* canvas = androidImage->getCanvas();;
    
canvas->concat(matrix);
    

    AndroidImageInterface* originalAndroidImage = dynamic_cast<AndroidImageInterface*>(originalImage);;
    
canvas->drawBitmap(originalAndroidImage->getBitmap(), 0.0, 0.0, paint);
    
}


};

            

