
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
        



        #ifndef ORG_ALLBINARY_INPUT_MEDIA_IMAGE_CAPTURE_CAPTUREDIMAGEINPUTOUTPUT_H
        #define ORG_ALLBINARY_INPUT_MEDIA_IMAGE_CAPTURE_CAPTUREDIMAGEINPUTOUTPUT_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

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
class ImageUtil;
class BufferedImageFrameCacheable;
#include <org/allbinary/media/image/io/ImageIOInterface.h>
class CommonStrings;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class CapturedBufferedImagesCacheSingleton;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class CapturedImageInputOutput
            : public virtual Object
        , public virtual ImageIOInterface {


            
    public: CapturedImageInputOutput();
        
    /*protected*/ public: LogUtil* logUtil;

                //@Throws(Exception.constructor)
            
    public: void save(int64_t frame);

    public: void save(BufferedImage* bufferedImage, int64_t frame);

};

            


        #endif //ORG_ALLBINARY_INPUT_MEDIA_IMAGE_CAPTURE_CAPTUREDIMAGEINPUTOUTPUT_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_INPUT_MEDIA_IMAGE_CAPTURE_CAPTUREDIMAGEINPUTOUTPUT_H_COMPLETE)
        #define ORG_ALLBINARY_INPUT_MEDIA_IMAGE_CAPTURE_CAPTUREDIMAGEINPUTOUTPUT_H_COMPLETE
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
#if __has_include(<org/allbinary/media/image/ImageUtil.h>)
#include <org/allbinary/media/image/ImageUtil.h>
#endif
#if __has_include(<org/allbinary/media/image/cache/BufferedImageFrameCacheable.h>)
#include <org/allbinary/media/image/cache/BufferedImageFrameCacheable.h>
#endif
#if __has_include(<org/allbinary/media/image/io/ImageIOInterface.h>)
#include <org/allbinary/media/image/io/ImageIOInterface.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include("org/allbinary/input/media/image/capture/CapturedBufferedImagesCacheSingleton.h")
#include "org/allbinary/input/media/image/capture/CapturedBufferedImagesCacheSingleton.h"
#endif

        #endif
    
