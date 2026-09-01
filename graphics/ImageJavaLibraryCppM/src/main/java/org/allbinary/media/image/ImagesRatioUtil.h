
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
        



        #ifndef ORG_ALLBINARY_MEDIA_IMAGE_IMAGESRATIOUTIL_H
        #define ORG_ALLBINARY_MEDIA_IMAGE_IMAGESRATIOUTIL_H

            #include <vector>
        
            #include "../../../../java/lang/Object.h"
        
            #include "../../../../java/lang/Exception.h"
        
#include <java/awt.h>

      
#include <java/awt/image/BufferedImage.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonLabels.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ImageUtil.h"
#include "Point.h"
#include "Graphics2D.h"

class ImagesRatioUtil
            : public Object
         {

    private: static ImagesRatioUtil instance() { return ImagesRatioUtil(); }

    public: static ImagesRatioUtil getInstance();

    protected: const LogUtil logUtil = LogUtil::getInstance();

private: ImagesRatioUtil();

    private: const ImageUtil imageUtil = ImageUtil::getInstance();

    public: bool isEqual(std::vector<BufferedImage> bufferedImageArray, int32_t totalImages);

    public: double getAverage(std::vector<BufferedImage> bufferedImageArray, int32_t totalImages);

                //@Throws(Exception.constructor)
            
    public: BufferedImage fudge(BufferedImage bufferedImage, double ratio);

                //@Throws(Exception.constructor)
            
    public: std::vector<BufferedImage> fudge(std::vector<BufferedImage> bufferedImageArray, int32_t totalImages, double ratio);

};

            


        #endif //ORG_ALLBINARY_MEDIA_IMAGE_IMAGESRATIOUTIL_H
