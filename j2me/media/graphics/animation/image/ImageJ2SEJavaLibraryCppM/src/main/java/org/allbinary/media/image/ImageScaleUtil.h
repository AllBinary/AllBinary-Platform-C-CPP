
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

            #include "../../../../java/lang/Object.h"
        
            #include "../../../../java/lang/Exception.h"
        
#include <java/awt/Graphics2D.h>

      
#include <java/awt/geom/AffineTransform.h>

      
#include <java/awt/image/BufferedImage.h>

      
#include <javax/microedition/lcdui/Image.h>

      
#include <org/allbinary/image/ImageCache.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ImageUtil.h"
#include "ImageJ2SEUtil.h"
#include "ImageCreationUtil.h"

class ImageScaleUtil
            : public Object
         {
        

    private: static const instance: ImageScaleUtil = new ImageScaleUtil();

    public static ImageScaleUtil getInstance();

    private: const imageUtil: ImageUtil = ImageUtil.getInstance()!;

    private: const imageJ2SEUtil: ImageJ2SEUtil = ImageJ2SEUtil.getInstance()!;

    private: const imageCreationUtil: ImageCreationUtil = ImageCreationUtil.getInstance()!;

private constructor ();

                //@Throws(Exception.constructor)
            
    public Image createImage2(ImageCache imageCache, Image originalImage, float scaleNominatorX, float scaleDenominatorX, float scaleNominatorY, float scaleDenominatorY, bool cached);

                //@Throws(Exception.constructor)
            
    public Image createImage3(ImageCache imageCache, Image originalImage, float scaleNominatorX, float scaleDenominatorX, float scaleNominatorY, float scaleDenominatorY, bool cached, bool mutable);

                //@Throws(Exception.constructor)
            
    public scale2(Image originalImage, std::vector<Image> originalImageArray, std::vector<Image> ximageToShowArray, int32_t unused, float scaleX, float scaleY, float maxScaleX, float maxScaleY);

    public scale(Image originalImage, Image newMaxSizeImage, float scaleX, float scaleY, bool clear);

};

            


        #endif //ORG_ALLBINARY_MEDIA_IMAGE_IMAGESCALEUTIL_H
