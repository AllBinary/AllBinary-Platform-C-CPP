
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
        



        #ifndef VIEWS_GENERIC_ADDRESS_BILLING_DELETEVALIDATIONVIEW_CPP
        #define VIEWS_GENERIC_ADDRESS_BILLING_DELETEVALIDATIONVIEW_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "views/generic/address/billing/DeleteValidationView.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Integer.h"
        
#include <org/allbinary/business/user/address/StreetAddressData.h>

      
#include <org/allbinary/data/tables/user/address/billing/BillingAddressesEntity.h>

      
#include <org/allbinary/logic/control/validate/ValidationComponentInterface.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoHttpInterface.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "views/generic/address/billing/BillingAddressView.h"


DeleteValidationView::DeleteValidationView(TransformInfoInterface* transformInfoInterface) : BillingAddressView(transformInfoInterface){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    

    TransformInfoHttpInterface* httpTransformInfoInterface = dynamic_cast<TransformInfoHttpInterface*>(this->getTransformInfoInterface());;
    
this->value= httpTransformInfoInterface->getPageContext()->getRequest()->getParameter(StreetAddressData::ID);
    
}


    auto DeleteValidationView::isValid() -> bool{

                        if(this->getWeblisketSession()->getUserName() != 
                                    nullptr
                                )
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean::FALSE;
    

                                    }
                                

    BillingAddressesEntity* billingAddressesEntity = new BillingAddressesEntity(this->getWeblisketSession()->getUserName());;
    
this->streetAddress= billingAddressesEntity->get(int32_t(this->value));
    

                        if(this->streetAddress == 
                                    nullptr
                                )
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean::FALSE;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->streetAddress->isValid();;
    
}


    auto DeleteValidationView::validationInfo() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->streetAddress->validationInfo();;
    
}


    auto DeleteValidationView::toValidationInfoDoc() -> Document*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}


    auto DeleteValidationView::toValidationInfoNode(Document* document) -> Node*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}




        #endif //VIEWS_GENERIC_ADDRESS_BILLING_DELETEVALIDATIONVIEW_CPP
