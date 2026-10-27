
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
        



        #ifndef ORG_ALLBINARY_MEDIA_IMAGE_ANALYSIS_IMAGECOLORRESULTS_H
        #define ORG_ALLBINARY_MEDIA_IMAGE_ANALYSIS_IMAGECOLORRESULTS_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class ColorRange;
class ColorAverage;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class ImageColorResults
            : public virtual Object
         {

    private: ColorRange* colorRange;

    private: ColorAverage* colorAverage;

public: ImageColorResults();

    public: ColorRange* getColorRange();

    public: void setColorRange(ColorRange* colorRange);

    public: ColorAverage* getColorAverage();

    public: void setColorAverage(ColorAverage* colorAverage);

};

            


        #endif //ORG_ALLBINARY_MEDIA_IMAGE_ANALYSIS_IMAGECOLORRESULTS_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_MEDIA_IMAGE_ANALYSIS_IMAGECOLORRESULTS_H_COMPLETE)
        #define ORG_ALLBINARY_MEDIA_IMAGE_ANALYSIS_IMAGECOLORRESULTS_H_COMPLETE
        #if __has_include("org/allbinary/media/image/analysis/ColorRange.h")
#include "org/allbinary/media/image/analysis/ColorRange.h"
#endif
#if __has_include("org/allbinary/media/image/analysis/ColorAverage.h")
#include "org/allbinary/media/image/analysis/ColorAverage.h"
#endif

        #endif
    
