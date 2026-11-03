
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_USER_COMMERCE_SHIPPING_SHIPPINGMETHODS_CPP
        #define ORG_ALLBINARY_BUSINESS_USER_COMMERCE_SHIPPING_SHIPPINGMETHODS_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/business/user/commerce/shipping/ShippingMethods.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
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
        #include "org/allbinary/business/user/commerce/shipping/ShippingMethodsInterface.h"
#include "org/allbinary/business/user/commerce/shipping/ShippingMethodsFactory.h"


ShippingMethods::ShippingMethods(AbeClientInformationInterface* abeClientInformation, StoreFrontInterface* storeFrontInterface) : logUtil(LogUtil::getInstance()), commonStrings(CommonStrings::getInstance()){
this->defaultShippingMethodInterface= (new ShippingMethodsFactory(abeClientInformation, storeFrontInterface))->getDefaultInstance();
    
this->shippingVector= (new ShippingMethodsFactory(abeClientInformation, storeFrontInterface))->getInstance();
    
}


    auto ShippingMethods::get() -> BasicArrayList*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->shippingVector;
    
}


                //@Throws(Exception.constructor)
            
    auto ShippingMethods::getShippingInterface(std::string name) -> ShippingInterface*{

    ShippingInterface* shipping;;
    

    int32_t size = this->shippingVector->size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
shipping= dynamic_cast<ShippingInterface*>(this->shippingVector->get(index));
    

                        if(name.compare(shipping->getName()) == 0)
                        


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return shipping;
    
}


    std::string error = JavaString::valueOf("Error Finding Shipping: ") +JavaString::valueOf(name);;
    

                        if(allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->SHIPPINGERROR))
                        
                                    {
                                    this->logUtil->putF(this->commonStrings->EXCEPTION, this, "getShippingInterface(String name)");
    

                                    }
                                



                            throw Exception(error);
                    
}


                //@Throws(Exception.constructor)
            
    auto ShippingMethods::getDefault() -> ShippingInterface*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->defaultShippingMethodInterface;
    
}




        #endif //ORG_ALLBINARY_BUSINESS_USER_COMMERCE_SHIPPING_SHIPPINGMETHODS_CPP
