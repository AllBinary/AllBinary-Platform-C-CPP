
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
        



        #ifndef VIEWS_GENERIC_ORDER_HISTORY_VALIDATIONVIEW_H
        #define VIEWS_GENERIC_ORDER_HISTORY_VALIDATIONVIEW_H

        
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
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "views/generic/order/history/OrderHistoryView.h"
class Document;
class Node;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class ValidationView: public OrderHistoryView, public virtual ValidationComponentInterface {

public: ValidationView(TransformInfoInterface* transformInfoInterface);

    public: bool isValid();

    public: org::w3c::dom::Document* toValidationInfoDoc();

    public: org::w3c::dom::Node* toValidationInfoNode(org::w3c::dom::Document* document);

    public: std::string validationInfo();

};

            


        #endif //VIEWS_GENERIC_ORDER_HISTORY_VALIDATIONVIEW_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(VIEWS_GENERIC_ORDER_HISTORY_VALIDATIONVIEW_H_COMPLETE)
        #define VIEWS_GENERIC_ORDER_HISTORY_VALIDATIONVIEW_H_COMPLETE
        #if __has_include(<org/allbinary/globals/MESSAGES.h>)
#include <org/allbinary/globals/MESSAGES.h>
#endif
#if __has_include(<org/allbinary/logic/control/validate/ValidationComponentInterface.h>)
#include <org/allbinary/logic/control/validate/ValidationComponentInterface.h>
#endif
#if __has_include(<org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>)
#include <org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>
#endif
#if __has_include("views/generic/order/history/OrderHistoryView.h")
#include "views/generic/order/history/OrderHistoryView.h"
#endif
#if __has_include("views/generic/order/history/Document.h")
#include "views/generic/order/history/Document.h"
#endif
#if __has_include("views/generic/order/history/Node.h")
#include "views/generic/order/history/Node.h"
#endif

        #endif
    
