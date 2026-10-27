
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
        



        #ifndef ORG_ALLBINARY_MEDIA_IMAGE_CACHE_BUFFEREDIMAGECACHEABLE_H
        #define ORG_ALLBINARY_MEDIA_IMAGE_CACHE_BUFFEREDIMAGECACHEABLE_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <java/awt/image/BufferedImage.h>
class StringMaker;
#include <org/allbinary/logic/util/cache/CacheableInterface.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class BufferedImageInfo;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class BufferedImageCacheable
            : public virtual Object
        , public CacheableInterface {

    private: BufferedImageInfo* key;

    private: BufferedImage* bufferedImage;

public: BufferedImageCacheable(BufferedImageInfo* key);

    public: Object* getKey();

    public: BufferedImage* getBufferedImage();

    private: void setBufferedImage(BufferedImage* bufferedImage);

    public: std::string toString();

};

            


        #endif //ORG_ALLBINARY_MEDIA_IMAGE_CACHE_BUFFEREDIMAGECACHEABLE_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_MEDIA_IMAGE_CACHE_BUFFEREDIMAGECACHEABLE_H_COMPLETE)
        #define ORG_ALLBINARY_MEDIA_IMAGE_CACHE_BUFFEREDIMAGECACHEABLE_H_COMPLETE
        #if __has_include(<java/awt/image/BufferedImage.h>)
#include <java/awt/image/BufferedImage.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/logic/util/cache/CacheableInterface.h>)
#include <org/allbinary/logic/util/cache/CacheableInterface.h>
#endif
#if __has_include("org/allbinary/media/image/cache/BufferedImageInfo.h")
#include "org/allbinary/media/image/cache/BufferedImageInfo.h"
#endif

        #endif
    
