
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

            #include <vector>
        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Image.h>

      
#include <org/allbinary/game/configuration/feature/Features.h>

      
#include <org/allbinary/game/configuration/feature/GameFeatureFactory.h>

      
#include <org/allbinary/graphics/displayable/DisplayInfoSingleton.h>

      
#include <org/allbinary/graphics/opengles/OpenGLFeatureFactory.h>

      
#include <org/allbinary/graphics/opengles/OpenGLUtil.h>

      
#include <org/allbinary/image/opengles/OpenGLESDeviceImageTranslate.h>

      
#include <org/allbinary/image/opengles/OpenGLESImage.h>

      
#include <org/allbinary/image/opengles/OpenGLESImageExclusionUtil.h>

      
#include <org/allbinary/image/opengles/OpenGLESImageProperties.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/eclipse/swt/graphics/ImageData.h>

      
#include <org/microemu/app/ui/swt/SwtDeviceComponent.h>

      
#include <org/microemu/device/swt/PostLoadSwtImmutableImageProcessor.h>

      
#include <org/microemu/device/swt/PostLoadSwtMutableImageProcessor.h>

      
#include <org/microemu/device/swt/SwtImmutableImage.h>

      
#include <org/microemu/device/swt/SwtMutableImage.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class ImageCopyUtil
            : public Object
         {

    private: static ImageCopyUtil instance() { return ImageCopyUtil(); }

    public: static ImageCopyUtil getInstance();

    protected: const LogUtil logUtil = LogUtil::getInstance();

private: ImageCopyUtil();

    private: const CommonStrings commonStrings = CommonStrings::getInstance();

    private: const GameFeatureFactory gameFeatureFactory = GameFeatureFactory::getInstance();

    private: const Features features = Features::getInstance();

    private: const OpenGLFeatureFactory openGLFeatureFactory = OpenGLFeatureFactory::getInstance();

    private: const OpenGLUtil openGLUtil = OpenGLUtil::getInstance();

    private: const OpenGLESImageExclusionUtil openGLESImageExclusionUtil = OpenGLESImageExclusionUtil::getInstance();

    private: const std::string NO_COPY = "SWT should not copy images after initial loading as the alpha is not honored";

    private: const std::string UNABLE = "Unable to scale image without dimensions";

                //@Throws(Exception.constructor)
            
    public: Image createImageForRotation(Image originalImage);

                //@Throws(Exception.constructor)
            
    public: Image createImage(Image originalImage);

                //@Throws(Exception.constructor)
            
    public: Image createImageWH(Image originalImage, int32_t width, int32_t height, bool mutable);

    private: const std::string INFORMATION = "about_";

    private: const std::string LEADERBOARD = "leaderboard";

                //@Throws(Exception.constructor)
            
    public: Image createImage2(Image originalImage, int32_t width, int32_t height, bool mutable);

                //@Throws(Exception.constructor)
            
    public: Image createImageScale(Image originalImage, float canvasScale, bool resize);

};

            


        #endif //ORG_ALLBINARY_MEDIA_IMAGE_IMAGECOPYUTIL_H
