
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
        
#include <java/awt/image/BufferedImage.h>

      
#include <javax/microedition/lcdui/Image.h>

      
#include <org/allbinary/logic/communication/log/PreLogUtil.h>

      
#include <org/microemu/device/j2se/J2SEImmutableImage.h>

      
#include <org/microemu/device/j2se/J2SEMutableImage.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ImageJ2SERotationUtil.h"
#include "ImageCreationUtil.h"

class ImageRotationUtil
            : public Object
         {

    private: static ImageRotationUtil instance() { return ImageRotationUtil(); }

    public: static ImageRotationUtil getInstance();

    private: const ImageJ2SERotationUtil imageJ2SERotationUtil = ImageJ2SERotationUtil::getInstance();

private: ImageRotationUtil();

    public: void rotateImage(Image originalImage, Image image, int32_t totalAngle);

                //@Throws(Exception.constructor)
            
    public: Image createRotatedImage(Image originalImage, int32_t rotationInDegrees);

};

            


        #endif //ORG_ALLBINARY_MEDIA_IMAGE_IMAGEROTATIONUTIL_H
