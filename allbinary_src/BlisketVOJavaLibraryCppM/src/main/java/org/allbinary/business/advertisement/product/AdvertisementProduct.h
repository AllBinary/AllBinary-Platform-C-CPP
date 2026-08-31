
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_ADVERTISEMENT_PRODUCT_ADVERTISEMENTPRODUCT_H
        #define ORG_ALLBINARY_BUSINESS_ADVERTISEMENT_PRODUCT_ADVERTISEMENTPRODUCT_H

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

public constructor ();

    public string getType();

    public string getLink();

    public int32_t getNumber();

    public TwoDimensionalConstraintInterface getTwoDimensionalConstraint();

};

            


        #endif //ORG_ALLBINARY_BUSINESS_ADVERTISEMENT_PRODUCT_ADVERTISEMENTPRODUCT_H
