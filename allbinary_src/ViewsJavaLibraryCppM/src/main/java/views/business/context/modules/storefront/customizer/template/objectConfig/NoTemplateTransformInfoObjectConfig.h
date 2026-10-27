
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <java/util/HashMap.h>
class StoreFrontData;
class DomDocumentHelper;
class XmlDocumentHelper;
class StdUtil;
class LogUtil;
class Replace;
class TransformInfoData;
class TransformInfoInterface;
#include <org/allbinary/logic/visual/transform/info/objectConfig/TransformInfoObjectConfig.h>
class TransformInfoObjectConfigData;
class TransformTemplateCustomizerUtil;
class Document;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class NoTemplateTransformInfoObjectConfig: public TransformInfoObjectConfig {

    /*protected*/ public: LogUtil* logUtil;

public: NoTemplateTransformInfoObjectConfig(TransformInfoInterface* transformInfoInterface);

public: NoTemplateTransformInfoObjectConfig(TransformInfoInterface* transformInfoInterface, Document* document);

public: NoTemplateTransformInfoObjectConfig(TransformInfoInterface* transformInfoInterface, std::string name, std::string type);

                //@Throws(Exception.constructor)
            
    /*protected*/ public: Document* generate(Document* objectConfigDocument);

};

            


        #endif //VIEWS_BUSINESS_CONTEXT_MODULES_STOREFRONT_CUSTOMIZER_TEMPLATE_OBJECTCONFIG_NOTEMPLATETRANSFORMINFOOBJECTCONFIG_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(VIEWS_BUSINESS_CONTEXT_MODULES_STOREFRONT_CUSTOMIZER_TEMPLATE_OBJECTCONFIG_NOTEMPLATETRANSFORMINFOOBJECTCONFIG_H_COMPLETE)
        #define VIEWS_BUSINESS_CONTEXT_MODULES_STOREFRONT_CUSTOMIZER_TEMPLATE_OBJECTCONFIG_NOTEMPLATETRANSFORMINFOOBJECTCONFIG_H_COMPLETE
        #if __has_include(<java/util/HashMap.h>)
#include <java/util/HashMap.h>
#endif
#if __has_include(<org/allbinary/business/context/modules/storefront/StoreFrontData.h>)
#include <org/allbinary/business/context/modules/storefront/StoreFrontData.h>
#endif
#if __has_include(<org/allbinary/data/tree/dom/document/DomDocumentHelper.h>)
#include <org/allbinary/data/tree/dom/document/DomDocumentHelper.h>
#endif
#if __has_include(<org/allbinary/data/tree/dom/document/XmlDocumentHelper.h>)
#include <org/allbinary/data/tree/dom/document/XmlDocumentHelper.h>
#endif
#if __has_include(<org/allbinary/logic/StdUtil.h>)
#include <org/allbinary/logic/StdUtil.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/string/regex/replace/Replace.h>)
#include <org/allbinary/logic/string/regex/replace/Replace.h>
#endif
#if __has_include(<org/allbinary/logic/visual/transform/info/TransformInfoData.h>)
#include <org/allbinary/logic/visual/transform/info/TransformInfoData.h>
#endif
#if __has_include(<org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>)
#include <org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>
#endif
#if __has_include(<org/allbinary/logic/visual/transform/info/objectConfig/TransformInfoObjectConfig.h>)
#include <org/allbinary/logic/visual/transform/info/objectConfig/TransformInfoObjectConfig.h>
#endif
#if __has_include(<org/allbinary/logic/visual/transform/info/objectConfig/TransformInfoObjectConfigData.h>)
#include <org/allbinary/logic/visual/transform/info/objectConfig/TransformInfoObjectConfigData.h>
#endif
#if __has_include(<org/allbinary/logic/visual/transform/template/util/TransformTemplateCustomizerUtil.h>)
#include <org/allbinary/logic/visual/transform/template/util/TransformTemplateCustomizerUtil.h>
#endif
#if __has_include(<org/w3c/dom/Document.h>)
#include <org/w3c/dom/Document.h>
#endif

        #endif
    
