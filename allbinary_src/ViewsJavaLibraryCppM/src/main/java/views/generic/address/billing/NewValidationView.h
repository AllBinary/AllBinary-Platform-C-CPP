
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
        



        #ifndef VIEWS_GENERIC_ADDRESS_BILLING_NEWVALIDATIONVIEW_H
        #define VIEWS_GENERIC_ADDRESS_BILLING_NEWVALIDATIONVIEW_H

            #include "../../../../java/lang/Exception.h"
        
#include <org/allbinary/business/user/address/StreetAddress.h>

      
#include <org/allbinary/logic/control/validate/ValidationComponentInterface.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "BillingAddressView.h"

class NewValidationView: public BillingAddressView: public ValidationComponentInterface {
        

public constructor (TransformInfoInterface transformInfoInterface);

    public Boolean isValid();

    public string validationInfo();

    public Document toValidationInfoDoc();

    public Node toValidationInfoNode(Document document);

};

            


        #endif //VIEWS_GENERIC_ADDRESS_BILLING_NEWVALIDATIONVIEW_H
