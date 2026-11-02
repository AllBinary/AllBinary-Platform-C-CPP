
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class TwoDimensionalConstraintInterface;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/business/advertisement/product/AdvertisementProductInterface.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class AdvertisementProduct
            : public virtual Object
        , public AdvertisementProductInterface {

    private: std::string type;

    private: std::string link;

    private: int32_t number= 0;

    private: TwoDimensionalConstraintInterface* constraint;

public: AdvertisementProduct();

    public: std::string getType();

    public: std::string getLink();

    public: int32_t getNumber();

    public: TwoDimensionalConstraintInterface* getTwoDimensionalConstraint();

};

            


        #endif //ORG_ALLBINARY_BUSINESS_ADVERTISEMENT_PRODUCT_ADVERTISEMENTPRODUCT_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_BUSINESS_ADVERTISEMENT_PRODUCT_ADVERTISEMENTPRODUCT_H_COMPLETE)
        #define ORG_ALLBINARY_BUSINESS_ADVERTISEMENT_PRODUCT_ADVERTISEMENTPRODUCT_H_COMPLETE
        #if __has_include(<org/allbinary/logic/control/contraints/size/TwoDimensionalConstraintInterface.h>)
#include <org/allbinary/logic/control/contraints/size/TwoDimensionalConstraintInterface.h>
#endif
#if __has_include("org/allbinary/business/advertisement/product/AdvertisementProductInterface.h")
#include "org/allbinary/business/advertisement/product/AdvertisementProductInterface.h"
#endif

        #endif
    
