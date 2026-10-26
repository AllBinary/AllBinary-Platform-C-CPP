
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
        



        #ifndef VIEWS_BUSINESS_CONTEXT_MODULES_STOREFRONT_CUSTOMIZER_INCLUDES_GLOBALS_GLOBALSVIEW_H
        #define VIEWS_BUSINESS_CONTEXT_MODULES_STOREFRONT_CUSTOMIZER_INCLUDES_GLOBALS_GLOBALSVIEW_H

            #include "java/lang/Exception.h"
        
#include <org/allbinary/data/tree/dom/DomNodeInterface.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>

      
#include <org/allbinary/logic/visual/transform/template/customizer/includes/globals/GlobalsValidation.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
#include <views/business/context/modules/storefront/HttpStoreComponentView.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class GlobalsView: public HttpStoreComponentView, public DomNodeInterface {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    protected: GlobalsValidation globalsValidation;

public: GlobalsView(TransformInfoInterface transformInfoInterface);

    public: void addDomNodeInterfaces();

                //@Throws(Exception.constructor)
            
    public: Node toXmlNode(Document document);

                //@Throws(Exception.constructor)
            
    public: std::string view();

};

            


        #endif //VIEWS_BUSINESS_CONTEXT_MODULES_STOREFRONT_CUSTOMIZER_INCLUDES_GLOBALS_GLOBALSVIEW_H
