
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
        



        #ifndef ORG_ALLBINARY_DATA_TABLES_USER_ADDRESS_SHIPPING_SHIPPINGADDRESSESENTITY_H
        #define ORG_ALLBINARY_DATA_TABLES_USER_ADDRESS_SHIPPING_SHIPPINGADDRESSESENTITY_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <org/allbinary/data/tables/user/address/StreetAddressesEntity.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class ShippingAddressesEntity: public StreetAddressesEntity {

    private: const std::string TABLENAME = "shipping";

public: ShippingAddressesEntity(std::string userName);

};

            


        #endif //ORG_ALLBINARY_DATA_TABLES_USER_ADDRESS_SHIPPING_SHIPPINGADDRESSESENTITY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_DATA_TABLES_USER_ADDRESS_SHIPPING_SHIPPINGADDRESSESENTITY_H_COMPLETE)
        #define ORG_ALLBINARY_DATA_TABLES_USER_ADDRESS_SHIPPING_SHIPPINGADDRESSESENTITY_H_COMPLETE
        #if __has_include(<org/allbinary/data/tables/user/address/StreetAddressesEntity.h>)
#include <org/allbinary/data/tables/user/address/StreetAddressesEntity.h>
#endif

        #endif
    
