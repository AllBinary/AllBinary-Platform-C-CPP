
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_ADVERTISEMENT_PRODUCT_ADVERTISEMENTPRODUCTINTERFACE_H
        #define ORG_ALLBINARY_BUSINESS_ADVERTISEMENT_PRODUCT_ADVERTISEMENTPRODUCTINTERFACE_H

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <org/allbinary/logic/control/contraints/size/TwoDimensionalConstraintInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class AdvertisementProductInterface {

    public: virtual std::string getType() = 0;

    public: virtual std::string getLink() = 0;

    public: virtual int32_t getNumber() = 0;

    public: virtual TwoDimensionalConstraintInterface* getTwoDimensionalConstraint() = 0;

};

            


        #endif //ORG_ALLBINARY_BUSINESS_ADVERTISEMENT_PRODUCT_ADVERTISEMENTPRODUCTINTERFACE_H
