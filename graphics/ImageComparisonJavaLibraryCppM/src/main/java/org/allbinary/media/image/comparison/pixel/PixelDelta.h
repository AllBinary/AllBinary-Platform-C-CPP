
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
        



        #ifndef ORG_ALLBINARY_MEDIA_IMAGE_COMPARISON_PIXEL_PIXELDELTA_H
        #define ORG_ALLBINARY_MEDIA_IMAGE_COMPARISON_PIXEL_PIXELDELTA_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class GPoint;
class TsUtil;
class StringMaker;
#include <org/allbinary/logic/util/cache/CacheableInterface.h>
class ColorDelta;
class CommonSeps;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class PixelDelta
            : public virtual Object
        , public virtual CacheableInterface {

    public: static Object* getKey(GPoint* point, ColorDelta* colorDelta);

    private: GPoint* point;

    private: ColorDelta* colorDelta;

    private: Object* key;

public: PixelDelta(GPoint* point, ColorDelta* colorDelta);

    public: Object* getKey();

    public: GPoint* getPoint();

    public: void setPoint(GPoint* point);

    public: ColorDelta* getColorDelta();

    public: void setColorDelta(ColorDelta* colorDelta);

    public: std::string toString();

};

            


        #endif //ORG_ALLBINARY_MEDIA_IMAGE_COMPARISON_PIXEL_PIXELDELTA_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_MEDIA_IMAGE_COMPARISON_PIXEL_PIXELDELTA_H_COMPLETE)
        #define ORG_ALLBINARY_MEDIA_IMAGE_COMPARISON_PIXEL_PIXELDELTA_H_COMPLETE
        #if __has_include(<org/allbinary/graphics/GPoint.h>)
#include <org/allbinary/graphics/GPoint.h>
#endif
#if __has_include(<org/allbinary/TsUtil.h>)
#include <org/allbinary/TsUtil.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/logic/util/cache/CacheableInterface.h>)
#include <org/allbinary/logic/util/cache/CacheableInterface.h>
#endif
#if __has_include(<org/allbinary/media/image/comparison/color/ColorDelta.h>)
#include <org/allbinary/media/image/comparison/color/ColorDelta.h>
#endif
#if __has_include(<org/allbinary/string/CommonSeps.h>)
#include <org/allbinary/string/CommonSeps.h>
#endif

        #endif
    
