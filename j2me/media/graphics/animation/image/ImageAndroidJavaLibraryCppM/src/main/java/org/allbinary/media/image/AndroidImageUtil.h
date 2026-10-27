
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <hilog/log.h>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class Bitmap;
class Canvas;
class Color;
class Matrix;
class Paint;
class Image;
class AndroidImageInterface;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class AndroidImageUtil
            : public virtual Object
         {

    private: static AndroidImageUtil* instance_owner();
    private: static AndroidImageUtil* instance;

    public: static AndroidImageUtil* getInstance();


            
    public: AndroidImageUtil();
        
    public: void paintBitmap(Bitmap* bitmap, Bitmap* originalBitmap, Paint* paint);

    public: void paint(Image* image, Image* originalImage, Paint* paint);

    public: void rotate(Image* image, Image* originalImage, Matrix* matrix, Paint* paint);

};

            


        #endif //ORG_ALLBINARY_MEDIA_IMAGE_ANDROIDIMAGEUTIL_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_MEDIA_IMAGE_ANDROIDIMAGEUTIL_H_COMPLETE)
        #define ORG_ALLBINARY_MEDIA_IMAGE_ANDROIDIMAGEUTIL_H_COMPLETE
        #if __has_include(<android/graphics/Bitmap.h>)
#include <android/graphics/Bitmap.h>
#endif
#if __has_include(<android/graphics/Canvas.h>)
#include <android/graphics/Canvas.h>
#endif
#if __has_include(<android/graphics/Color.h>)
#include <android/graphics/Color.h>
#endif
#if __has_include(<android/graphics/Matrix.h>)
#include <android/graphics/Matrix.h>
#endif
#if __has_include(<android/graphics/Paint.h>)
#include <android/graphics/Paint.h>
#endif
#if __has_include(<javax/microedition/lcdui/Image.h>)
#include <javax/microedition/lcdui/Image.h>
#endif
#if __has_include(<org/microemu/android/device/AndroidImageInterface.h>)
#include <org/microemu/android/device/AndroidImageInterface.h>
#endif

        #endif
    
