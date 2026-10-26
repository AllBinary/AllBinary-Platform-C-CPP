
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

public: ShippingMethods(AbeClientInformationInterface abeClientInformation, StoreFrontInterface storeFrontInterface){
this->defaultShippingMethodInterface= ShippingMethodsFactory(abeClientInformation, storeFrontInterface).getDefaultInstance();
    
this->shippingVector= ShippingMethodsFactory(abeClientInformation, storeFrontInterface).getInstance();
    
}


    public: BasicArrayList get(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->shippingVector;
    
}


                //@Throws(Exception.constructor)
            
    public: ShippingInterface getShippingInterface(std::string name){

    ShippingInterface shipping;;
    

    int32_t size = this->shippingVector.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
shipping= this->shippingVector.get(index);
    

                        if(name.compare(shipping.getName()) == 0)
                        


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return shipping;
    
}


    std::string error = "Error Finding Shipping: " +name;;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().SHIPPINGERROR))
                        
                                    {
                                    this->logUtil.putF(this->commonStrings.EXCEPTION, this, "getShippingInterface(String name)");
    

                                    }
                                



                            throw Exception(error);
                    
}


                //@Throws(Exception.constructor)
            
    public: ShippingInterface getDefault(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->defaultShippingMethodInterface;
    
}


};

            

