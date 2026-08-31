
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
        



        #ifndef ORG_ALLBINARY_MEDIA_IMAGE_SEARCH_IMAGECOMPARISONSEARCH_H
        #define ORG_ALLBINARY_MEDIA_IMAGE_SEARCH_IMAGECOMPARISONSEARCH_H

            #include "../../../../../java/lang/Object.h"
        
#include <java/awt/image/BufferedImage.h>

      
#include <java/util/Vector.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/media/image/ImageUtil.h>

      
#include <org/allbinary/media/image/comparison/pixel/PixelDelta.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class ImageComparisonSearch
            : public Object
         {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    const commonStrings: CommonStrings = CommonStrings.getInstance()!;

    public isSameHeight: bool= false;

    public isSameWidth: bool= false;

    public pixelsThatMatch: int32_t= 0;

    public pixelsIgnored: int32_t= 0;

    public imageHeight: int32_t;

    public imageWidth: int32_t;

    private: tolerance: int32_t= 0;

    private: nonMatchingPixelVector: Vector;

    private: bufferedImages: std::vector<BufferedImage>;

    private: matchingPercent: float =  -1;

public constructor (BufferedImage bufferedImage, BufferedImage bufferedImage2, int32_t tolerance);

    float getMatchingPercent();

    public add(PixelDelta pixel);

    public Vector getNonMatchingPixelVector();

    public string toString();

    public std::vector<BufferedImage> getBufferedImages();

    setBufferedImages(std::vector<BufferedImage> bufferedImages);

    public int32_t getTolerance();

    public setTolerance(int32_t tolerance);

};

            


        #endif //ORG_ALLBINARY_MEDIA_IMAGE_SEARCH_IMAGECOMPARISONSEARCH_H
