
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
        



#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ImageComparisonResult.h"

class ImageComparisonResultsEvent: public AllBinaryEventObject {

    private: ImageComparisonResult imageComparisonResult;

public: ImageComparisonResultsEvent(Object* anyType, ImageComparisonResult imageComparisonInfo){
            super(anyType);
                    

                            //For kotlin this is before the body of the constructor.
                    
this->setImageComparisonResult(imageComparisonInfo);
    
}


    public: ImageComparisonResult getImageComparisonResult(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->imageComparisonResult;
    
}


    public: void setImageComparisonResult(ImageComparisonResult imageComparisonResult){
this->imageComparisonResult= imageComparisonResult;
    
}


};

            

