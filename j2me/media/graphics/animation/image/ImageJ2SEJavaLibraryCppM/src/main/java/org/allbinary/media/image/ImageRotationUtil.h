
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
        
#include <java/awt/image/BufferedImage.h>
class Image;
class PreLogUtil;
class J2SEImmutableImage;
class J2SEMutableImage;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class ImageJ2SERotationUtil;
class ImageCreationUtil;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class ImageRotationUtil
            : public virtual Object
         {

    private: static ImageRotationUtil* instance_owner();
    private: static ImageRotationUtil* instance;

    public: static ImageRotationUtil* getInstance();

    private: ImageJ2SERotationUtil* imageJ2SERotationUtil;

private: ImageRotationUtil();

    public: void rotateImage(Image* originalImage, Image* image, int32_t totalAngle);

                //@Throws(Exception.constructor)
            
    public: Image* createRotatedImage(Image* originalImage, int32_t rotationInDegrees);

};

            


        #endif //ORG_ALLBINARY_MEDIA_IMAGE_IMAGEROTATIONUTIL_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_MEDIA_IMAGE_IMAGEROTATIONUTIL_H_COMPLETE)
        #define ORG_ALLBINARY_MEDIA_IMAGE_IMAGEROTATIONUTIL_H_COMPLETE
        #if __has_include(<java/awt/image/BufferedImage.h>)
#include <java/awt/image/BufferedImage.h>
#endif
#if __has_include(<javax/microedition/lcdui/Image.h>)
#include <javax/microedition/lcdui/Image.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/PreLogUtil.h>)
#include <org/allbinary/logic/communication/log/PreLogUtil.h>
#endif
#if __has_include(<org/microemu/device/j2se/J2SEImmutableImage.h>)
#include <org/microemu/device/j2se/J2SEImmutableImage.h>
#endif
#if __has_include(<org/microemu/device/j2se/J2SEMutableImage.h>)
#include <org/microemu/device/j2se/J2SEMutableImage.h>
#endif
#if __has_include("org/allbinary/media/image/ImageJ2SERotationUtil.h")
#include "org/allbinary/media/image/ImageJ2SERotationUtil.h"
#endif
#if __has_include("org/allbinary/media/image/ImageCreationUtil.h")
#include "org/allbinary/media/image/ImageCreationUtil.h"
#endif

        #endif
    
