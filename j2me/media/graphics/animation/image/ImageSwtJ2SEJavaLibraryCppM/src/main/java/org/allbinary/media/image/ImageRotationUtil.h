
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
class Features;
class OpenGLFeatureFactory;
class OpenGLESImage;
class PreLogUtil;
class GC;

class SwtMutableImage;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class ImageSwtRotationUtil;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class ImageRotationUtil
            : public virtual Object
         {

    private: static ImageRotationUtil* instance_owner();
    private: static ImageRotationUtil* instance;

    public: static ImageRotationUtil* getInstance();

    private: ImageSwtRotationUtil* imageSwtRotationUtil;

private: ImageRotationUtil();

    private: Features* features;

    public: void rotateImage(Image* originalImage, Image* image, int32_t totalAngle);

                //@Throws(Exception.constructor)
            
    public: Image* createRotatedImage(Image* originalImage, int32_t rotationInDegrees);

};

            


        #endif //ORG_ALLBINARY_MEDIA_IMAGE_IMAGEROTATIONUTIL_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_MEDIA_IMAGE_IMAGEROTATIONUTIL_H_COMPLETE)
        #define ORG_ALLBINARY_MEDIA_IMAGE_IMAGEROTATIONUTIL_H_COMPLETE
        #if __has_include(<javax/microedition/lcdui/Image.h>)
#include <javax/microedition/lcdui/Image.h>
#endif
#if __has_include(<org/allbinary/game/configuration/feature/Features.h>)
#include <org/allbinary/game/configuration/feature/Features.h>
#endif
#if __has_include(<org/allbinary/graphics/opengles/OpenGLFeatureFactory.h>)
#include <org/allbinary/graphics/opengles/OpenGLFeatureFactory.h>
#endif
#if __has_include(<org/allbinary/image/opengles/OpenGLESImage.h>)
#include <org/allbinary/image/opengles/OpenGLESImage.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/PreLogUtil.h>)
#include <org/allbinary/logic/communication/log/PreLogUtil.h>
#endif
#if __has_include(<org/eclipse/swt/graphics/GC.h>)
#include <org/eclipse/swt/graphics/GC.h>
#endif

#if __has_include(<org/microemu/device/swt/SwtMutableImage.h>)
#include <org/microemu/device/swt/SwtMutableImage.h>
#endif
#if __has_include("org/allbinary/media/image/ImageSwtRotationUtil.h")
#include "org/allbinary/media/image/ImageSwtRotationUtil.h"
#endif

        #endif
    
