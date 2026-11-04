
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
        



        #ifndef VIEWS_GENERIC_ADDRESS_BILLING_DELETEVALIDATIONVIEW_H
        #define VIEWS_GENERIC_ADDRESS_BILLING_DELETEVALIDATIONVIEW_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Integer.h"
        
            #include "java/lang/Boolean.h"
        
class StreetAddressData;
class BillingAddressesEntity;
#include <org/allbinary/logic/control/validate/ValidationComponentInterface.h>
class TransformInfoHttpInterface;
class TransformInfoInterface;
class Document;
class Node;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "views/generic/address/billing/BillingAddressView.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class DeleteValidationView: public BillingAddressView, public virtual ValidationComponentInterface {

    private: std::string value;

public: DeleteValidationView(TransformInfoInterface* transformInfoInterface);

    public: bool isValid();

    public: std::string validationInfo();

    public: Document* toValidationInfoDoc();

    public: Node* toValidationInfoNode(Document* document);

};

            


        #endif //VIEWS_GENERIC_ADDRESS_BILLING_DELETEVALIDATIONVIEW_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(VIEWS_GENERIC_ADDRESS_BILLING_DELETEVALIDATIONVIEW_H_COMPLETE)
        #define VIEWS_GENERIC_ADDRESS_BILLING_DELETEVALIDATIONVIEW_H_COMPLETE
        #if __has_include(<org/allbinary/business/user/address/StreetAddressData.h>)
#include <org/allbinary/business/user/address/StreetAddressData.h>
#endif
#if __has_include(<org/allbinary/data/tables/user/address/billing/BillingAddressesEntity.h>)
#include <org/allbinary/data/tables/user/address/billing/BillingAddressesEntity.h>
#endif
#if __has_include(<org/allbinary/logic/control/validate/ValidationComponentInterface.h>)
#include <org/allbinary/logic/control/validate/ValidationComponentInterface.h>
#endif
#if __has_include(<org/allbinary/logic/visual/transform/info/TransformInfoHttpInterface.h>)
#include <org/allbinary/logic/visual/transform/info/TransformInfoHttpInterface.h>
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
#if __has_include("views/generic/address/billing/BillingAddressView.h")
#include "views/generic/address/billing/BillingAddressView.h"
#endif

        #endif
    
