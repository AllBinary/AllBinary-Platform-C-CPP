
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
        



        #ifndef ORG_ALLBINARY_MEDIA_IMAGE_COMPARISON_COLOR_COLORDELTA_H
        #define ORG_ALLBINARY_MEDIA_IMAGE_COMPARISON_COLOR_COLORDELTA_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Integer.h"
        
class StringMaker;
class StringUtil;
#include <org/allbinary/logic/util/cache/CacheableInterface.h>
class CommonSeps;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class ColorDelta
            : public virtual Object
        , public virtual CacheableInterface {

    public: static Object* getKey(int32_t rgb1, int32_t rgb2);

    private: int32_t rgb1= 0;

    private: int32_t rgb2= 0;

    private: Object* key;

public: ColorDelta(int32_t rgb1, int32_t rgb2);

    public: Object* getKey();

    public: int32_t getRgb1();

    /*protected*/ public: void setRgb1(int32_t rgb1);

    public: int32_t getRgb2();

    /*protected*/ public: void setRgb2(int32_t rgb2);

    public: std::string toString();

};

            


        #endif //ORG_ALLBINARY_MEDIA_IMAGE_COMPARISON_COLOR_COLORDELTA_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_MEDIA_IMAGE_COMPARISON_COLOR_COLORDELTA_H_COMPLETE)
        #define ORG_ALLBINARY_MEDIA_IMAGE_COMPARISON_COLOR_COLORDELTA_H_COMPLETE
        #if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringUtil.h>)
#include <org/allbinary/logic/string/StringUtil.h>
#endif
#if __has_include(<org/allbinary/logic/util/cache/CacheableInterface.h>)
#include <org/allbinary/logic/util/cache/CacheableInterface.h>
#endif
#if __has_include(<org/allbinary/string/CommonSeps.h>)
#include <org/allbinary/string/CommonSeps.h>
#endif

        #endif
    
