
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
        



        #ifndef ORG_ALLBINARY_MEDIA_IMAGE_ANALYSIS_IMAGEANALYSISRESULTS_CPP
        #define ORG_ALLBINARY_MEDIA_IMAGE_ANALYSIS_IMAGEANALYSISRESULTS_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/media/image/analysis/ImageAnalysisResults.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/media/image/analysis/ImageColorRangeResults.h"
#include "org/allbinary/media/image/analysis/ImageColorResults.h"


ImageAnalysisResults::ImageAnalysisResults(){
this->imageColorRangeResults= new ImageColorRangeResults();
    
this->imageColorResults= new ImageColorResults();
    
}


    auto ImageAnalysisResults::getImageColorRangeResults() -> ImageColorRangeResults*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->imageColorRangeResults;
    
}


    auto ImageAnalysisResults::setImageColorRangeResults(ImageColorRangeResults* imageColorRangeResults) -> void{
this->imageColorRangeResults= imageColorRangeResults;
    
}


    auto ImageAnalysisResults::getAverageAmbientLevel() -> float{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->averageAmbientLevel;
    
}


    auto ImageAnalysisResults::setAverageAmbientLevel(float averageAmbientLevel) -> void{
this->averageAmbientLevel= averageAmbientLevel;
    
}


    auto ImageAnalysisResults::getImageColorResults() -> ImageColorResults*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->imageColorResults;
    
}


    auto ImageAnalysisResults::setImageColorResults(ImageColorResults* imageColorResults) -> void{
this->imageColorResults= imageColorResults;
    
}




        #endif //ORG_ALLBINARY_MEDIA_IMAGE_ANALYSIS_IMAGEANALYSISRESULTS_CPP
