
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
        



        #ifndef VIEWS_GENERIC_ADDRESS_SHIPPING_UPDATETAXVALIDATIONVIEW_CPP
        #define VIEWS_GENERIC_ADDRESS_SHIPPING_UPDATETAXVALIDATIONVIEW_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "views/generic/address/shipping/UpdateTaxValidationView.h"
        

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

      
#include <org/allbinary/data/tables/user/address/shipping/ShippingAddressesEntity.h>

      
#include <org/allbinary/logic/control/validate/ValidationComponentInterface.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "views/generic/address/shipping/ShippingAddressView.h"


UpdateTaxValidationView::UpdateTaxValidationView(TransformInfoInterface* transformInfoInterface) : ShippingAddressView(transformInfoInterface){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}


                //@Throws(Exception.constructor)
            
    auto UpdateTaxValidationView::isValid() -> bool{
this->streetAddress= new StreetAddress(this->getRequest());
    

    StoreFrontInterface* storeFrontInterface = StoreFrontFactory::getInstance(this->getTransformInfoInterface()->getStoreName());;
    

                        if(TaxFactory::getInstance()->getInstance(this->abeClientInformation, storeFrontInterface)->isValid(this->streetAddress, storeFrontInterface) == Boolean::FALSE)
                        
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
                                

    int32_t count = 0;;
    

    int32_t size = streetAddressList->size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    StreetAddress* aStreetAddress = dynamic_cast<StreetAddress*>(streetAddressList->get(index));;
    

                        if(aStreetAddress->getName().compare(ShippingAddressData::TAX) == 0)
                        
                                    {
                                    count++;
    

                                    }
                                
}


                        if(count != 1)
                        


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return Boolean::FALSE;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return Boolean::TRUE;
    
}


    auto UpdateTaxValidationView::validationInfo() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return "Unable to update tax location.";
    
}


    auto UpdateTaxValidationView::toValidationInfoDoc() -> Document*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return nullptr;
    
}


    auto UpdateTaxValidationView::toValidationInfoNode(Document* document) -> Node*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return nullptr;
    
}




        #endif //VIEWS_GENERIC_ADDRESS_SHIPPING_UPDATETAXVALIDATIONVIEW_CPP
