
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Long.h"
        
#include <java/awt/image/BufferedImage.h>
class BasicArrayList;
class BasicArrayListD;

class LogUtil;
class StringMaker;
class ImageUtil;
class PixelDelta;
class CommonStrings;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class ImageComparisonResult
            : public virtual Object
         {

    /*protected*/ public: LogUtil* logUtil;

    /*protected*/ public: CommonStrings* commonStrings;

    private: std::vector<BufferedImage*> bufferedImages;

    public: std::string name;

    public: const bool isSameHeight= false;

    public: const bool isSameWidth= false;

    public: int32_t imageHeight;

    public: int32_t imageWidth;

    private: BasicArrayList* nonMatchingPixelVector;

    private: int64_t frameOne;

    private: int64_t frameTwo;

    public: int32_t pixelsThatMatch= 0;

    public: int32_t pixelsIgnored= 0;

    private: int32_t tolerance= 0;

    private: float matchingPercent =  -1;

public: ImageComparisonResult(std::string name, BufferedImage* bufferedImage, BufferedImage* bufferedImage2, int64_t frameOne, int64_t frameTwo, int32_t tolerance);

    public: float getMatchingPercent();

    public: void add(PixelDelta* pixel);

    public: BasicArrayList* getNonMatchingPixelVector();

    public: std::string toString();

    public: std::vector<BufferedImage*> getBufferedImages();

    public: int32_t getTolerance();

    private: void setTolerance(int32_t tolerance);

    public: int64_t getFrameOne();

    public: int64_t getFrameTwo();

};

            


        #endif //ORG_ALLBINARY_MEDIA_IMAGE_COMPARISON_IMAGECOMPARISONRESULT_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_MEDIA_IMAGE_COMPARISON_IMAGECOMPARISONRESULT_H_COMPLETE)
        #define ORG_ALLBINARY_MEDIA_IMAGE_COMPARISON_IMAGECOMPARISONRESULT_H_COMPLETE
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
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
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
    
