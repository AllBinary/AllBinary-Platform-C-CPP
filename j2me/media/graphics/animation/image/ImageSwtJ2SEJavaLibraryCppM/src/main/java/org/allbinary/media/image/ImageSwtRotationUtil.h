
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
        



        #ifndef ORG_ALLBINARY_MEDIA_IMAGE_IMAGESWTROTATIONUTIL_H
        #define ORG_ALLBINARY_MEDIA_IMAGE_IMAGESWTROTATIONUTIL_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class Features;
class GameFeatureFactory;
class LogUtil;
class CommonStrings;
class SWT;
class GC;
class ImageData;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class ImageUtil;
class Image;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class ImageSwtRotationUtil
            : public virtual Object
         {

    private: static ImageSwtRotationUtil* instance_owner();
    private: static ImageSwtRotationUtil* instance;

    public: static ImageSwtRotationUtil* getInstance();

    /*protected*/ public: LogUtil* logUtil;

    private: CommonStrings* commonStrings;

    private: ImageUtil* imageUtil;

    private: GameFeatureFactory* gameFeatureFactory;

    private: Features* features;

    private: const std::string NO_COPY = "SWT should not copy images after initial loading as the alpha is not honored";

private: ImageSwtRotationUtil();

    public: org::eclipse::swt::graphics::Image* getRotatedImage(org::eclipse::swt::graphics::Image* bufferedImage, int32_t totalAngle);

    private: org::eclipse::swt::graphics::Image* getRotatedImage2(org::eclipse::swt::graphics::Image* bufferedImage, org::eclipse::swt::graphics::Image* newBufferedImage, GC* gc, float angle);

    public: org::eclipse::swt::graphics::Image* rotateImage(org::eclipse::swt::graphics::Image* originalSwtImage, org::eclipse::swt::graphics::Image* newSwtImage, GC* gc, int32_t totalAngle);

    public: org::eclipse::swt::graphics::Image* getRotatedImageSWT(org::eclipse::swt::graphics::Image* bufferedImage, org::eclipse::swt::graphics::Image* newSwtImage, GC* gc, int32_t totalAngle);

    public: std::vector<org::eclipse::swt::graphics::Image*> getRotatedImages(org::eclipse::swt::graphics::Image* bufferedImage, int32_t numberOfFrames, int32_t totalAngle);

    public: org::eclipse::swt::graphics::Image* createSpriteImage(std::vector<org::eclipse::swt::graphics::Image*> bufferedImageArray);

};

            


        #endif //ORG_ALLBINARY_MEDIA_IMAGE_IMAGESWTROTATIONUTIL_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_MEDIA_IMAGE_IMAGESWTROTATIONUTIL_H_COMPLETE)
        #define ORG_ALLBINARY_MEDIA_IMAGE_IMAGESWTROTATIONUTIL_H_COMPLETE
        #if __has_include(<org/allbinary/game/configuration/feature/Features.h>)
#include <org/allbinary/game/configuration/feature/Features.h>
#endif
#if __has_include(<org/allbinary/game/configuration/feature/GameFeatureFactory.h>)
#include <org/allbinary/game/configuration/feature/GameFeatureFactory.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include(<org/eclipse/swt/SWT.h>)
#include <org/eclipse/swt/SWT.h>
#endif
#if __has_include(<org/eclipse/swt/graphics/GC.h>)
#include <org/eclipse/swt/graphics/GC.h>
#endif
#if __has_include(<org/eclipse/swt/graphics/ImageData.h>)
#include <org/eclipse/swt/graphics/ImageData.h>
#endif
#if __has_include("org/allbinary/media/image/ImageUtil.h")
#include "org/allbinary/media/image/ImageUtil.h"
#endif
#if __has_include("org/allbinary/media/image/Image.h")
#include "org/allbinary/media/image/Image.h"
#endif

        #endif
    
