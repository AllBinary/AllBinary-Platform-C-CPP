
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_USER_COMMERCE_MONEY_TAX_MODULES_TAXMODULEINTERFACE_H
        #define ORG_ALLBINARY_BUSINESS_USER_COMMERCE_MONEY_TAX_MODULES_TAXMODULEINTERFACE_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Boolean.h"
        
            #include "java/lang/Float.h"
        
class StoreFrontInterface;
class StreetAddress;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class TaxModuleInterface
            : public virtual Object
         {

                //@Throws(Exception.constructor)
            
    public: virtual float getTaxRate(StreetAddress* streetAddress, StoreFrontInterface* storeFrontInterface) = 0;

                //@Throws(Exception.constructor)
            
    public: virtual bool isValid(StreetAddress* streetAddress, StoreFrontInterface* storeFrontInterface) = 0;

};

            


        #endif //ORG_ALLBINARY_BUSINESS_USER_COMMERCE_MONEY_TAX_MODULES_TAXMODULEINTERFACE_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_BUSINESS_USER_COMMERCE_MONEY_TAX_MODULES_TAXMODULEINTERFACE_H_COMPLETE)
        #define ORG_ALLBINARY_BUSINESS_USER_COMMERCE_MONEY_TAX_MODULES_TAXMODULEINTERFACE_H_COMPLETE
        #if __has_include(<org/allbinary/business/context/modules/storefront/StoreFrontInterface.h>)
#include <org/allbinary/business/context/modules/storefront/StoreFrontInterface.h>
#endif
#if __has_include(<org/allbinary/business/user/address/StreetAddress.h>)
#include <org/allbinary/business/user/address/StreetAddress.h>
#endif

        #endif
    
