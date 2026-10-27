
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
        



        #ifndef VIEWS_GENERIC_ADDRESS_SHIPPING_SELECTVALIDATIONVIEW_H
        #define VIEWS_GENERIC_ADDRESS_SHIPPING_SELECTVALIDATIONVIEW_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
class MESSAGES;
#include <org/allbinary/logic/control/validate/ValidationComponentInterface.h>
class TransformInfoInterface;
class Document;
class Node;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "views/generic/address/shipping/ShippingAddressView.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class SelectValidationView: public ShippingAddressView, public ValidationComponentInterface {

public: SelectValidationView(TransformInfoInterface* transformInfoInterface);

    public: bool isValid();

    public: std::string validationInfo();

    public: Document* toValidationInfoDoc();

    public: Node* toValidationInfoNode(Document* document);

};

            


        #endif //VIEWS_GENERIC_ADDRESS_SHIPPING_SELECTVALIDATIONVIEW_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(VIEWS_GENERIC_ADDRESS_SHIPPING_SELECTVALIDATIONVIEW_H_COMPLETE)
        #define VIEWS_GENERIC_ADDRESS_SHIPPING_SELECTVALIDATIONVIEW_H_COMPLETE
        #if __has_include(<org/allbinary/globals/MESSAGES.h>)
#include <org/allbinary/globals/MESSAGES.h>
#endif
#if __has_include(<org/allbinary/logic/control/validate/ValidationComponentInterface.h>)
#include <org/allbinary/logic/control/validate/ValidationComponentInterface.h>
#endif
#if __has_include(<org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>)
#include <org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>
#endif
#if __has_include(<org/w3c/dom/Document.h>)
#include <org/w3c/dom/Document.h>
#endif
#if __has_include(<org/w3c/dom/Node.h>)
#include <org/w3c/dom/Node.h>
#endif
#if __has_include("views/generic/address/shipping/ShippingAddressView.h")
#include "views/generic/address/shipping/ShippingAddressView.h"
#endif

        #endif
    
