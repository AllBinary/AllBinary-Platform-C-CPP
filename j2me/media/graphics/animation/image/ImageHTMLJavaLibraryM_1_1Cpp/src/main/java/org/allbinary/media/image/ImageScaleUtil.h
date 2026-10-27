
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
        
class Image;
class ImageCache;
class PlaynImmutableImage;
class PlaynMutableImage;
class CanvasImage;
class CanvasSurface;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class ImageCreationUtil;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class ImageScaleUtil
            : public virtual Object
         {

    private: static ImageScaleUtil* instance_owner();
    private: static ImageScaleUtil* instance;

    public: static ImageScaleUtil* getInstance();

private: ImageScaleUtil();

                //@Throws(Exception.constructor)
            
    public: Image* createImage2(ImageCache* imageCache, Image* originalImage, float scaleNominatorX, float scaleDenominatorX, float scaleNominatorY, float scaleDenominatorY, bool cached);

                //@Throws(Exception.constructor)
            
    public: Image* createImage3(ImageCache* imageCache, Image* originalImage, float scaleNominatorX, float scaleDenominatorX, float scaleNominatorY, float scaleDenominatorY, bool cached, bool mutable_);

                //@Throws(Exception.constructor)
            
    public: Image* createImage(ImageCache* imageCache, Image* originalImage, float scaleX, float scaleY, bool cached);

                //@Throws(Exception.constructor)
            
    public: Image* createImageInternal(Image* originalImage, float scaleX, float scaleY);

};

            


        #endif //ORG_ALLBINARY_MEDIA_IMAGE_IMAGESCALEUTIL_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_MEDIA_IMAGE_IMAGESCALEUTIL_H_COMPLETE)
        #define ORG_ALLBINARY_MEDIA_IMAGE_IMAGESCALEUTIL_H_COMPLETE
        #if __has_include(<javax/microedition/lcdui/Image.h>)
#include <javax/microedition/lcdui/Image.h>
#endif
#if __has_include(<org/allbinary/image/ImageCache.h>)
#include <org/allbinary/image/ImageCache.h>
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
    
