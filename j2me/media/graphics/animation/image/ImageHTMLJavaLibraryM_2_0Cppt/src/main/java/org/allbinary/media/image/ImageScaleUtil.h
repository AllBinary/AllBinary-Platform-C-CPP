
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
        



        #ifndef ORG_ALLBINARY_MEDIA_IMAGE_IMAGESCALEUTIL_H
        #define ORG_ALLBINARY_MEDIA_IMAGE_IMAGESCALEUTIL_H

            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Image.h>

      
#include <org/allbinary/image/ImageCache.h>

      
#include <org/microemu/device/playn/PlaynImmutableImage.h>

      
#include <org/microemu/device/playn/PlaynMutableImage.h>

      
#include <playn/core/Canvas.h>

      
#include <playn/core/CoreImage.h>

      
#include <playn/core/ImageImpl.h>

      
#include <playn/html/HTMLPlaynUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ImageCreationUtil.h"

class ImageScaleUtil
            : public Object
         {

    private: static ImageScaleUtil instance() { return ImageScaleUtil(); }

    public: static ImageScaleUtil getInstance();

    private: const HTMLPlaynUtil playnUtil = HTMLPlaynUtil::getInstance();

private: ImageScaleUtil();

                //@Throws(Exception.constructor)
            
    public: Image createImage2(ImageCache imageCache, Image originalImage, float scaleNominatorX, float scaleDenominatorX, float scaleNominatorY, float scaleDenominatorY, bool cached);

                //@Throws(Exception.constructor)
            
    public: Image createImage3(ImageCache imageCache, Image originalImage, float scaleNominatorX, float scaleDenominatorX, float scaleNominatorY, float scaleDenominatorY, bool cached, bool mutable);

                //@Throws(Exception.constructor)
            
    public: Image createImage(ImageCache imageCache, Image originalImage, float scaleX, float scaleY, bool cached);

                //@Throws(Exception.constructor)
            
    public: Image createImageInternal(Image originalImage, float scaleX, float scaleY);

};

            


        #endif //ORG_ALLBINARY_MEDIA_IMAGE_IMAGESCALEUTIL_H
