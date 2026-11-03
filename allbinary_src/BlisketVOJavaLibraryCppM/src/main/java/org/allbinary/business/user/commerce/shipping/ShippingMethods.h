
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_USER_COMMERCE_SHIPPING_SHIPPINGMETHODS_H
        #define ORG_ALLBINARY_BUSINESS_USER_COMMERCE_SHIPPING_SHIPPINGMETHODS_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class BasicArrayList;

class StoreFrontInterface;
class ShippingInterface;
class LogUtil;
class AbeClientInformationInterface;
class CommonStrings;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/business/user/commerce/shipping/ShippingMethodsInterface.h"
class ShippingMethodsFactory;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class ShippingMethods
            : public virtual Object
        , public virtual ShippingMethodsInterface {

    /*protected*/ public: LogUtil* logUtil;

    /*protected*/ public: CommonStrings* commonStrings;

    private: BasicArrayList* shippingVector;

    private: ShippingInterface* defaultShippingMethodInterface;

public: ShippingMethods(AbeClientInformationInterface* abeClientInformation, StoreFrontInterface* storeFrontInterface);

    public: BasicArrayList* get();

                //@Throws(Exception.constructor)
            
    public: ShippingInterface* getShippingInterface(std::string name);

                //@Throws(Exception.constructor)
            
    public: ShippingInterface* getDefault();

};

            


        #endif //ORG_ALLBINARY_BUSINESS_USER_COMMERCE_SHIPPING_SHIPPINGMETHODS_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_BUSINESS_USER_COMMERCE_SHIPPING_SHIPPINGMETHODS_H_COMPLETE)
        #define ORG_ALLBINARY_BUSINESS_USER_COMMERCE_SHIPPING_SHIPPINGMETHODS_H_COMPLETE
        #if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif

#if __has_include(<org/allbinary/business/context/modules/storefront/StoreFrontInterface.h>)
#include <org/allbinary/business/context/modules/storefront/StoreFrontInterface.h>
#endif
#if __has_include(<org/allbinary/business/user/commerce/shipping/modules/ShippingInterface.h>)
#include <org/allbinary/business/user/commerce/shipping/modules/ShippingInterface.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>)
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include("org/allbinary/business/user/commerce/shipping/ShippingMethodsInterface.h")
#include "org/allbinary/business/user/commerce/shipping/ShippingMethodsInterface.h"
#endif
#if __has_include("org/allbinary/business/user/commerce/shipping/ShippingMethodsFactory.h")
#include "org/allbinary/business/user/commerce/shipping/ShippingMethodsFactory.h"
#endif

        #endif
    
