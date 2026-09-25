
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
        



        #ifndef ORG_ALLBINARY_MEDIA_IMAGE_COMPARISON_CHANGEDPIXELSUTIL_H
        #define ORG_ALLBINARY_MEDIA_IMAGE_COMPARISON_CHANGEDPIXELSUTIL_H

            #include <vector>
        
            #include "../../../../../java/lang/Object.h"
        
            #include "../../../../../java/lang/Exception.h"
        
            #include "../../../../../java/lang/System.h"
        
#include <java/awt/image/BufferedImage.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/logic/util/cache/PoolInterface.h>

      
#include <org/allbinary/media/image/cache/BufferedImageCacheable.h>

      
#include <org/allbinary/media/image/cache/BufferedImageInfo.h>

      
#include <org/allbinary/media/image/cache/BufferedImageInfoFactory.h>

      
#include <org/allbinary/media/image/cache/BufferedImagePoolSingleton.h>

      
#include <org/allbinary/media/image/comparison/pixel/PixelDelta.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ImageComparisonResult.h"

class ChangedPixelsUtil
            : public Object
         {

    private: static const int32_t START_X = 0;

    private: static const int32_t START_Y = 0;

    private: static const int32_t OFFSET = 0;

    private: static const int32_t SCAN_SIZE = 0;

    private: static const std::vector<int32_t> CLEAR_INT_ARRAY = new Array(1800 *1600);

                //@Throws(Exception.constructor)
            
    public: static std::vector<BufferedImageCacheable> generateBufferedImageChacheables(ImageComparisonResult imageComparisonInfo);

private: ChangedPixelsUtil();

};

            


        #endif //ORG_ALLBINARY_MEDIA_IMAGE_COMPARISON_CHANGEDPIXELSUTIL_H
