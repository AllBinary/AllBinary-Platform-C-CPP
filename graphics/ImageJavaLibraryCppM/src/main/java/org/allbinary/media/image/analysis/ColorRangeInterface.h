
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
        



        #ifndef ORG_ALLBINARY_MEDIA_IMAGE_ANALYSIS_COLORRANGEINTERFACE_H
        #define ORG_ALLBINARY_MEDIA_IMAGE_ANALYSIS_COLORRANGEINTERFACE_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <java/awt.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class Color;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class ColorRangeInterface
            : public virtual Object
         {

    public: virtual int32_t getMinRed() = 0;

    public: virtual void setMinRed(int32_t minRed) = 0;

    public: virtual int32_t getMaxRed() = 0;

    public: virtual void setMaxRed(int32_t maxRed) = 0;

    public: virtual int32_t getMinGreen() = 0;

    public: virtual void setMinGreen(int32_t minGreen) = 0;

    public: virtual int32_t getMaxGreen() = 0;

    public: virtual void setMaxGreen(int32_t maxGreen) = 0;

    public: virtual int32_t getMinBlue() = 0;

    public: virtual void setMinBlue(int32_t minBlue) = 0;

    public: virtual int32_t getMaxBlue() = 0;

    public: virtual void setMaxBlue(int32_t maxBlue) = 0;

    public: virtual bool isInRange(Color* color) = 0;

};

            


        #endif //ORG_ALLBINARY_MEDIA_IMAGE_ANALYSIS_COLORRANGEINTERFACE_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_MEDIA_IMAGE_ANALYSIS_COLORRANGEINTERFACE_H_COMPLETE)
        #define ORG_ALLBINARY_MEDIA_IMAGE_ANALYSIS_COLORRANGEINTERFACE_H_COMPLETE
        #if __has_include(<java/awt.h>)
#include <java/awt.h>
#endif
#if __has_include("org/allbinary/media/image/analysis/Color.h")
#include "org/allbinary/media/image/analysis/Color.h"
#endif

        #endif
    
