
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
        



        #ifndef ORG_ALLBINARY_MEDIA_IMAGE_IMAGEJ2SEROTATIONUTIL_H
        #define ORG_ALLBINARY_MEDIA_IMAGE_IMAGEJ2SEROTATIONUTIL_H

            #include <vector>
        
            #include "../../../../java/lang/Object.h"
        
            #include "../../../../java/lang/Math.h"
        
#include <java/awt/Graphics2D.h>

      
#include <java/awt/Image.h>

      
#include <java/awt/image/BufferedImage.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ImageUtil.h"
#include "ImageJ2SEUtil.h"

class ImageJ2SERotationUtil
            : public Object
         {

    private: static ImageJ2SERotationUtil instance() { return ImageJ2SERotationUtil(); }

    public: static ImageJ2SERotationUtil getInstance();

    private: const ImageUtil imageUtil = ImageUtil::getInstance();

    private: const ImageJ2SEUtil imageJ2SEUtil = ImageJ2SEUtil::getInstance();

private: ImageJ2SERotationUtil();

    public: BufferedImage getRotatedImage(Image bufferedImage, int32_t totalAngle);

    public: BufferedImage getRotatedImageRadians(Image bufferedImage, double radians);

    private: BufferedImage drawRotatedImageRadians(Image bufferedImage, BufferedImage newBufferedImage, Graphics2D g, double radians);

    private: const double TWO_PIE = 2 *Math::PI;

    public: BufferedImage rotateImage(Image bufferedImage, BufferedImage newBufferedImage, int32_t totalAngle);

    public: BufferedImage createRotatedImage(Image bufferedImage, BufferedImage newBufferedImage, int32_t totalAngle);

    public: std::vector<BufferedImage> getRotatedImages(Image bufferedImage, int32_t numberOfFrames, int32_t totalAngle);

    public: BufferedImage createSpriteImage(std::vector<BufferedImage> bufferedImageArray);

};

            


        #endif //ORG_ALLBINARY_MEDIA_IMAGE_IMAGEJ2SEROTATIONUTIL_H
