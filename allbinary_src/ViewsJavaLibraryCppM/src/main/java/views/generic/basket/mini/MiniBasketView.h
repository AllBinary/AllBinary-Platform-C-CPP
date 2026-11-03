
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
        



        #ifndef VIEWS_GENERIC_BASKET_MINI_MINIBASKETVIEW_H
        #define VIEWS_GENERIC_BASKET_MINI_MINIBASKETVIEW_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
class BasketData;
class BasketInterface;
#include <org/allbinary/data/tree/dom/DomNodeInterface.h>
class LogUtil;
class SearchData;
class TransformInfoInterface;
class Document;
class Node;
#include <views/business/context/modules/storefront/HttpStoreComponentView.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class MiniBasketView: public HttpStoreComponentView, public virtual DomNodeInterface {

    /*protected*/ public: LogUtil* logUtil;

public: MiniBasketView(TransformInfoInterface* transformInfoInterface);

                //@Throws(Exception.constructor)
            
    public: Node* toXmlNode(Document* document);

    public: void addDomNodeInterfaces();

                //@Throws(Exception.constructor)
            
    public: std::string view();

};

            


        #endif //VIEWS_GENERIC_BASKET_MINI_MINIBASKETVIEW_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(VIEWS_GENERIC_BASKET_MINI_MINIBASKETVIEW_H_COMPLETE)
        #define VIEWS_GENERIC_BASKET_MINI_MINIBASKETVIEW_H_COMPLETE
        #if __has_include(<org/allbinary/business/user/commerce/inventory/basket/BasketData.h>)
#include <org/allbinary/business/user/commerce/inventory/basket/BasketData.h>
#endif
#if __has_include(<org/allbinary/business/user/commerce/inventory/basket/BasketInterface.h>)
#include <org/allbinary/business/user/commerce/inventory/basket/BasketInterface.h>
#endif
#if __has_include(<org/allbinary/data/tree/dom/DomNodeInterface.h>)
#include <org/allbinary/data/tree/dom/DomNodeInterface.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/control/search/SearchData.h>)
#include <org/allbinary/logic/control/search/SearchData.h>
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

        #endif
    
