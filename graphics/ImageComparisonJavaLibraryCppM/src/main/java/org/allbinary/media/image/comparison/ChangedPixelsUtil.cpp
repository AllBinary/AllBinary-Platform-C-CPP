
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
        



            #include <vector>
        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/System.h"
        
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

    private: static const std::vector<int32_t> CLEAR_INT_ARRAY = std::vector<int32_t>(1800 *1600);

                //@Throws(Exception.constructor)
            
    public: static std::vector<BufferedImageCacheable> generateBufferedImageChacheables(ImageComparisonResult imageComparisonInfo){

    std::vector<BufferedImageCacheable> bufferedImageCacheables;;
    

    BufferedImage originalBufferedImage = imageComparisonInfo.getBufferedImages()[0];;
    
bufferedImageCacheables= std::vector<BufferedImageCacheable>(2);
    

    BufferedImageInfo bufferedImageInfo = BufferedImageInfoFactory::getInstance(imageComparisonInfo.imageWidth, imageComparisonInfo.imageHeight, originalBufferedImage.getType());;
    

    PoolInterface poolInterface = BufferedImagePoolSingleton::getInstance();;
    




                        for (
    int32_t index = 0;index < bufferedImageCacheables.size(); index++)
        {

    BufferedImageCacheable bufferedImageCacheable = poolInterface.remove(bufferedImageInfo);;
    
bufferedImageCacheables[index]= bufferedImageCacheable;
    
bufferedImageCacheables[index].getBufferedImage().setRGB(ChangedPixelsUtil::START_X, ChangedPixelsUtil::START_Y, bufferedImageInfo.getWidth(), bufferedImageInfo.getHeight(), ChangedPixelsUtil::CLEAR_INT_ARRAY, ChangedPixelsUtil::OFFSET, ChangedPixelsUtil::SCAN_SIZE);
    
}


    BasicArrayList vector = imageComparisonInfo.getNonMatchingPixelVector();;
    

    int32_t size = vector.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    PixelDelta pixelDelta = vector.get(index);;
    

                        if(pixelDelta.getColorDelta() == 
                                    nullptr
                                )
                        
                                    {
                                    console.log("ColorDelta");
    
System.exit(0);
    

                                    }
                                
bufferedImageCacheables[0].getBufferedImage().setRGB(pixelDelta.getPoint().getX(), pixelDelta.getPoint().getY(), pixelDelta.getColorDelta().getRgb1());
    
bufferedImageCacheables[1].getBufferedImage().setRGB(pixelDelta.getPoint().getX(), pixelDelta.getPoint().getY(), pixelDelta.getColorDelta().getRgb2());
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return bufferedImageCacheables;
    
}


private: ChangedPixelsUtil(){
}


};

            

