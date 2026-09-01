
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
        



        #ifndef ORG_ALLBINARY_MEDIA_IMAGE_IMAGEUNIFIERUTIL_H
        #define ORG_ALLBINARY_MEDIA_IMAGE_IMAGEUNIFIERUTIL_H

            #include <vector>
        
            #include "../../../../java/lang/Object.h"
        
#include <java/awt.h>

      
#include <java/awt/image/BufferedImage.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonLabels.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ImageUtil.h"
#include "GraphicsEnvironment.h"
#include "GraphicsDevice.h"
#include "GraphicsConfiguration.h"
#include "Graphics2D.h"
#include "ImageUnifierProperties.h"

class ImageUnifierUtil
            : public Object
         {

    private: static ImageUnifierUtil instance() { return ImageUnifierUtil(); }

    public: static ImageUnifierUtil getInstance();

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: const ImageUtil imageUtil = ImageUtil::getInstance();

private: ImageUnifierUtil();

    public: GraphicsConfiguration getDefaultConfiguration();

    public: BufferedImage getImage(std::vector<BufferedImage> bufferedImageArray, ImageUnifierProperties imageUnifierProperties);

};

            


        #endif //ORG_ALLBINARY_MEDIA_IMAGE_IMAGEUNIFIERUTIL_H
