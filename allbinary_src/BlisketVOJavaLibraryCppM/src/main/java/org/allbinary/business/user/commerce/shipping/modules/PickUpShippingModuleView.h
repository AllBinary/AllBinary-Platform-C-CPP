
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_USER_COMMERCE_SHIPPING_MODULES_PICKUPSHIPPINGMODULEVIEW_H
        #define ORG_ALLBINARY_BUSINESS_USER_COMMERCE_SHIPPING_MODULES_PICKUPSHIPPINGMODULEVIEW_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Boolean.h"
        
class ShippingMethodData;
#include <org/allbinary/data/tree/dom/DomNodeInterface.h>
class ModDomHelper;
class LogUtil;
class Node;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/business/user/commerce/shipping/modules/PickUpShippingModule.h"
class Document;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class PickUpShippingModuleView: public PickUpShippingModule, public virtual DomNodeInterface {

    /*protected*/ public: LogUtil* logUtil;

public: PickUpShippingModuleView();

    public: bool isValid();

    public: org::w3c::dom::Document* toValidationInfoDoc();

    public: org::w3c::dom::Node* toValidationInfoNode(org::w3c::dom::Document* document);

    public: org::w3c::dom::Document* toXmlDoc();

    public: org::w3c::dom::Node* toXmlNode(org::w3c::dom::Document* document);

    public: std::string validationInfo();

    public: std::string view();

};

            


        #endif //ORG_ALLBINARY_BUSINESS_USER_COMMERCE_SHIPPING_MODULES_PICKUPSHIPPINGMODULEVIEW_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_BUSINESS_USER_COMMERCE_SHIPPING_MODULES_PICKUPSHIPPINGMODULEVIEW_H_COMPLETE)
        #define ORG_ALLBINARY_BUSINESS_USER_COMMERCE_SHIPPING_MODULES_PICKUPSHIPPINGMODULEVIEW_H_COMPLETE
        #if __has_include(<org/allbinary/business/user/commerce/shipping/ShippingMethodData.h>)
#include <org/allbinary/business/user/commerce/shipping/ShippingMethodData.h>
#endif
#if __has_include(<org/allbinary/data/tree/dom/DomNodeInterface.h>)
#include <org/allbinary/data/tree/dom/DomNodeInterface.h>
#endif
#if __has_include(<org/allbinary/data/tree/dom/ModDomHelper.h>)
#include <org/allbinary/data/tree/dom/ModDomHelper.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/w3c/dom/Node.h>)
#include <org/w3c/dom/Node.h>
#endif
#if __has_include("org/allbinary/business/user/commerce/shipping/modules/PickUpShippingModule.h")
#include "org/allbinary/business/user/commerce/shipping/modules/PickUpShippingModule.h"
#endif
#if __has_include("org/allbinary/business/user/commerce/shipping/modules/Document.h")
#include "org/allbinary/business/user/commerce/shipping/modules/Document.h"
#endif

        #endif
    
