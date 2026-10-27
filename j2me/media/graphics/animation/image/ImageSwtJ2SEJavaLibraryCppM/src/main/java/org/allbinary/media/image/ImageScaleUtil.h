
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
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class Image;
class Features;
class GameFeatureFactory;
class ImageCache;
class LogUtil;
class CommonStrings;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class ImageCopyUtil;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class ImageScaleUtil
            : public virtual Object
         {

    private: static ImageScaleUtil* instance_owner();
    private: static ImageScaleUtil* instance;

    public: static ImageScaleUtil* getInstance();

    /*protected*/ public: LogUtil* logUtil;

    private: CommonStrings* commonStrings;

    private: ImageCopyUtil* imageCopyUtil;

    private: GameFeatureFactory* gameFeatureFactory;

    private: Features* features;

    private: const std::string NO_COPY = "SWT should not copy images after initial loading as the alpha is not honored";

private: ImageScaleUtil();

                //@Throws(Exception.constructor)
            
    public: Image* createImage2(ImageCache* imageCache, Image* originalImage, float scaleNominatorX, float scaleDenominatorX, float scaleNominatorY, float scaleDenominatorY, bool cached);

                //@Throws(Exception.constructor)
            
    public: Image* createImage3(ImageCache* imageCache, Image* originalImage, float scaleNominatorX, float scaleDenominatorX, float scaleNominatorY, float scaleDenominatorY, bool cached, bool mutable_);

                //@Throws(Exception.constructor)
            
    public: void scale2(Image* originalImage, std::vector<Image*> originalImageArray, std::vector<Image*> ximageToShowArray, int32_t unused, float scaleX, float scaleY, float maxScaleX, float maxScaleY);

                //@Throws(Exception.constructor)
            
    public: void scale(Image* originalImage, std::vector<Image*> originalImageArray, std::vector<Image*> ximageToShowArray, int32_t unused, float scaleX, float scaleY, float maxScaleX, float maxScaleY, bool mutable_);

};

            


        #endif //ORG_ALLBINARY_MEDIA_IMAGE_IMAGESCALEUTIL_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_MEDIA_IMAGE_IMAGESCALEUTIL_H_COMPLETE)
        #define ORG_ALLBINARY_MEDIA_IMAGE_IMAGESCALEUTIL_H_COMPLETE
        #if __has_include(<javax/microedition/lcdui/Image.h>)
#include <javax/microedition/lcdui/Image.h>
#endif
#if __has_include(<org/allbinary/game/configuration/feature/Features.h>)
#include <org/allbinary/game/configuration/feature/Features.h>
#endif
#if __has_include(<org/allbinary/game/configuration/feature/GameFeatureFactory.h>)
#include <org/allbinary/game/configuration/feature/GameFeatureFactory.h>
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
#if __has_include("org/allbinary/media/image/ImageCopyUtil.h")
#include "org/allbinary/media/image/ImageCopyUtil.h"
#endif

        #endif
    
