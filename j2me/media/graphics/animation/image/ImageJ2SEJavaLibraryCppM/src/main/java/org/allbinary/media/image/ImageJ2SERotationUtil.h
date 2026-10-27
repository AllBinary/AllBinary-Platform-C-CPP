
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Math.h"
        
#include <java/awt/Graphics2D.h>
#include <java/awt/Image.h>
#include <java/awt/image/BufferedImage.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class ImageUtil;
class ImageJ2SEUtil;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class ImageJ2SERotationUtil
            : public virtual Object
         {

    private: static ImageJ2SERotationUtil* instance_owner();
    private: static ImageJ2SERotationUtil* instance;

    public: static ImageJ2SERotationUtil* getInstance();

    private: ImageUtil* imageUtil;

    private: ImageJ2SEUtil* imageJ2SEUtil;

private: ImageJ2SERotationUtil();

    public: BufferedImage* getRotatedImage(Image* bufferedImage, int32_t totalAngle);

    public: BufferedImage* getRotatedImageRadians(Image* bufferedImage, double radians);

    private: BufferedImage* drawRotatedImageRadians(Image* bufferedImage, BufferedImage* newBufferedImage, Graphics2D* g, double radians);

    private: const double TWO_PIE;

    public: BufferedImage* rotateImage(Image* bufferedImage, BufferedImage* newBufferedImage, int32_t totalAngle);

    public: BufferedImage* createRotatedImage(Image* bufferedImage, BufferedImage* newBufferedImage, int32_t totalAngle);

    public: std::vector<BufferedImage*> getRotatedImages(Image* bufferedImage, int32_t numberOfFrames, int32_t totalAngle);

    public: BufferedImage* createSpriteImage(std::vector<BufferedImage*> bufferedImageArray);

};

            


        #endif //ORG_ALLBINARY_MEDIA_IMAGE_IMAGEJ2SEROTATIONUTIL_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_MEDIA_IMAGE_IMAGEJ2SEROTATIONUTIL_H_COMPLETE)
        #define ORG_ALLBINARY_MEDIA_IMAGE_IMAGEJ2SEROTATIONUTIL_H_COMPLETE
        #if __has_include(<java/awt/Graphics2D.h>)
#include <java/awt/Graphics2D.h>
#endif
#if __has_include(<java/awt/Image.h>)
#include <java/awt/Image.h>
#endif
#if __has_include(<java/awt/image/BufferedImage.h>)
#include <java/awt/image/BufferedImage.h>
#endif
#if __has_include("org/allbinary/media/image/ImageUtil.h")
#include "org/allbinary/media/image/ImageUtil.h"
#endif
#if __has_include("org/allbinary/media/image/ImageJ2SEUtil.h")
#include "org/allbinary/media/image/ImageJ2SEUtil.h"
#endif

        #endif
    
