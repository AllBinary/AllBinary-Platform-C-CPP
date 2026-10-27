
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
        



        #ifndef ORG_ALLBINARY_MEDIA_IMAGE_IMAGECOPYUTIL_H
        #define ORG_ALLBINARY_MEDIA_IMAGE_IMAGECOPYUTIL_H

        
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
class Anchor;
class LogUtil;
class J2SEImmutableImage;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class ImageUtil;
class ImageCreationUtil;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class ImageCopyUtil
            : public virtual Object
         {

    private: static ImageCopyUtil* instance_owner();
    private: static ImageCopyUtil* instance;

    public: static ImageCopyUtil* getInstance();

    /*protected*/ public: LogUtil* logUtil;

    private: ImageUtil* imageUtil;

    private: ImageCreationUtil* imageCreationUtil;

private: ImageCopyUtil();

    private: int32_t anchor;

                //@Throws(Exception.constructor)
            
    public: Image* createImageForRotation(Image* originalImage);

                //@Throws(Exception.constructor)
            
    public: Image* createImage(Image* originalImage);

                //@Throws(Exception.constructor)
            
    public: Image* createImageScale(Image* originalImage, float canvasScale, bool resize);

};

            


        #endif //ORG_ALLBINARY_MEDIA_IMAGE_IMAGECOPYUTIL_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_MEDIA_IMAGE_IMAGECOPYUTIL_H_COMPLETE)
        #define ORG_ALLBINARY_MEDIA_IMAGE_IMAGECOPYUTIL_H_COMPLETE
        #if __has_include(<java/awt/image/BufferedImage.h>)
#include <java/awt/image/BufferedImage.h>
#endif
#if __has_include(<javax/microedition/lcdui/Image.h>)
#include <javax/microedition/lcdui/Image.h>
#endif
#if __has_include(<org/allbinary/graphics/Anchor.h>)
#include <org/allbinary/graphics/Anchor.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/microemu/device/j2se/J2SEImmutableImage.h>)
#include <org/microemu/device/j2se/J2SEImmutableImage.h>
#endif
#if __has_include("org/allbinary/media/image/ImageUtil.h")
#include "org/allbinary/media/image/ImageUtil.h"
#endif
#if __has_include("org/allbinary/media/image/ImageCreationUtil.h")
#include "org/allbinary/media/image/ImageCreationUtil.h"
#endif

        #endif
    
