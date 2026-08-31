
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
        



        #ifndef ORG_ALLBINARY_MEDIA_IMAGE_COMPARISON_IMAGECOMPARISONRESULT_H
        #define ORG_ALLBINARY_MEDIA_IMAGE_COMPARISON_IMAGECOMPARISONRESULT_H

            #include "../../../../../java/lang/Object.h"
        
            #include "../../../../../java/lang/Long.h"
        
#include <java/awt/image/BufferedImage.h>

      
#include <java/util/Vector.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/media/image/ImageUtil.h>

      
#include <org/allbinary/media/image/comparison/pixel/PixelDelta.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class ImageComparisonResult
            : public Object
         {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    const commonStrings: CommonStrings = CommonStrings.getInstance()!;

    private: const bufferedImages: std::vector<BufferedImage> = new Array(2);

    public const name: string;

    public const isSameHeight: bool= false;

    public const isSameWidth: bool= false;

    public const imageHeight: int32_t;

    public const imageWidth: int32_t;

    private: const nonMatchingPixelVector: Vector;

    private: const frameOne: Long;

    private: const frameTwo: Long;

    public pixelsThatMatch: int32_t= 0;

    public pixelsIgnored: int32_t= 0;

    private: tolerance: int32_t= 0;

    private: matchingPercent: float =  -1;

public constructor (string name, BufferedImage bufferedImage, BufferedImage bufferedImage2, Long frameOne, Long frameTwo, int32_t tolerance);

    public float getMatchingPercent();

    public add(PixelDelta pixel);

    public Vector getNonMatchingPixelVector();

    public string toString();

    public std::vector<BufferedImage> getBufferedImages();

    public int32_t getTolerance();

    setTolerance(int32_t tolerance);

    public Long getFrameOne();

    public Long getFrameTwo();

};

            


        #endif //ORG_ALLBINARY_MEDIA_IMAGE_COMPARISON_IMAGECOMPARISONRESULT_H
