
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <java/awt/image/BufferedImage.h>
class BasicArrayList;
class BasicArrayListD;

class LogUtil;
class ImageUtil;
class PixelDelta;
class CommonStrings;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class ImageComparisonSearch
            : public virtual Object
         {

    /*protected*/ public: LogUtil* logUtil;

    /*protected*/ public: CommonStrings* commonStrings;

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

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_MEDIA_IMAGE_SEARCH_IMAGECOMPARISONSEARCH_H_COMPLETE)
        #define ORG_ALLBINARY_MEDIA_IMAGE_SEARCH_IMAGECOMPARISONSEARCH_H_COMPLETE
        #if __has_include(<java/awt/image/BufferedImage.h>)
#include <java/awt/image/BufferedImage.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayListD.h>)
#include <org/allbinary/util/BasicArrayListD.h>
#endif

#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/media/image/ImageUtil.h>)
#include <org/allbinary/media/image/ImageUtil.h>
#endif
#if __has_include(<org/allbinary/media/image/comparison/pixel/PixelDelta.h>)
#include <org/allbinary/media/image/comparison/pixel/PixelDelta.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif

        #endif
    
