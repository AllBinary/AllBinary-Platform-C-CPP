
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
        



        #ifndef ORG_ALLBINARY_MEDIA_IMAGE_ANDROIDIMAGEUTIL_H
        #define ORG_ALLBINARY_MEDIA_IMAGE_ANDROIDIMAGEUTIL_H

            #include <hilog/log.h>
        
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

    private: static AndroidImageUtil instance() { return AndroidImageUtil(); }

    public: static AndroidImageUtil getInstance();

    public: void paintBitmap(Bitmap bitmap, Bitmap originalBitmap, Paint paint);

    public: void paint(Image image, Image originalImage, Paint paint);

    public: void rotate(Image image, Image originalImage, Matrix matrix, Paint paint);

};

            


        #endif //ORG_ALLBINARY_MEDIA_IMAGE_ANDROIDIMAGEUTIL_H
