
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
        



        #ifndef VIEWS_BUSINESS_CONTEXT_MODULES_STOREFRONT_CUSTOMIZER_TEMPLATE_OBJECTCONFIG_NOTEMPLATETRANSFORMINFOOBJECTCONFIG_H
        #define VIEWS_BUSINESS_CONTEXT_MODULES_STOREFRONT_CUSTOMIZER_TEMPLATE_OBJECTCONFIG_NOTEMPLATETRANSFORMINFOOBJECTCONFIG_H

            #include "java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFrontData.h>

      
#include <org/allbinary/data/tree/dom/document/DomDocumentHelper.h>

      
#include <org/allbinary/data/tree/dom/document/XmlDocumentHelper.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/regex/replace/Replace.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoData.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>

      
#include <org/allbinary/logic/visual/transform/info/objectConfig/TransformInfoObjectConfig.h>

      
#include <org/allbinary/logic/visual/transform/info/objectConfig/TransformInfoObjectConfigData.h>

      
#include <org/allbinary/logic/visual/transform/template/util/TransformTemplateCustomizerUtil.h>

      
#include <org/w3c/dom/Document.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class NoTemplateTransformInfoObjectConfig: public TransformInfoObjectConfig {

    protected: const LogUtil logUtil = LogUtil::getInstance();

public: NoTemplateTransformInfoObjectConfig(Object transformInfoInterface);

public: NoTemplateTransformInfoObjectConfig(Object transformInfoInterface, Object document);

public: NoTemplateTransformInfoObjectConfig(Object transformInfoInterface, std::string name, std::string type);

                //@Throws(Exception.constructor)
            
    protected: Document generate(Document objectConfigDocument);

};

            


        #endif //VIEWS_BUSINESS_CONTEXT_MODULES_STOREFRONT_CUSTOMIZER_TEMPLATE_OBJECTCONFIG_NOTEMPLATETRANSFORMINFOOBJECTCONFIG_H
