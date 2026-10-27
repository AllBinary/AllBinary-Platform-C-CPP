
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
        



        #ifndef VIEWS_GENERIC_ADDRESS_SHIPPING_VALIDATIONVIEW_CPP
        #define VIEWS_GENERIC_ADDRESS_SHIPPING_VALIDATIONVIEW_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "views/generic/address/shipping/ValidationView.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/business/user/address/StreetAddress.h>

      
#include <org/allbinary/data/tables/user/address/shipping/ShippingAddressesEntity.h>

      
#include <org/allbinary/logic/control/validate/ValidationComponentInterface.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "views/generic/address/shipping/ShippingAddressesView.h"


ValidationView::ValidationView(TransformInfoInterface* transformInfoInterface) : ShippingAddressesView(transformInfoInterface){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}


    auto ValidationView::isValid() -> bool{

    ShippingAddressesEntity* billingAddressesEntity = new ShippingAddressesEntity(this->getWeblisketSession()->getUserName());;
    
this->streetAddressList= billingAddressesEntity->get();
    

                        if(this->streetAddressList == 
                                    nullptr
                                )
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean::FALSE;
    

                                    }
                                

    int32_t size = this->streetAddressList->size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    StreetAddress* streetAddress = dynamic_cast<StreetAddress*>(streetAddressList.get(index));;
    

                        if(streetAddress->isValid() == Boolean::FALSE)
                        
                                    {
                                    streetAddressList.remove(streetAddress);
    

                                    }
                                
}


                        if(this->streetAddressList->size() < 1)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean::FALSE;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean::TRUE;
    
}


    auto ValidationView::validationInfo() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return "No Shipping Addresses to display.<br />";
    
}


    auto ValidationView::toValidationInfoDoc() -> Document*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}


    auto ValidationView::toValidationInfoNode(Document* document) -> Node*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}




        #endif //VIEWS_GENERIC_ADDRESS_SHIPPING_VALIDATIONVIEW_CPP
