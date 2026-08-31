
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
        
            #include "../../../../java/lang/Float.h"
        
#include <android/graphics/Bitmap.h>

      
#include <android/graphics/Canvas.h>

      
#include <android/graphics/Matrix.h>

      
#include <javax/microedition/lcdui/Image.h>

      
#include <javax/microedition/lcdui/NullImage.h>

      
#include <org/allbinary/graphics/Anchor.h>

      
#include <org/allbinary/image/ImageCache.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/microemu/android/device/AndroidImageInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class ImageScaleUtil
            : public Object
         {
        

    private: static const instance: ImageScaleUtil = new ImageScaleUtil();

    public static ImageScaleUtil getInstance();

    const logUtil: LogUtil = LogUtil.getInstance()!;

private constructor ();

    private: const commonStrings: CommonStrings = CommonStrings.getInstance()!;

    private: anchor: int32_t = Anchor.TOP_LEFT;

    private: const imageBasicArrayList: BasicArrayList = new BasicArrayListD();

    private: const scaledImageBasicArrayList: BasicArrayList = new BasicArrayListD();

    private: const scaleXBasicArrayList: BasicArrayList = new BasicArrayListD();

    private: const scaleYBasicArrayList: BasicArrayList = new BasicArrayListD();

                //@Throws(Exception.constructor)
            
    public Image createImage2(ImageCache imageCache, Image originalImage, float scaleNominatorX, float scaleDenominatorX, float scaleNominatorY, float scaleDenominatorY, bool cached);

                //@Throws(Exception.constructor)
            
    public Image createImage3(ImageCache imageCache, Image originalImage, float scaleNominatorX, float scaleDenominatorX, float scaleNominatorY, float scaleDenominatorY, bool cached, bool mutable);

                //@Throws(Exception.constructor)
            
    public Image createImage(ImageCache imageCache, Image originalImage, float scaleX, float scaleY, bool cached);

                //@Throws(Exception.constructor)
            
    Image getScaledImage(ImageCache imageCache, Image originalImage, float scaleX, float scaleY, int32_t width, int32_t height, bool cached);

    scale(Image image, Matrix matrix, float scaleX, float scaleY);

};

            


        #endif //ORG_ALLBINARY_MEDIA_IMAGE_IMAGESCALEUTIL_H
