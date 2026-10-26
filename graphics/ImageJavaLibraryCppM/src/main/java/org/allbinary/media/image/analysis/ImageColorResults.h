
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

            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ColorRange.h"
#include "ColorAverage.h"

class ImageColorResults
            : public Object
         {

    private: ColorRange colorRange;

    private: ColorAverage colorAverage;

public: ImageColorResults();

    public: ColorRange getColorRange();

    public: void setColorRange(ColorRange colorRange);

    public: ColorAverage getColorAverage();

    public: void setColorAverage(ColorAverage colorAverage);

};

            


        #endif //ORG_ALLBINARY_MEDIA_IMAGE_ANALYSIS_IMAGECOLORRESULTS_H
