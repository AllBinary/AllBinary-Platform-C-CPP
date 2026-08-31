
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

            #include "../../../../java/lang/Object.h"
        
            #include "../../../../java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Image.h>

      
#include <org/allbinary/game/configuration/feature/Features.h>

      
#include <org/allbinary/graphics/opengles/OpenGLFeatureFactory.h>

      
#include <org/allbinary/image/opengles/OpenGLESImage.h>

      
#include <org/allbinary/logic/communication/log/PreLogUtil.h>

      
#include <org/eclipse/swt/graphics/GC.h>

      
#include <org/microemu/device/swt/SwtImmutableImage.h>

      
#include <org/microemu/device/swt/SwtMutableImage.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ImageSwtRotationUtil.h"

class ImageRotationUtil
            : public Object
         {
        

    private: static const instance: ImageRotationUtil = new ImageRotationUtil();

    public static ImageRotationUtil getInstance();

    private: const imageSwtRotationUtil: ImageSwtRotationUtil = ImageSwtRotationUtil.getInstance()!;

private constructor ();

    private: const features: Features = Features.getInstance()!;

    public rotateImage(Image originalImage, Image image, int32_t totalAngle);

                //@Throws(Exception.constructor)
            
    public Image createRotatedImage(Image originalImage, int32_t rotationInDegrees);

};

            


        #endif //ORG_ALLBINARY_MEDIA_IMAGE_IMAGEROTATIONUTIL_H
