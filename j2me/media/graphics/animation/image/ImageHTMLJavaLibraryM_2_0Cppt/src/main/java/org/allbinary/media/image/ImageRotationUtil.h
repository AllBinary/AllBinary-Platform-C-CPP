
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

            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Math.h"
        
#include <javax/microedition/lcdui/Image.h>

      
#include <org/microemu/device/playn/PlaynImmutableImage.h>

      
#include <org/microemu/device/playn/PlaynMutableImage.h>

      
#include <playn/core/Canvas.h>

      
#include <playn/core/CoreImage.h>

      
#include <playn/core/ImageImpl.h>

      
#include <playn/html/HTMLPlaynUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ImageCreationUtil.h"

class ImageRotationUtil
            : public Object
         {

    private: static ImageRotationUtil instance() { return ImageRotationUtil(); }

    public: static ImageRotationUtil getInstance();

    private: const HTMLPlaynUtil playnUtil = HTMLPlaynUtil::getInstance();

private: ImageRotationUtil();

    public: Image rotateImage(Image originalImage, Image image, int32_t totalAngle);

    public: Image rotateImageCanvasSurfaceClear(Image originalImage, Image image, Canvas canvasSurface, int32_t totalAngle);

    public: Image rotateImageCanvasSurface(Image originalImage, Image image, Canvas canvasSurface, int32_t totalAngle);

    public: void drawImage(Image originalImage, Image image, Canvas canvasSurface);

                //@Throws(Exception.constructor)
            
    public: Image createRotatedImage(Image originalImage, int32_t rotationInDegrees);

};

            


        #endif //ORG_ALLBINARY_MEDIA_IMAGE_IMAGEROTATIONUTIL_H
