
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

            #include "../../../../../java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ColorRangeInterface.h"
#include "ColorRange.h"

class ImageColorRangeResults
            : public Object
         {
        

    private: colorRangeInterface: ColorRangeInterface;

    private: matchingPixelsChecked: int64_t= 0;

    private: totalPixelsChecked: int64_t= 0;

public constructor ();

    public ColorRangeInterface getColorRangeInterface();

    public setColorRangeInterface(ColorRangeInterface colorRangeInterface);

    public int64_t getMatchingPixelsChecked();

    public setMatchingPixelsChecked(int64_t matchingPixelsChecked);

    public addMatchingPixelsChecked();

    public int64_t getTotalPixelsChecked();

    public addTotalPixelsChecked();

    public setTotalPixelsChecked(int64_t totalPixelsChecked);

    public float getPercent();

};

            


        #endif //ORG_ALLBINARY_MEDIA_IMAGE_ANALYSIS_IMAGECOLORRANGERESULTS_H
