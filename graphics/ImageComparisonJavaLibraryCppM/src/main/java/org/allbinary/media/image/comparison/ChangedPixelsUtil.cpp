
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
            
    public static std::vector<BufferedImageCacheable> generateBufferedImageChacheables(ImageComparisonResult imageComparisonInfo){

    bufferedImageCacheables: std::vector<BufferedImageCacheable>;;
    

    originalBufferedImage: BufferedImage = imageComparisonInfo!.getBufferedImages()[0]!;;
    
bufferedImageCacheables= new Array(2);
    

    bufferedImageInfo: BufferedImageInfo = BufferedImageInfoFactory.getInstance(imageComparisonInfo!.imageWidth, imageComparisonInfo!.imageHeight, originalBufferedImage!.getType())!;;
    

    poolInterface: PoolInterface = BufferedImagePoolSingleton.getInstance()!;;
    




                        for (
    index: int32_t = 0;index < bufferedImageCacheables!.length; index++)
        {

    bufferedImageCacheable: BufferedImageCacheable = poolInterface!.remove(bufferedImageInfo) as BufferedImageCacheable;;
    
bufferedImageCacheables[index]= bufferedImageCacheable;
    
bufferedImageCacheables[index]!.getBufferedImage()!.setRGB(ChangedPixelsUtil.START_X, ChangedPixelsUtil.START_Y, bufferedImageInfo!.getWidth(), bufferedImageInfo!.getHeight(), ChangedPixelsUtil.CLEAR_INT_ARRAY, ChangedPixelsUtil.OFFSET, ChangedPixelsUtil.SCAN_SIZE);
    
}


    vector: Vector = imageComparisonInfo!.getNonMatchingPixelVector()!;;
    

    size: int32_t = vector.length!;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {

    pixelDelta: PixelDelta = vector.get(index) as PixelDelta;;
    

                        if(pixelDelta!.getColorDelta() == 
                                    null
                                )
                        
                                    {
                                    console.log("ColorDelta");
    
System.exit(0);
    

                                    }
                                
bufferedImageCacheables[0]!.getBufferedImage()!.setRGB(pixelDelta!.getPoint()!.getX(), pixelDelta!.getPoint()!.getY(), pixelDelta!.getColorDelta()!.getRgb1());
    
bufferedImageCacheables[1]!.getBufferedImage()!.setRGB(pixelDelta!.getPoint()!.getX(), pixelDelta!.getPoint()!.getY(), pixelDelta!.getColorDelta()!.getRgb2());
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return bufferedImageCacheables;
    
}


private constructor (){

            super();
        }


};

            

