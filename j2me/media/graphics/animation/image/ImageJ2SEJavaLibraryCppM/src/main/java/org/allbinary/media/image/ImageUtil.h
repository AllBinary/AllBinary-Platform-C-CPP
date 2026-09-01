
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
        



        #ifndef ORG_ALLBINARY_MEDIA_IMAGE_IMAGEUTIL_H
        #define ORG_ALLBINARY_MEDIA_IMAGE_IMAGEUTIL_H

            #include <vector>
        
            #include "../../../../java/lang/Object.h"
        
            #include "../../../../java/lang/Exception.h"
        
#include <java/awt/Graphics2D.h>

      
#include <java/awt/GraphicsConfiguration.h>

      
#include <java/awt/GraphicsDevice.h>

      
#include <java/awt/GraphicsEnvironment.h>

      
#include <java/awt/Transparency.h>

      
#include <java/awt/geom/AffineTransform.h>

      
#include <java/awt/image/BufferedImage.h>

      
#include <javax/microedition/lcdui/Image.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonLabels.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/microemu/device/j2se/J2SEImmutableImage.h>

      
#include <org/microemu/device/j2se/J2SEMutableImage.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class ImageUtil
            : public Object
         {

    private: static ImageUtil instance() { return ImageUtil(); }

    public: static ImageUtil getInstance();

    private: const CommonStrings commonStrings = CommonStrings::getInstance();

    private: const CommonSeps commonSeps = CommonSeps::getInstance();

    private: std::string IIOIMAGE_POOL_NAME = "IIOIMAGE_POOL_NAME";

    private: const std::string CREATE_BUFFERED_IMAGE = "createBufferedImage";

private: ImageUtil();

    private: GraphicsConfiguration getDefaultConfiguration();

    public: BufferedImage create(int32_t width, int32_t height);

                //@Throws(Exception.constructor)
            
    public: std::vector<BufferedImage> createBufferedImageForResize(std::vector<BufferedImage> bufferedImageArray, int32_t percent, bool scale);

                //@Throws(Exception.constructor)
            
    public: std::vector<BufferedImage> createBufferedImage2(std::vector<BufferedImage> bufferedImageArray, float percent, bool scale);

                //@Throws(Exception.constructor)
            
    public: std::vector<BufferedImage> createBufferedImage3(std::vector<BufferedImage> bufferedImageArray, int32_t width, int32_t height, bool scale);

                //@Throws(Exception.constructor)
            
    public: BufferedImage createBufferedImageForSave(BufferedImage bufferedImage, int32_t newWidth, int32_t newHeight);

                //@Throws(Exception.constructor)
            
    public: BufferedImage createBufferedImage(BufferedImage bufferedImage, int32_t newWidth, int32_t newHeight, bool scale);

                //@Throws(Exception.constructor)
            
    public: BufferedImage createBufferedImageAllowTranslate(BufferedImage bufferedImage, int32_t newWidth, int32_t newHeight, bool scale, bool allowTranslate);

                //@Throws(Exception.constructor)
            
    public: BufferedImage createBufferedImageWithLargerCanvas(BufferedImage bufferedImage, int32_t newWidth, int32_t newHeight);

    public: BufferedImage convertToBufferedImage(java::awt::Image toolkitImage);

    public: BufferedImage getBufferedImage(Image image);

    public: std::string toString(BufferedImage bufferedImage);

};

            


        #endif //ORG_ALLBINARY_MEDIA_IMAGE_IMAGEUTIL_H
