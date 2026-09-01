
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
        
#include <org/allbinary/logic/control/contraints/size/TwoDimensionalConstraintInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "AdvertisementImageInterface.h"

class AdvertisementImage
            : public Object
        : public AdvertisementImageInterface {

    private: std::string imageFileName;

    private: std::string imageUrl;

    private: TwoDimensionalConstraintInterface constraint;

public: AdvertisementImage(){
}


    public: std::string getFileName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->imageFileName;
    
}


    public: std::string getUrl(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->imageUrl;
    
}


    public: TwoDimensionalConstraintInterface getTwoDimensionalConstraint(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->constraint;
    
}


};

            

