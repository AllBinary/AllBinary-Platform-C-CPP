
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
        



        #ifndef ORG_ALLBINARY_MEDIA_IMAGE_COMPARISON_IMAGECOMPARISONRESULTFRAMECACHEABLE_H
        #define ORG_ALLBINARY_MEDIA_IMAGE_COMPARISON_IMAGECOMPARISONRESULTFRAMECACHEABLE_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Long.h"
        
class StringMaker;
#include <org/allbinary/logic/util/cache/CacheableInterface.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class ImageComparisonResult;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class ImageComparisonResultFrameCacheable
            : public virtual Object
        , public virtual CacheableInterface {

    private: int64_t frame;

    private: ImageComparisonResult* imageComparisonResult;

public: ImageComparisonResultFrameCacheable(ImageComparisonResult* imageComparisonResult, int64_t frame);

    public: Object* getKey();

    public: int64_t getFrame();

    public: void setFrame(int64_t frame);

    public: ImageComparisonResult* getImageComparisonResult();

    public: void setImageComparisonResult(ImageComparisonResult* imageComparisonResult);

    public: std::string toString();

};

            


        #endif //ORG_ALLBINARY_MEDIA_IMAGE_COMPARISON_IMAGECOMPARISONRESULTFRAMECACHEABLE_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_MEDIA_IMAGE_COMPARISON_IMAGECOMPARISONRESULTFRAMECACHEABLE_H_COMPLETE)
        #define ORG_ALLBINARY_MEDIA_IMAGE_COMPARISON_IMAGECOMPARISONRESULTFRAMECACHEABLE_H_COMPLETE
        #if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/logic/util/cache/CacheableInterface.h>)
#include <org/allbinary/logic/util/cache/CacheableInterface.h>
#endif
#if __has_include("org/allbinary/media/image/comparison/ImageComparisonResult.h")
#include "org/allbinary/media/image/comparison/ImageComparisonResult.h"
#endif

        #endif
    
