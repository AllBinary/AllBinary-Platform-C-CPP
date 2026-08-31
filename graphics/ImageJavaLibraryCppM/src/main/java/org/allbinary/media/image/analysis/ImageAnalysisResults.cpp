
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
        



            #include "../../../../../java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ImageColorRangeResults.h"
#include "ImageColorResults.h"

class ImageAnalysisResults
            : public Object
         {
        

    private: imageColorRangeResults: ImageColorRangeResults;

    private: imageColorResults: ImageColorResults;

    private: averageAmbientLevel: float= 0.0;

public constructor (){

            super();
        this.imageColorRangeResults= new ImageColorRangeResults();
    
this.imageColorResults= new ImageColorResults();
    
}


    public ImageColorRangeResults getImageColorRangeResults(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.imageColorRangeResults;
    
}


    public setImageColorRangeResults(ImageColorRangeResults imageColorRangeResults){
this.imageColorRangeResults= imageColorRangeResults;
    
}


    public float getAverageAmbientLevel(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.averageAmbientLevel;
    
}


    public setAverageAmbientLevel(float averageAmbientLevel){
this.averageAmbientLevel= averageAmbientLevel;
    
}


    public ImageColorResults getImageColorResults(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.imageColorResults;
    
}


    public setImageColorResults(ImageColorResults imageColorResults){
this.imageColorResults= imageColorResults;
    
}


};

            

