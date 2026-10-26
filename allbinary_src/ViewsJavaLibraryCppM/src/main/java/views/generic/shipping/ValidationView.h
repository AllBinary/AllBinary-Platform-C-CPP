
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
        



        #ifndef VIEWS_GENERIC_SHIPPING_VALIDATIONVIEW_H
        #define VIEWS_GENERIC_SHIPPING_VALIDATIONVIEW_H

            #include "java/lang/Exception.h"
        
#include <org/allbinary/globals/MESSAGES.h>

      
#include <org/allbinary/logic/control/validate/ValidationComponentInterface.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ShippingMethodsView.h"
#include "Document.h"
#include "Node.h"

class ValidationView: public ShippingMethodsView, public ValidationComponentInterface {

public: ValidationView(TransformInfoInterface transformInfoInterface);

    public: Boolean isValid();

    public: org::w3c::dom::Document toValidationInfoDoc();

    public: org::w3c::dom::Node toValidationInfoNode(org::w3c::dom::Document document);

    public: std::string validationInfo();

};

            


        #endif //VIEWS_GENERIC_SHIPPING_VALIDATIONVIEW_H
