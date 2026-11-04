
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
        



        #ifndef VIEWS_ADMIN_STOREFRONT_DELETEVALIDATIONSTOREFRONTVIEW_H
        #define VIEWS_ADMIN_STOREFRONT_DELETEVALIDATIONSTOREFRONTVIEW_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Boolean.h"
        
class StoreFrontFactory;
class LogUtil;
#include <org/allbinary/logic/control/validate/ValidationComponentInterface.h>
class StringMaker;
class TransformInfoInterface;
class Document;
class Node;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "views/admin/storefront/StoreFrontComponent.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class DeleteValidationStoreFrontView: public StoreFrontComponent, public virtual ValidationComponentInterface {

    /*protected*/ public: LogUtil* logUtil;

public: DeleteValidationStoreFrontView(TransformInfoInterface* transformInfoInterface);

    public: bool isValid();

    public: std::string validationInfo();

    public: Document* toValidationInfoDoc();

    public: Node* toValidationInfoNode(Document* document);

};

            


        #endif //VIEWS_ADMIN_STOREFRONT_DELETEVALIDATIONSTOREFRONTVIEW_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(VIEWS_ADMIN_STOREFRONT_DELETEVALIDATIONSTOREFRONTVIEW_H_COMPLETE)
        #define VIEWS_ADMIN_STOREFRONT_DELETEVALIDATIONSTOREFRONTVIEW_H_COMPLETE
        #if __has_include(<org/allbinary/business/context/modules/storefront/StoreFrontFactory.h>)
#include <org/allbinary/business/context/modules/storefront/StoreFrontFactory.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/control/validate/ValidationComponentInterface.h>)
#include <org/allbinary/logic/control/validate/ValidationComponentInterface.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
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
#if __has_include("views/admin/storefront/StoreFrontComponent.h")
#include "views/admin/storefront/StoreFrontComponent.h"
#endif

        #endif
    
