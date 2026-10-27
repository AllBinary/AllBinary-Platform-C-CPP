
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
        



            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Math.h"
        
            #include "java/lang/Integer.h"
        
            #include "java/lang/Long.h"
        
#include <java/awt.h>

      
#include <java/awt/image/BufferedImage.h>

      
#include <org/allbinary/graphics/GPoint.h>

      
#include <org/allbinary/graphics/PointFactory.h>

      
#include <org/allbinary/graphics/color/ColorCacheFactory.h>

      
#include <org/allbinary/graphics/color/ColorCacheable.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/util/cache/AutomaticCacheInterface.h>

      
#include <org/allbinary/media/image/comparison/pixel/PixelDeltaFactory.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/media/image/comparison/ImageComparatorConstraintsInterface.h"
#include "org/allbinary/media/image/comparison/Color.h"
#include "org/allbinary/media/image/comparison/ImageComparisonResult.h"

class ImageComparator
            : public Object
         {

    private: ImageComparatorConstraintsInterface* imageComparatorConstraintsInterface;

public: ImageComparator(ImageComparatorConstraintsInterface* imageComparatorConstraintsInterface){
this->imageComparatorConstraintsInterface= imageComparatorConstraintsInterface;
    
}


                //@Throws(Exception.constructor)
            
    private: void process(ImageComparisonResult* imageComparisonInfo, GPoint* point){

    bool isCollsionWithAvoidRectangles = this->imageComparatorConstraintsInterface->isCollisionWithAvoidRectangles(point);;
    

                        if(!isCollsionWithAvoidRectangles)
                        
                                    {
                                    
    int32_t rgb1 = imageComparisonInfo->getBufferedImages()[0].getRGB(point->getX(), point->getY());;
    

    int32_t rgb2 = imageComparisonInfo->getBufferedImages()[1].getRGB(point->getX(), point->getY());;
    

    AutomaticCacheInterface* automaticCacheInterface = ColorCacheFactory::getInstance();;
    

    int32_t colorInteger = Integer.valueOf(rgb1);;
    

    ColorCacheable* colorCacheable = dynamic_cast<ColorCacheable*>(automaticCacheInterface->get(colorInteger));;
    

    Color* color = colorCacheable->getColor();;
    

    int32_t colorInteger2 = Integer.valueOf(rgb2);;
    

    ColorCacheable* colorCacheable2 = dynamic_cast<ColorCacheable*>(automaticCacheInterface->get(colorInteger));;
    

    Color* color2 = colorCacheable->getColor();;
    

                        if(this->imageComparatorConstraintsInterface->isColorAllowed(0, point, color) || this->imageComparatorConstraintsInterface->isColorAllowed(1, point, color2))
                        
                                    {
                                    
                        if(Math::abs(rgb1 -rgb2) <= imageComparisonInfo->getTolerance())
                        
                                    {
                                    imageComparisonInfo->pixelsThatMatch++;
    

                                    }
                                
                        else {
                            imageComparisonInfo->add(PixelDeltaFactory::getInstance(point->getX(), point->getY(), rgb1, rgb2));
    

                        }
                            

                                    }
                                

                                    }
                                
                        else {
                            imageComparisonInfo->pixelsIgnored++;
    

                        }
                            
}


                //@Throws(Exception.constructor)
            
    public: ImageComparisonResult* compare(BufferedImage* bufferedImage1, BufferedImage* bufferedImage2, int64_t frameOne, int64_t frameTwo, int32_t tolerance){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->compare(bufferedImage1, bufferedImage2, frameOne, frameTwo, tolerance, StringUtil::getInstance()->EMPTY_STRING);;
    
}


                //@Throws(Exception.constructor)
            
    public: ImageComparisonResult* compare(BufferedImage* bufferedImage1, BufferedImage* bufferedImage2, int64_t frameOne, int64_t frameTwo, int32_t tolerance, std::string name){

                        if(bufferedImage1 == 
                                    nullptr
                                 || bufferedImage2 == 
                                    nullptr
                                )
                        
                                    {
                                    


                            throw new Exception("Input images must not be null.");
                    

                                    }
                                

    ImageComparisonResult* imageComparisonInfo = new ImageComparisonResult(name, bufferedImage1, bufferedImage2, frameOne, frameTwo, tolerance);;
    




                        for (
    int32_t indexY = 0;indexY < imageComparisonInfo->imageHeight; indexY++)
        {




                        for (
    int32_t indexX = 0;indexX < imageComparisonInfo->imageWidth; indexX++)
        {
this->process(imageComparisonInfo, PointFactory::getInstance()->createXY(indexX, indexY));
    

                        if(imageComparisonInfo->getNonMatchingPixelVector()->size() > this->imageComparatorConstraintsInterface->getMaxNonMatchingPixelDeltas())
                        
                                    {
                                    break;

                    

                                    }
                                
}

}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return imageComparisonInfo;
    
}


};

            

