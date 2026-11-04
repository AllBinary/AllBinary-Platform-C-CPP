
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
        



        #ifndef VIEWS_ADMIN_PAYMENT_GATEWAYS_SELECTNEWVALIDATIONVIEW_H
        #define VIEWS_ADMIN_PAYMENT_GATEWAYS_SELECTNEWVALIDATIONVIEW_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Boolean.h"
        
#include <org/allbinary/logic/control/validate/ValidationComponentInterface.h>
class TransformInfoInterface;
class Document;
class Node;
#include <views/business/context/modules/storefront/HttpStoreComponentView.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class SelectNewView;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class SelectNewValidationView: public HttpStoreComponentView, public virtual ValidationComponentInterface {

public: SelectNewValidationView(TransformInfoInterface* transformInfoInterface);

    public: bool isValid();

    public: Document* toValidationInfoDoc();

    public: Node* toValidationInfoNode(Document* document);

                //@Throws(Exception.constructor)
            
    public: std::string validationInfo();

    public: Document* toXmlDoc();

    public: Node* toXmlNode(Document* document);

                //@Throws(Exception.constructor)
            
    public: std::string view();

};

            


        #endif //VIEWS_ADMIN_PAYMENT_GATEWAYS_SELECTNEWVALIDATIONVIEW_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(VIEWS_ADMIN_PAYMENT_GATEWAYS_SELECTNEWVALIDATIONVIEW_H_COMPLETE)
        #define VIEWS_ADMIN_PAYMENT_GATEWAYS_SELECTNEWVALIDATIONVIEW_H_COMPLETE
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
#if __has_include(<views/business/context/modules/storefront/HttpStoreComponentView.h>)
#include <views/business/context/modules/storefront/HttpStoreComponentView.h>
#endif
#if __has_include("views/admin/payment/gateways/SelectNewView.h")
#include "views/admin/payment/gateways/SelectNewView.h"
#endif

        #endif
    
