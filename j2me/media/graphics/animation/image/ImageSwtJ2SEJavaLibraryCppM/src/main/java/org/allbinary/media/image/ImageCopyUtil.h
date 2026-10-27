
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
class DisplayInfoSingleton;
class OpenGLFeatureFactory;
class OpenGLUtil;
class OpenGLESDeviceImageTranslate;
class OpenGLESImage;
class OpenGLESImageExclusionUtil;
class OpenGLESImageProperties;
class LogUtil;
class CommonStrings;
class ImageData;
class SwtDeviceComponent;
class PostLoadSwtImmutableImageProcessor;
class PostLoadSwtMutableImageProcessor;
class SwtImmutableImage;
class SwtMutableImage;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class ImageCopyUtil
            : public virtual Object
         {

    private: static ImageCopyUtil* instance_owner();
    private: static ImageCopyUtil* instance;

    public: static ImageCopyUtil* getInstance();

    /*protected*/ public: LogUtil* logUtil;

private: ImageCopyUtil();

    private: CommonStrings* commonStrings;

    private: GameFeatureFactory* gameFeatureFactory;

    private: Features* features;

    private: OpenGLFeatureFactory* openGLFeatureFactory;

    private: OpenGLUtil* openGLUtil;

    private: OpenGLESImageExclusionUtil* openGLESImageExclusionUtil;

    private: const std::string NO_COPY = "SWT should not copy images after initial loading as the alpha is not honored";

    private: const std::string UNABLE = "Unable to scale image without dimensions";

                //@Throws(Exception.constructor)
            
    public: Image* createImageForRotation(Image* originalImage);

                //@Throws(Exception.constructor)
            
    public: Image* createImage(Image* originalImage);

                //@Throws(Exception.constructor)
            
    public: Image* createImageWH(Image* originalImage, int32_t width, int32_t height, bool mutable_);

    private: const std::string INFORMATION = "about_";

    private: const std::string LEADERBOARD = "leaderboard";

                //@Throws(Exception.constructor)
            
    public: Image* createImage2(Image* originalImage, int32_t width, int32_t height, bool mutable_);

                //@Throws(Exception.constructor)
            
    public: Image* createImageScale(Image* originalImage, float canvasScale, bool resize);

};

            


        #endif //ORG_ALLBINARY_MEDIA_IMAGE_IMAGECOPYUTIL_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_MEDIA_IMAGE_IMAGECOPYUTIL_H_COMPLETE)
        #define ORG_ALLBINARY_MEDIA_IMAGE_IMAGECOPYUTIL_H_COMPLETE
        #if __has_include(<javax/microedition/lcdui/Image.h>)
#include <javax/microedition/lcdui/Image.h>
#endif
#if __has_include(<org/allbinary/game/configuration/feature/Features.h>)
#include <org/allbinary/game/configuration/feature/Features.h>
#endif
#if __has_include(<org/allbinary/game/configuration/feature/GameFeatureFactory.h>)
#include <org/allbinary/game/configuration/feature/GameFeatureFactory.h>
#endif
#if __has_include(<org/allbinary/graphics/displayable/DisplayInfoSingleton.h>)
#include <org/allbinary/graphics/displayable/DisplayInfoSingleton.h>
#endif
#if __has_include(<org/allbinary/graphics/opengles/OpenGLFeatureFactory.h>)
#include <org/allbinary/graphics/opengles/OpenGLFeatureFactory.h>
#endif
#if __has_include(<org/allbinary/graphics/opengles/OpenGLUtil.h>)
#include <org/allbinary/graphics/opengles/OpenGLUtil.h>
#endif
#if __has_include(<org/allbinary/image/opengles/OpenGLESDeviceImageTranslate.h>)
#include <org/allbinary/image/opengles/OpenGLESDeviceImageTranslate.h>
#endif
#if __has_include(<org/allbinary/image/opengles/OpenGLESImage.h>)
#include <org/allbinary/image/opengles/OpenGLESImage.h>
#endif
#if __has_include(<org/allbinary/image/opengles/OpenGLESImageExclusionUtil.h>)
#include <org/allbinary/image/opengles/OpenGLESImageExclusionUtil.h>
#endif
#if __has_include(<org/allbinary/image/opengles/OpenGLESImageProperties.h>)
#include <org/allbinary/image/opengles/OpenGLESImageProperties.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include(<org/eclipse/swt/graphics/ImageData.h>)
#include <org/eclipse/swt/graphics/ImageData.h>
#endif
#if __has_include(<org/microemu/app/ui/swt/SwtDeviceComponent.h>)
#include <org/microemu/app/ui/swt/SwtDeviceComponent.h>
#endif
#if __has_include(<org/microemu/device/swt/PostLoadSwtImmutableImageProcessor.h>)
#include <org/microemu/device/swt/PostLoadSwtImmutableImageProcessor.h>
#endif
#if __has_include(<org/microemu/device/swt/PostLoadSwtMutableImageProcessor.h>)
#include <org/microemu/device/swt/PostLoadSwtMutableImageProcessor.h>
#endif
#if __has_include(<org/microemu/device/swt/SwtImmutableImage.h>)
#include <org/microemu/device/swt/SwtImmutableImage.h>
#endif
#if __has_include(<org/microemu/device/swt/SwtMutableImage.h>)
#include <org/microemu/device/swt/SwtMutableImage.h>
#endif

        #endif
    
