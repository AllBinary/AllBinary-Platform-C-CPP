
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

            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFrontInterface.h>

      
#include <org/allbinary/business/user/commerce/shipping/modules/ShippingInterface.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ShippingMethodsInterface.h"
#include "ShippingMethodsFactory.h"

class ShippingMethods
            : public Object
        : public ShippingMethodsInterface {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    protected: const CommonStrings commonStrings = CommonStrings::getInstance();

    private: BasicArrayList shippingVector;

    private: ShippingInterface defaultShippingMethodInterface;

public: ShippingMethods(AbeClientInformationInterface abeClientInformation, StoreFrontInterface storeFrontInterface);

    public: BasicArrayList get();

                //@Throws(Exception.constructor)
            
    public: ShippingInterface getShippingInterface(std::string name);

                //@Throws(Exception.constructor)
            
    public: ShippingInterface getDefault();

};

            


        #endif //ORG_ALLBINARY_BUSINESS_USER_COMMERCE_SHIPPING_SHIPPINGMETHODS_H
