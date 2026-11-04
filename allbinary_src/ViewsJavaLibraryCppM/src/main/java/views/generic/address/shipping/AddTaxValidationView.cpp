
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
        



        #ifndef VIEWS_GENERIC_ADDRESS_SHIPPING_ADDTAXVALIDATIONVIEW_CPP
        #define VIEWS_GENERIC_ADDRESS_SHIPPING_ADDTAXVALIDATIONVIEW_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "views/generic/address/shipping/AddTaxValidationView.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Boolean.h"
        
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFrontFactory.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFrontInterface.h>

      
#include <org/allbinary/business/user/address/ShippingAddressData.h>

      
#include <org/allbinary/business/user/address/StreetAddress.h>

      
#include <org/allbinary/business/user/commerce/money/tax/TaxFactory.h>

      
#include <org/allbinary/business/user/commerce/money/tax/modules/TaxModuleInterface.h>

      
#include <org/allbinary/data/tables/user/address/shipping/ShippingAddressesEntity.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/control/validate/ValidationComponentInterface.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "views/generic/address/shipping/ShippingAddressView.h"


AddTaxValidationView::AddTaxValidationView(TransformInfoInterface* transformInfoInterface) : ShippingAddressView(transformInfoInterface), logUtil(LogUtil::getInstance()){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}


                //@Throws(Exception.constructor)
            
    auto AddTaxValidationView::isValid() -> bool{

        try {
            this->streetAddress= new StreetAddress(this->getRequest());
    

    StoreFrontInterface* storeFrontInterface = StoreFrontFactory::getInstance(this->getTransformInfoInterface()->getStoreName());;
    

    TaxModuleInterface* taxInterface = TaxFactory::getInstance()->getInstance(this->abeClientInformation, storeFrontInterface);;
    

                        if(taxInterface == 
                                    nullptr
                                )
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return Boolean::FALSE;
    

                                    }
                                

                        if(taxInterface->isValid(this->streetAddress, storeFrontInterface) == Boolean::FALSE)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return Boolean::FALSE;
    

                                    }
                                

    ShippingAddressesEntity* billingAddressesEntity = new ShippingAddressesEntity(this->getWeblisketSession()->getUserName());;
    

    BasicArrayList* streetAddressList = billingAddressesEntity->get();;
    

                        if(streetAddressList == 
                                    nullptr
                                )
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return Boolean::FALSE;
    

                                    }
                                

    int32_t size = streetAddressList->size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    StreetAddress* aStreetAddress = dynamic_cast<StreetAddress*>(streetAddressList->get(index));;
    

                        if(aStreetAddress->getName().compare(ShippingAddressData::TAX) == 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return Boolean::FALSE;
    

                                    }
                                
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return Boolean::TRUE;
    

                //: 
} catch(Exception& e) 
            {

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->VIEWERROR))
                        
                                    {
                                    this->logUtil->put("Failed to validate", this, this->commonStrings->IS_VALID, &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return Boolean::FALSE;
    
}

}


                //@Throws(Exception.constructor)
            
    auto AddTaxValidationView::validationInfo() -> std::string{

        try {
            
    StringMaker* stringBuffer = new StringMaker();;
    

    StoreFrontInterface* storeFrontInterface = StoreFrontFactory::getInstance(this->getTransformInfoInterface()->getStoreName());;
    

    TaxModuleInterface* taxInterface = TaxFactory::getInstance()->getInstance(this->abeClientInformation, storeFrontInterface);;
    

                        if(taxInterface == 
                                    nullptr
                                )
                        
                                    {
                                    stringBuffer->append("Unable to Load Tax Component<br/>");
    

                                    }
                                
                        else {
                            
                        if(taxInterface->isValid(this->streetAddress, storeFrontInterface) == Boolean::FALSE)
                        
                                    {
                                    stringBuffer->append("Unable to validate address with Tax Component<br/>");
    

                                    }
                                

                        }
                            

    ShippingAddressesEntity* billingAddressesEntity = new ShippingAddressesEntity(this->getWeblisketSession()->getUserName());;
    

    BasicArrayList* streetAddressList = billingAddressesEntity->get();;
    

    int32_t size = streetAddressList->size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    StreetAddress* aStreetAddress = dynamic_cast<StreetAddress*>(streetAddressList->get(index));;
    

                        if(aStreetAddress->getName().compare(ShippingAddressData::TAX) == 0)
                        
                                    {
                                    stringBuffer->append("Not a valid tax location<br/>");
    

                                    }
                                
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return stringBuffer->toString();;
    

                //: 
} catch(Exception& e) 
            {

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->VIEWERROR))
                        
                                    {
                                    this->logUtil->put("Failed to create validateInfo", this, "validationInfo()", &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return "Error Creating ValidationInfo";
    
}

}


    auto AddTaxValidationView::toValidationInfoDoc() -> Document*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return nullptr;
    
}


    auto AddTaxValidationView::toValidationInfoNode(Document* document) -> Node*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return nullptr;
    
}




        #endif //VIEWS_GENERIC_ADDRESS_SHIPPING_ADDTAXVALIDATIONVIEW_CPP
