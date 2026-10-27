
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
        



        #ifndef ORG_ALLBINARY_MEDIA_IMAGE_ANALYSIS_COLORRANGE_H
        #define ORG_ALLBINARY_MEDIA_IMAGE_ANALYSIS_COLORRANGE_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <java/awt.h>
class StringMaker;
class CommonSeps;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/media/image/analysis/ColorRangeInterface.h"
class Color;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class ColorRange
            : public virtual Object
        , public ColorRangeInterface {

    private: int32_t minRed;

    private: int32_t maxRed;

    private: int32_t minGreen;

    private: int32_t maxGreen;

    private: int32_t minBlue;

    private: int32_t maxBlue;

public: ColorRange();

    public: int32_t getMinRed();

    public: void setMinRed(int32_t minRed);

    public: int32_t getMaxRed();

    public: void setMaxRed(int32_t maxRed);

    public: int32_t getMinGreen();

    public: void setMinGreen(int32_t minGreen);

    public: int32_t getMaxGreen();

    public: void setMaxGreen(int32_t maxGreen);

    public: int32_t getMinBlue();

    public: void setMinBlue(int32_t minBlue);

    public: int32_t getMaxBlue();

    public: void setMaxBlue(int32_t maxBlue);

    public: bool isInRange(Color* color);

    public: std::string toString();

};

            


        #endif //ORG_ALLBINARY_MEDIA_IMAGE_ANALYSIS_COLORRANGE_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_MEDIA_IMAGE_ANALYSIS_COLORRANGE_H_COMPLETE)
        #define ORG_ALLBINARY_MEDIA_IMAGE_ANALYSIS_COLORRANGE_H_COMPLETE
        #if __has_include(<java/awt.h>)
#include <java/awt.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/string/CommonSeps.h>)
#include <org/allbinary/string/CommonSeps.h>
#endif
#if __has_include("org/allbinary/media/image/analysis/ColorRangeInterface.h")
#include "org/allbinary/media/image/analysis/ColorRangeInterface.h"
#endif
#if __has_include("org/allbinary/media/image/analysis/Color.h")
#include "org/allbinary/media/image/analysis/Color.h"
#endif

        #endif
    
