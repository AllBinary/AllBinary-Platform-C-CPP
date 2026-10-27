
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
        



        #ifndef ORG_ALLBINARY_MEDIA_IMAGE_ANALYSIS_IMAGECOLORRESULTS_CPP
        #define ORG_ALLBINARY_MEDIA_IMAGE_ANALYSIS_IMAGECOLORRESULTS_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/media/image/analysis/ImageColorResults.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/media/image/analysis/ColorRange.h"
#include "org/allbinary/media/image/analysis/ColorAverage.h"


ImageColorResults::ImageColorResults(){
this->setColorRange(new ColorRange());
    
this->getColorRange()->setMaxRed( -1);
    
this->getColorRange()->setMaxGreen( -1);
    
this->getColorRange()->setMaxBlue( -1);
    
this->getColorRange()->setMinRed(256);
    
this->getColorRange()->setMinGreen(256);
    
this->getColorRange()->setMinBlue(256);
    
this->setColorAverage(new ColorAverage());
    
}


    auto ImageColorResults::getColorRange() -> ColorRange*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->colorRange;
    
}


    auto ImageColorResults::setColorRange(ColorRange* colorRange) -> void{
this->colorRange= colorRange;
    
}


    auto ImageColorResults::getColorAverage() -> ColorAverage*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->colorAverage;
    
}


    auto ImageColorResults::setColorAverage(ColorAverage* colorAverage) -> void{
this->colorAverage= colorAverage;
    
}




        #endif //ORG_ALLBINARY_MEDIA_IMAGE_ANALYSIS_IMAGECOLORRESULTS_CPP
