
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

            #include "../../../../../java/lang/Object.h"
        
            #include "../../../../../java/lang/Exception.h"
        
            #include "../../../../../java/lang/System.h"
        
#include <java/awt/image/BufferedImage.h>

      
#include <java/util/Vector.h>

      
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
        

    private: static const START_X: int32_t = 0;

    private: static const START_Y: int32_t = 0;

    private: static const OFFSET: int32_t = 0;

    private: static const SCAN_SIZE: int32_t = 0;

    private: static const CLEAR_INT_ARRAY: std::vector<int32_t> = new Array(1800 *1600);

                //@Throws(Exception.constructor)
            
    public static std::vector<BufferedImageCacheable> generateBufferedImageChacheables(ImageComparisonResult imageComparisonInfo);

private constructor ();

};

            


        #endif //ORG_ALLBINARY_MEDIA_IMAGE_COMPARISON_CHANGEDPIXELSUTIL_H
