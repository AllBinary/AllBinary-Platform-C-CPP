
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

public: ImageAnalysisResults(){
this->imageColorRangeResults= new ImageColorRangeResults();
    
this->imageColorResults= new ImageColorResults();
    
}


    public: ImageColorRangeResults* getImageColorRangeResults(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->imageColorRangeResults;
    
}


    public: void setImageColorRangeResults(ImageColorRangeResults* imageColorRangeResults){
this->imageColorRangeResults= imageColorRangeResults;
    
}


    public: float getAverageAmbientLevel(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->averageAmbientLevel;
    
}


    public: void setAverageAmbientLevel(float averageAmbientLevel){
this->averageAmbientLevel= averageAmbientLevel;
    
}


    public: ImageColorResults* getImageColorResults(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->imageColorResults;
    
}


    public: void setImageColorResults(ImageColorResults* imageColorResults){
this->imageColorResults= imageColorResults;
    
}


};

            

