
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
        #include "AdvertisementProductInterface.h"

class AdvertisementProduct
            : public Object
        : public AdvertisementProductInterface {
        

    private: type: string;

    private: link: string;

    private: number: int32_t= 0;

    private: constraint: TwoDimensionalConstraintInterface;

public constructor (){

            super();
        }


    public string getType(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.type;
    
}


    public string getLink(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.link;
    
}


    public int32_t getNumber(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.number;
    
}


    public TwoDimensionalConstraintInterface getTwoDimensionalConstraint(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.constraint;
    
}


};

            

