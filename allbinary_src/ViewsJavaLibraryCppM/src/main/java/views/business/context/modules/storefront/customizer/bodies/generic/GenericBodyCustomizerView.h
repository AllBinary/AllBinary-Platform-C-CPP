
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
        



        #ifndef VIEWS_BUSINESS_CONTEXT_MODULES_STOREFRONT_CUSTOMIZER_BODIES_GENERIC_GENERICBODYCUSTOMIZERVIEW_H
        #define VIEWS_BUSINESS_CONTEXT_MODULES_STOREFRONT_CUSTOMIZER_BODIES_GENERIC_GENERICBODYCUSTOMIZERVIEW_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
class PageData;
#include <org/allbinary/data/tree/dom/DomNodeInterface.h>
class ModDomHelper;
class XmlDocumentHelper;
class LogUtil;
class StringValidationUtil;
class StoreTransformer;
class TransformInfoInterface;
class GenericBodyValidation;
class TransformTemplateCustomizerUtil;
class StringEscapeUtils;
class Document;
class Node;
#include <views/business/context/modules/storefront/HttpStoreComponentView.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class GenericBodyCustomizerView: public HttpStoreComponentView, public virtual DomNodeInterface {

    private: static inline const std::string NAME = "None";

    /*protected*/ public: LogUtil* logUtil;

    /*protected*/ public: GenericBodyValidation* body;

public: GenericBodyCustomizerView(TransformInfoInterface* transformInfoInterface);

                //@Throws(Exception.constructor)
            
    public: void addDomNodeInterfaces();

                //@Throws(Exception.constructor)
            
    public: Node* toXmlNode(Document* document);

                //@Throws(Exception.constructor)
            
    public: std::string view();

};

            


        #endif //VIEWS_BUSINESS_CONTEXT_MODULES_STOREFRONT_CUSTOMIZER_BODIES_GENERIC_GENERICBODYCUSTOMIZERVIEW_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(VIEWS_BUSINESS_CONTEXT_MODULES_STOREFRONT_CUSTOMIZER_BODIES_GENERIC_GENERICBODYCUSTOMIZERVIEW_H_COMPLETE)
        #define VIEWS_BUSINESS_CONTEXT_MODULES_STOREFRONT_CUSTOMIZER_BODIES_GENERIC_GENERICBODYCUSTOMIZERVIEW_H_COMPLETE
        #if __has_include(<org/allbinary/business/page/PageData.h>)
#include <org/allbinary/business/page/PageData.h>
#endif
#if __has_include(<org/allbinary/data/tree/dom/DomNodeInterface.h>)
#include <org/allbinary/data/tree/dom/DomNodeInterface.h>
#endif
#if __has_include(<org/allbinary/data/tree/dom/ModDomHelper.h>)
#include <org/allbinary/data/tree/dom/ModDomHelper.h>
#endif
#if __has_include(<org/allbinary/data/tree/dom/document/XmlDocumentHelper.h>)
#include <org/allbinary/data/tree/dom/document/XmlDocumentHelper.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringValidationUtil.h>)
#include <org/allbinary/logic/string/StringValidationUtil.h>
#endif
#if __has_include(<org/allbinary/logic/visual/transform/StoreTransformer.h>)
#include <org/allbinary/logic/visual/transform/StoreTransformer.h>
#endif
#if __has_include(<org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>)
#include <org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>
#endif
#if __has_include(<org/allbinary/logic/visual/transform/template/customizer/bodies/GenericBodyValidation.h>)
#include <org/allbinary/logic/visual/transform/template/customizer/bodies/GenericBodyValidation.h>
#endif
#if __has_include(<org/allbinary/logic/visual/transform/template/util/TransformTemplateCustomizerUtil.h>)
#include <org/allbinary/logic/visual/transform/template/util/TransformTemplateCustomizerUtil.h>
#endif
#if __has_include(<org/apache/commons/lang3/StringEscapeUtils.h>)
#include <org/apache/commons/lang3/StringEscapeUtils.h>
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
    
