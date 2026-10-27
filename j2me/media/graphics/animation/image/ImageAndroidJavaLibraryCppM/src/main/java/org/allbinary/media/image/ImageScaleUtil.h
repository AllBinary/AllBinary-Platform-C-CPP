
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
        



        #ifndef ORG_ALLBINARY_MEDIA_IMAGE_IMAGESCALEUTIL_H
        #define ORG_ALLBINARY_MEDIA_IMAGE_IMAGESCALEUTIL_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Float.h"
        
class Bitmap;
class Canvas;
class Matrix;
class Image;
class NullImage;
class Anchor;
class ImageCache;
class LogUtil;
class CommonStrings;
class BasicArrayList;
class BasicArrayListD;
class AndroidImageInterface;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class ImageScaleUtil
            : public virtual Object
         {

    private: static ImageScaleUtil* instance_owner();
    private: static ImageScaleUtil* instance;

    public: static ImageScaleUtil* getInstance();

    /*protected*/ public: LogUtil* logUtil;

private: ImageScaleUtil();

    private: CommonStrings* commonStrings;

    private: int32_t anchor;

    private: BasicArrayList* imageBasicArrayList;

    private: BasicArrayList* scaledImageBasicArrayList;

    private: BasicArrayList* scaleXBasicArrayList;

    private: BasicArrayList* scaleYBasicArrayList;

                //@Throws(Exception.constructor)
            
    public: Image* createImage2(ImageCache* imageCache, Image* originalImage, float scaleNominatorX, float scaleDenominatorX, float scaleNominatorY, float scaleDenominatorY, bool cached);

                //@Throws(Exception.constructor)
            
    public: Image* createImage3(ImageCache* imageCache, Image* originalImage, float scaleNominatorX, float scaleDenominatorX, float scaleNominatorY, float scaleDenominatorY, bool cached, bool mutable_);

                //@Throws(Exception.constructor)
            
    public: Image* createImage(ImageCache* imageCache, Image* originalImage, float scaleX, float scaleY, bool cached);

                //@Throws(Exception.constructor)
            
    private: Image* getScaledImage(ImageCache* imageCache, Image* originalImage, float scaleX, float scaleY, int32_t width, int32_t height, bool cached);

    private: void scale(Image* image, Matrix* matrix, float scaleX, float scaleY);

};

            


        #endif //ORG_ALLBINARY_MEDIA_IMAGE_IMAGESCALEUTIL_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_MEDIA_IMAGE_IMAGESCALEUTIL_H_COMPLETE)
        #define ORG_ALLBINARY_MEDIA_IMAGE_IMAGESCALEUTIL_H_COMPLETE
        #if __has_include(<android/graphics/Bitmap.h>)
#include <android/graphics/Bitmap.h>
#endif
#if __has_include(<android/graphics/Canvas.h>)
#include <android/graphics/Canvas.h>
#endif
#if __has_include(<android/graphics/Matrix.h>)
#include <android/graphics/Matrix.h>
#endif
#if __has_include(<javax/microedition/lcdui/Image.h>)
#include <javax/microedition/lcdui/Image.h>
#endif
#if __has_include(<javax/microedition/lcdui/NullImage.h>)
#include <javax/microedition/lcdui/NullImage.h>
#endif
#if __has_include(<org/allbinary/graphics/Anchor.h>)
#include <org/allbinary/graphics/Anchor.h>
#endif
#if __has_include(<org/allbinary/image/ImageCache.h>)
#include <org/allbinary/image/ImageCache.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayListD.h>)
#include <org/allbinary/util/BasicArrayListD.h>
#endif
#if __has_include(<org/microemu/android/device/AndroidImageInterface.h>)
#include <org/microemu/android/device/AndroidImageInterface.h>
#endif

        #endif
    
