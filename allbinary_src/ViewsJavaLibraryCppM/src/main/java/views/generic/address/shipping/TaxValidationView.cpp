
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
        



        #ifndef VIEWS_GENERIC_ADDRESS_SHIPPING_TAXVALIDATIONVIEW_CPP
        #define VIEWS_GENERIC_ADDRESS_SHIPPING_TAXVALIDATIONVIEW_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "views/generic/address/shipping/TaxValidationView.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Boolean.h"
        
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/business/user/address/ShippingAddressData.h>

      
#include <org/allbinary/business/user/address/StreetAddress.h>

      
#include <org/allbinary/data/tables/user/address/shipping/ShippingAddressesEntity.h>

      
#include <org/allbinary/logic/control/validate/ValidationComponentInterface.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "views/generic/address/shipping/ShippingAddressView.h"


TaxValidationView::TaxValidationView(TransformInfoInterface* transformInfoInterface) : ShippingAddressView(transformInfoInterface){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}


    auto TaxValidationView::isValid() -> bool{

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
                                    this->streetAddress= aStreetAddress;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return Boolean::TRUE;
    

                                    }
                                
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return Boolean::FALSE;
    
}


    auto TaxValidationView::validationInfo() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return StringUtil::getInstance()->EMPTY_STRING;
    
}


    auto TaxValidationView::toValidationInfoDoc() -> Document*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return nullptr;
    
}


    auto TaxValidationView::toValidationInfoNode(Document* document) -> Node*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return nullptr;
    
}




        #endif //VIEWS_GENERIC_ADDRESS_SHIPPING_TAXVALIDATIONVIEW_CPP
