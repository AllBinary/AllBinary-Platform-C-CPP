
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

            #include <vector>
        
            #include "../../../../java/lang/Object.h"
        
#include <org/allbinary/game/configuration/feature/Features.h>

      
#include <org/allbinary/game/configuration/feature/GameFeatureFactory.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/eclipse/swt/SWT.h>

      
#include <org/eclipse/swt/graphics/GC.h>

      
#include <org/eclipse/swt/graphics/ImageData.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ImageUtil.h"
#include "Image.h"

class ImageSwtRotationUtil
            : public Object
         {

    private: static ImageSwtRotationUtil instance() { return ImageSwtRotationUtil(); }

    public: static ImageSwtRotationUtil getInstance();

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: const CommonStrings commonStrings = CommonStrings::getInstance();

    private: const ImageUtil imageUtil = ImageUtil::getInstance();

    private: const GameFeatureFactory gameFeatureFactory = GameFeatureFactory::getInstance();

    private: const Features features = Features::getInstance();

    private: const std::string NO_COPY = "SWT should not copy images after initial loading as the alpha is not honored";

private: ImageSwtRotationUtil();

    public: org::eclipse::swt::graphics::Image getRotatedImage(org::eclipse::swt::graphics::Image bufferedImage, int32_t totalAngle);

    private: org::eclipse::swt::graphics::Image getRotatedImage2(org::eclipse::swt::graphics::Image bufferedImage, org::eclipse::swt::graphics::Image newBufferedImage, GC gc, float angle);

    public: org::eclipse::swt::graphics::Image rotateImage(org::eclipse::swt::graphics::Image originalSwtImage, org::eclipse::swt::graphics::Image newSwtImage, GC gc, int32_t totalAngle);

    public: org::eclipse::swt::graphics::Image getRotatedImageSWT(org::eclipse::swt::graphics::Image bufferedImage, org::eclipse::swt::graphics::Image newSwtImage, GC gc, int32_t totalAngle);

    public: std::vector<org::eclipse::swt::graphics::Image> getRotatedImages(org::eclipse::swt::graphics::Image bufferedImage, int32_t numberOfFrames, int32_t totalAngle);

    public: org::eclipse::swt::graphics::Image createSpriteImage(std::vector<org::eclipse::swt::graphics::Image> bufferedImageArray);

};

            


        #endif //ORG_ALLBINARY_MEDIA_IMAGE_IMAGESWTROTATIONUTIL_H
