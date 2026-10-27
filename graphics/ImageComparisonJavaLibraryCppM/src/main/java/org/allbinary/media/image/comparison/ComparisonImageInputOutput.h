
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
        



        #ifndef ORG_ALLBINARY_MEDIA_IMAGE_COMPARISON_COMPARISONIMAGEINPUTOUTPUT_H
        #define ORG_ALLBINARY_MEDIA_IMAGE_COMPARISON_COMPARISONIMAGEINPUTOUTPUT_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Long.h"
        
#include <java/awt/image/BufferedImage.h>
class ImageOutputData;
class LogUtil;
class LongUtil;
class StringMaker;
class AutomaticCacheInterface;
class MediaDataFactory;
class ImagePersistanceUtil;
class BufferedImageCacheable;
#include <org/allbinary/media/image/io/ImageIOInterface.h>
class CommonStrings;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class ImageComparisonResultCacheSingleton;
class ImageComparisonResultFrameCacheable;
class ImageComparisonResult;
class ChangedPixelsUtil;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class ComparisonImageInputOutput
            : public virtual Object
        , public ImageIOInterface {

    private: static inline const std::string ROOT_NAME = "_Changed_";

    /*protected*/ public: LogUtil* logUtil;

public: ComparisonImageInputOutput();

                //@Throws(Exception.constructor)
            
    public: void save(int64_t frame);

                //@Throws(Exception.constructor)
            
    public: void save(ImageComparisonResult* imageComparisonResult, int64_t frame);

};

            


        #endif //ORG_ALLBINARY_MEDIA_IMAGE_COMPARISON_COMPARISONIMAGEINPUTOUTPUT_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_MEDIA_IMAGE_COMPARISON_COMPARISONIMAGEINPUTOUTPUT_H_COMPLETE)
        #define ORG_ALLBINARY_MEDIA_IMAGE_COMPARISON_COMPARISONIMAGEINPUTOUTPUT_H_COMPLETE
        #if __has_include(<java/awt/image/BufferedImage.h>)
#include <java/awt/image/BufferedImage.h>
#endif
#if __has_include(<org/allbinary/input/automation/ImageOutputData.h>)
#include <org/allbinary/input/automation/ImageOutputData.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/java/number/LongUtil.h>)
#include <org/allbinary/logic/java/number/LongUtil.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/logic/util/cache/AutomaticCacheInterface.h>)
#include <org/allbinary/logic/util/cache/AutomaticCacheInterface.h>
#endif
#if __has_include(<org/allbinary/logic/visual/media/MediaDataFactory.h>)
#include <org/allbinary/logic/visual/media/MediaDataFactory.h>
#endif
#if __has_include(<org/allbinary/media/image/ImagePersistanceUtil.h>)
#include <org/allbinary/media/image/ImagePersistanceUtil.h>
#endif
#if __has_include(<org/allbinary/media/image/cache/BufferedImageCacheable.h>)
#include <org/allbinary/media/image/cache/BufferedImageCacheable.h>
#endif
#if __has_include(<org/allbinary/media/image/io/ImageIOInterface.h>)
#include <org/allbinary/media/image/io/ImageIOInterface.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include("org/allbinary/media/image/comparison/ImageComparisonResultCacheSingleton.h")
#include "org/allbinary/media/image/comparison/ImageComparisonResultCacheSingleton.h"
#endif
#if __has_include("org/allbinary/media/image/comparison/ImageComparisonResultFrameCacheable.h")
#include "org/allbinary/media/image/comparison/ImageComparisonResultFrameCacheable.h"
#endif
#if __has_include("org/allbinary/media/image/comparison/ImageComparisonResult.h")
#include "org/allbinary/media/image/comparison/ImageComparisonResult.h"
#endif
#if __has_include("org/allbinary/media/image/comparison/ChangedPixelsUtil.h")
#include "org/allbinary/media/image/comparison/ChangedPixelsUtil.h"
#endif

        #endif
    
