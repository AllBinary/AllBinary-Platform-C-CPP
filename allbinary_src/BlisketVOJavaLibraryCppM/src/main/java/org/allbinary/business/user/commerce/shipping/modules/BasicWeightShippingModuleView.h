
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_USER_COMMERCE_SHIPPING_MODULES_BASICWEIGHTSHIPPINGMODULEVIEW_H
        #define ORG_ALLBINARY_BUSINESS_USER_COMMERCE_SHIPPING_MODULES_BASICWEIGHTSHIPPINGMODULEVIEW_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
class ShippingMethodData;
#include <org/allbinary/data/tree/dom/DomNodeInterface.h>
class ModDomHelper;
class DomDocumentHelper;
class LogUtil;
class Document;
class Node;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/business/user/commerce/shipping/modules/BasicWeightShippingModule.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class BasicWeightShippingModuleView: public BasicWeightShippingModule, public virtual DomNodeInterface {

    /*protected*/ public: LogUtil* logUtil;

public: BasicWeightShippingModuleView();

    public: bool isValid();

    public: org::w3c::dom::Document* toValidationInfoDoc();

    public: org::w3c::dom::Node* toValidationInfoNode(org::w3c::dom::Document* document);

    public: std::string validationInfo();

    public: org::w3c::dom::Node* toXmlNode(org::w3c::dom::Document* document);

    public: org::w3c::dom::Document* toXmlDoc();

    public: std::string view();

};

            


        #endif //ORG_ALLBINARY_BUSINESS_USER_COMMERCE_SHIPPING_MODULES_BASICWEIGHTSHIPPINGMODULEVIEW_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_BUSINESS_USER_COMMERCE_SHIPPING_MODULES_BASICWEIGHTSHIPPINGMODULEVIEW_H_COMPLETE)
        #define ORG_ALLBINARY_BUSINESS_USER_COMMERCE_SHIPPING_MODULES_BASICWEIGHTSHIPPINGMODULEVIEW_H_COMPLETE
        #if __has_include(<org/allbinary/business/user/commerce/shipping/ShippingMethodData.h>)
#include <org/allbinary/business/user/commerce/shipping/ShippingMethodData.h>
#endif
#if __has_include(<org/allbinary/data/tree/dom/DomNodeInterface.h>)
#include <org/allbinary/data/tree/dom/DomNodeInterface.h>
#endif
#if __has_include(<org/allbinary/data/tree/dom/ModDomHelper.h>)
#include <org/allbinary/data/tree/dom/ModDomHelper.h>
#endif
#if __has_include(<org/allbinary/data/tree/dom/document/DomDocumentHelper.h>)
#include <org/allbinary/data/tree/dom/document/DomDocumentHelper.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/w3c/dom/Document.h>)
#include <org/w3c/dom/Document.h>
#endif
#if __has_include(<org/w3c/dom/Node.h>)
#include <org/w3c/dom/Node.h>
#endif
#if __has_include("org/allbinary/business/user/commerce/shipping/modules/BasicWeightShippingModule.h")
#include "org/allbinary/business/user/commerce/shipping/modules/BasicWeightShippingModule.h"
#endif

        #endif
    
