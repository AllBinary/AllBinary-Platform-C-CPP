
        /*
                * 
                *  AllBinary Open License Version 1
                *  Copyright (c) 2023 AllBinary
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
        



        #ifndef ORG_ALLBINARY_MEDIA_IMAGE_IMAGEJ2MESCALEUTIL_H
        #define ORG_ALLBINARY_MEDIA_IMAGE_IMAGEJ2MESCALEUTIL_H

            #include <vector>
        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Image.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/microemu/device/playn/PlaynImmutableImage.h>

      
#include <org/microemu/device/playn/PlaynMutableImage.h>

      
#include <playn/core/Canvas.h>

      
#include <playn/core/CoreImage.h>

      
#include <playn/core/ImageImpl.h>

      
#include <playn/core/PlayN.h>

      
#include <playn/html/HtmlGraphics.h>

      
#include <playn/html/HtmlImage.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class ImageJ2MEScaleUtil
            : public Object
         {

    private: static ImageJ2MEScaleUtil instance() { return ImageJ2MEScaleUtil(); }

    public: static ImageJ2MEScaleUtil getInstance();

    protected: const LogUtil logUtil = LogUtil::getInstance();

private: ImageJ2MEScaleUtil();

                //@Throws(Exception.constructor)
            
    public: std::vector<Image> scaleArray(std::vector<Image> images, int32_t width, int32_t height);

                //@Throws(Exception.constructor)
            
    public: Image scale(Image image, int32_t width, int32_t height);

};

            


        #endif //ORG_ALLBINARY_MEDIA_IMAGE_IMAGEJ2MESCALEUTIL_H
