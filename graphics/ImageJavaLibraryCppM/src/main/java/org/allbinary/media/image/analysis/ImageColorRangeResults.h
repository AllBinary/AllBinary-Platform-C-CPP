
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

            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ColorRangeInterface.h"
#include "ColorRange.h"

class ImageColorRangeResults
            : public Object
         {

    private: ColorRangeInterface colorRangeInterface;

    private: int64_t matchingPixelsChecked= 0;

    private: int64_t totalPixelsChecked= 0;

public: ImageColorRangeResults();

    public: ColorRangeInterface getColorRangeInterface();

    public: void setColorRangeInterface(ColorRangeInterface colorRangeInterface);

    public: int64_t getMatchingPixelsChecked();

    public: void setMatchingPixelsChecked(int64_t matchingPixelsChecked);

    public: void addMatchingPixelsChecked();

    public: int64_t getTotalPixelsChecked();

    public: void addTotalPixelsChecked();

    public: void setTotalPixelsChecked(int64_t totalPixelsChecked);

    public: float getPercent();

};

            


        #endif //ORG_ALLBINARY_MEDIA_IMAGE_ANALYSIS_IMAGECOLORRANGERESULTS_H
