
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
        



            #include "../../../../../../java/lang/Object.h"
        
            #include "../../../../../../java/lang/Exception.h"
        
#include <java/util/Vector.h>

      
#include <org/allbinary/media/image/comparison/ImageComparisonResult.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class MotionRectangles
            : public Object
         {

    private: std::string name;

    private: Vector rectangleVector;

    private: ImageComparisonResult imageComparisonResult;

    protected: const int32_t MAX_PIXEL_DISTANCE_THRESHOLD = 2;

public: MotionRectangles(std::string name, ImageComparisonResult imageComparisonResult){
this->name= name;
    
this->setImageComparisonResult(imageComparisonResult);
    
this->setVector(Vector());
    
}


    public: Vector getVector(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->rectangleVector;
    
}


    public: void setVector(Vector rectangleVector){
this->rectangleVector= rectangleVector;
    
}


    public: std::string getName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->name;
    
}


    public: ImageComparisonResult getImageComparisonResult(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->imageComparisonResult;
    
}


    public: void setImageComparisonResult(ImageComparisonResult imageComparisonResult){
this->imageComparisonResult= imageComparisonResult;
    
}


};

            

