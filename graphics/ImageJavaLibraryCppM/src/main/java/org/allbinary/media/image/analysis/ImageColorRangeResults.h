
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
        



        #ifndef ORG_ALLBINARY_MEDIA_IMAGE_ANALYSIS_IMAGECOLORRANGERESULTS_H
        #define ORG_ALLBINARY_MEDIA_IMAGE_ANALYSIS_IMAGECOLORRANGERESULTS_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class ColorRangeInterface;
class ColorRange;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class ImageColorRangeResults
            : public virtual Object
         {

    private: ColorRangeInterface* colorRangeInterface;

    private: int64_t matchingPixelsChecked= 0;

    private: int64_t totalPixelsChecked= 0;

public: ImageColorRangeResults();

    public: ColorRangeInterface* getColorRangeInterface();

    public: void setColorRangeInterface(ColorRangeInterface* colorRangeInterface);

    public: int64_t getMatchingPixelsChecked();

    public: void setMatchingPixelsChecked(int64_t matchingPixelsChecked);

    public: void addMatchingPixelsChecked();

    public: int64_t getTotalPixelsChecked();

    public: void addTotalPixelsChecked();

    public: void setTotalPixelsChecked(int64_t totalPixelsChecked);

    public: float getPercent();

};

            


        #endif //ORG_ALLBINARY_MEDIA_IMAGE_ANALYSIS_IMAGECOLORRANGERESULTS_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_MEDIA_IMAGE_ANALYSIS_IMAGECOLORRANGERESULTS_H_COMPLETE)
        #define ORG_ALLBINARY_MEDIA_IMAGE_ANALYSIS_IMAGECOLORRANGERESULTS_H_COMPLETE
        #if __has_include("org/allbinary/media/image/analysis/ColorRangeInterface.h")
#include "org/allbinary/media/image/analysis/ColorRangeInterface.h"
#endif
#if __has_include("org/allbinary/media/image/analysis/ColorRange.h")
#include "org/allbinary/media/image/analysis/ColorRange.h"
#endif

        #endif
    
