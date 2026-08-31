
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
        
            #include "../../../../../java/lang/Math.h"
        
            #include "../../../../../java/lang/Integer.h"
        
            #include "../../../../../java/lang/Long.h"
        
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
        #include "ImageComparatorConstraintsInterface.h"
#include "Color.h"
#include "ImageComparisonResult.h"

class ImageComparator
            : public Object
         {
        

    private: const imageComparatorConstraintsInterface: ImageComparatorConstraintsInterface;

public constructor (ImageComparatorConstraintsInterface imageComparatorConstraintsInterface){

            super();
        this.imageComparatorConstraintsInterface= imageComparatorConstraintsInterface;
    
}


                //@Throws(Exception.constructor)
            
    process(ImageComparisonResult imageComparisonInfo, GPoint point){

    isCollsionWithAvoidRectangles: bool = this.imageComparatorConstraintsInterface!.isCollisionWithAvoidRectangles(point)!;;
    

                        if(!isCollsionWithAvoidRectangles)
                        
                                    {
                                    
    rgb1: int32_t = imageComparisonInfo!.getBufferedImages()[0]!.getRGB(point.getX(), point.getY())!;;
    

    rgb2: int32_t = imageComparisonInfo!.getBufferedImages()[1]!.getRGB(point.getX(), point.getY())!;;
    

    automaticCacheInterface: AutomaticCacheInterface = ColorCacheFactory.getInstance()!;;
    

    colorInteger: Integer = Integer.valueOf(rgb1)!;;
    

    colorCacheable: ColorCacheable = automaticCacheInterface!.get(colorInteger) as ColorCacheable;;
    

    color: Color = colorCacheable!.getColor()!;;
    

    colorInteger2: Integer = Integer.valueOf(rgb2)!;;
    

    colorCacheable2: ColorCacheable = automaticCacheInterface!.get(colorInteger) as ColorCacheable;;
    

    color2: Color = colorCacheable!.getColor()!;;
    

                        if(this.imageComparatorConstraintsInterface!.isColorAllowed(0, point, color) || this.imageComparatorConstraintsInterface!.isColorAllowed(1, point, color2))
                        
                                    {
                                    
                        if(Math.abs(rgb1 -rgb2) <= imageComparisonInfo!.getTolerance())
                        
                                    {
                                    imageComparisonInfo!.pixelsThatMatch++;
    

                                    }
                                
                        else {
                            imageComparisonInfo!.add(PixelDeltaFactory.getInstance(point.getX(), point.getY(), rgb1, rgb2));
    

                        }
                            

                                    }
                                

                                    }
                                
                        else {
                            imageComparisonInfo!.pixelsIgnored++;
    

                        }
                            
}


                //@Throws(Exception.constructor)
            
    public ImageComparisonResult compare(BufferedImage bufferedImage1, BufferedImage bufferedImage2, Long frameOne, Long frameTwo, int32_t tolerance){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.compare(bufferedImage1, bufferedImage2, frameOne, frameTwo, tolerance, StringUtil.getInstance()!.EMPTY_STRING);;
    
}


                //@Throws(Exception.constructor)
            
    public ImageComparisonResult compare(BufferedImage bufferedImage1, BufferedImage bufferedImage2, Long frameOne, Long frameTwo, int32_t tolerance, string name){

                        if(bufferedImage1 == 
                                    null
                                 || bufferedImage2 == 
                                    null
                                )
                        
                                    {
                                    


                            throw new Exception("Input images must not be null.");
                    

                                    }
                                

    imageComparisonInfo: ImageComparisonResult = new ImageComparisonResult(name, bufferedImage1, bufferedImage2, frameOne, frameTwo, tolerance);;
    




                        for (
    indexY: int32_t = 0;indexY < imageComparisonInfo!.imageHeight; indexY++)
        {




                        for (
    indexX: int32_t = 0;indexX < imageComparisonInfo!.imageWidth; indexX++)
        {
this.process(imageComparisonInfo, PointFactory.getInstance()!.createXY(indexX, indexY));
    

                        if(imageComparisonInfo!.getNonMatchingPixelVector()!.size() > this.imageComparatorConstraintsInterface!.getMaxNonMatchingPixelDeltas())
                        
                                    {
                                    break;

                    

                                    }
                                
}

}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return imageComparisonInfo;
    
}


};

            

