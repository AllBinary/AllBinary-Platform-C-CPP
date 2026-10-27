
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
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <java/awt.h>

      
#include <java/awt/image/BufferedImage.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonLabels.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/media/image/ImageUtil.h"
#include "org/allbinary/media/image/GraphicsEnvironment.h"
#include "org/allbinary/media/image/GraphicsDevice.h"
#include "org/allbinary/media/image/GraphicsConfiguration.h"
#include "org/allbinary/media/image/Graphics2D.h"
#include "org/allbinary/media/image/ImageUnifierProperties.h"

class ImageUnifierUtil
            : public Object
         {

    private: static ImageUnifierUtil* instance() { static std::unique_ptr<ImageUnifierUtil> value(new ImageUnifierUtil()); return value.get(); }

    public: static ImageUnifierUtil* getInstance();

    protected: LogUtil* logUtil = LogUtil::getInstance();

    private: ImageUtil* imageUtil = ImageUtil::getInstance();

private: ImageUnifierUtil();

    public: GraphicsConfiguration* getDefaultConfiguration();

    public: BufferedImage* getImage(std::vector<BufferedImage*> bufferedImageArray, ImageUnifierProperties* imageUnifierProperties);

};

            


        #endif //ORG_ALLBINARY_MEDIA_IMAGE_IMAGEUNIFIERUTIL_H
