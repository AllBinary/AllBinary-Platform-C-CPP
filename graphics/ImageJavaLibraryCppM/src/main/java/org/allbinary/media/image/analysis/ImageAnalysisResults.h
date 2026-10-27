
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
        



        #ifndef ORG_ALLBINARY_MEDIA_IMAGE_ANALYSIS_IMAGEANALYSISRESULTS_H
        #define ORG_ALLBINARY_MEDIA_IMAGE_ANALYSIS_IMAGEANALYSISRESULTS_H

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/media/image/analysis/ImageColorRangeResults.h"
#include "org/allbinary/media/image/analysis/ImageColorResults.h"

class ImageAnalysisResults
            : public Object
         {

    private: ImageColorRangeResults* imageColorRangeResults;

    private: ImageColorResults* imageColorResults;

    private: float averageAmbientLevel= 0.0;

public: ImageAnalysisResults();

    public: ImageColorRangeResults* getImageColorRangeResults();

    public: void setImageColorRangeResults(ImageColorRangeResults* imageColorRangeResults);

    public: float getAverageAmbientLevel();

    public: void setAverageAmbientLevel(float averageAmbientLevel);

    public: ImageColorResults* getImageColorResults();

    public: void setImageColorResults(ImageColorResults* imageColorResults);

};

            


        #endif //ORG_ALLBINARY_MEDIA_IMAGE_ANALYSIS_IMAGEANALYSISRESULTS_H
