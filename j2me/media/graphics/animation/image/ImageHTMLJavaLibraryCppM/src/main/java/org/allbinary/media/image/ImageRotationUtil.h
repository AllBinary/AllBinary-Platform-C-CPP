
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
        
            #include "java/lang/Math.h"
        
class Image;
class PlaynImmutableImage;
class PlaynMutableImage;
class CanvasImage;
class CanvasSurface;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class ImageCreationUtil;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class ImageRotationUtil
            : public virtual Object
         {

    private: static ImageRotationUtil* instance_owner();
    private: static ImageRotationUtil* instance;

    public: static ImageRotationUtil* getInstance();

private: ImageRotationUtil();

                //@Throws(Exception.constructor)
            
    public: Image* createRotatedImage(Image* originalImage, int32_t rotationInDegrees);

};

            


        #endif //ORG_ALLBINARY_MEDIA_IMAGE_IMAGEROTATIONUTIL_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_MEDIA_IMAGE_IMAGEROTATIONUTIL_H_COMPLETE)
        #define ORG_ALLBINARY_MEDIA_IMAGE_IMAGEROTATIONUTIL_H_COMPLETE
        #if __has_include(<javax/microedition/lcdui/Image.h>)
#include <javax/microedition/lcdui/Image.h>
#endif
#if __has_include(<org/microemu/device/playn/PlaynImmutableImage.h>)
#include <org/microemu/device/playn/PlaynImmutableImage.h>
#endif
#if __has_include(<org/microemu/device/playn/PlaynMutableImage.h>)
#include <org/microemu/device/playn/PlaynMutableImage.h>
#endif
#if __has_include(<playn/core/CanvasImage.h>)
#include <playn/core/CanvasImage.h>
#endif
#if __has_include(<playn/core/CanvasSurface.h>)
#include <playn/core/CanvasSurface.h>
#endif
#if __has_include("org/allbinary/media/image/ImageCreationUtil.h")
#include "org/allbinary/media/image/ImageCreationUtil.h"
#endif

        #endif
    
