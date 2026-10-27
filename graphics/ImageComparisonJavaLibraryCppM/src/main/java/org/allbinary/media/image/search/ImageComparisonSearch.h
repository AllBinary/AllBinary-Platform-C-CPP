
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

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <java/awt/image/BufferedImage.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/media/image/ImageUtil.h>

      
#include <org/allbinary/media/image/comparison/pixel/PixelDelta.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class ImageComparisonSearch
            : public Object
         {

    protected: LogUtil* logUtil = LogUtil::getInstance();

    protected: CommonStrings* commonStrings = CommonStrings::getInstance();

    public: bool isSameHeight= false;

    public: bool isSameWidth= false;

    public: int32_t pixelsThatMatch= 0;

    public: int32_t pixelsIgnored= 0;

    public: int32_t imageHeight;

    public: int32_t imageWidth;

    private: int32_t tolerance= 0;

    private: BasicArrayList* nonMatchingPixelVector;

    private: std::vector<BufferedImage*> bufferedImages;

    private: float matchingPercent =  -1;

public: ImageComparisonSearch(BufferedImage* bufferedImage, BufferedImage* bufferedImage2, int32_t tolerance);

    private: float getMatchingPercent();

    public: void add(PixelDelta* pixel);

    public: BasicArrayList* getNonMatchingPixelVector();

    public: std::string toString();

    public: std::vector<BufferedImage*> getBufferedImages();

    private: void setBufferedImages(std::vector<BufferedImage*> bufferedImages);

    public: int32_t getTolerance();

    public: void setTolerance(int32_t tolerance);

};

            


        #endif //ORG_ALLBINARY_MEDIA_IMAGE_SEARCH_IMAGECOMPARISONSEARCH_H
