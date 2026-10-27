
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
        



        #ifndef ORG_ALLBINARY_MEDIA_IMAGE_IMAGEROTATIONUTIL_H
        #define ORG_ALLBINARY_MEDIA_IMAGE_IMAGEROTATIONUTIL_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class Image;
class Anchor;
class Bitmap;
class Canvas;
class Matrix;
class AndroidImageInterface;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class ImageCreationUtil;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class ImageRotationUtil
            : public virtual Object
         {

    private: static ImageRotationUtil* instance_owner();
    private: static ImageRotationUtil* instance;

    public: static ImageRotationUtil* getInstance();

    private: Matrix* matrix;

private: ImageRotationUtil();

    private: int32_t anchor;

                //@Throws(Exception.constructor)
            
    public: Image* createRotatedImage(Image* originalImage, int32_t rotationInDegrees);

};

            


        #endif //ORG_ALLBINARY_MEDIA_IMAGE_IMAGEROTATIONUTIL_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_MEDIA_IMAGE_IMAGEROTATIONUTIL_H_COMPLETE)
        #define ORG_ALLBINARY_MEDIA_IMAGE_IMAGEROTATIONUTIL_H_COMPLETE
        #if __has_include(<javax/microedition/lcdui/Image.h>)
#include <javax/microedition/lcdui/Image.h>
#endif
#if __has_include(<org/allbinary/graphics/Anchor.h>)
#include <org/allbinary/graphics/Anchor.h>
#endif
#if __has_include(<android/graphics/Bitmap.h>)
#include <android/graphics/Bitmap.h>
#endif
#if __has_include(<android/graphics/Canvas.h>)
#include <android/graphics/Canvas.h>
#endif
#if __has_include(<android/graphics/Matrix.h>)
#include <android/graphics/Matrix.h>
#endif
#if __has_include(<org/microemu/android/device/AndroidImageInterface.h>)
#include <org/microemu/android/device/AndroidImageInterface.h>
#endif
#if __has_include("org/allbinary/media/image/ImageCreationUtil.h")
#include "org/allbinary/media/image/ImageCreationUtil.h"
#endif

        #endif
    
