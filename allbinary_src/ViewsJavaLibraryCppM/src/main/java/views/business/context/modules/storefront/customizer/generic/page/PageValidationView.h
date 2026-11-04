
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
        



        #ifndef VIEWS_BUSINESS_CONTEXT_MODULES_STOREFRONT_CUSTOMIZER_GENERIC_PAGE_PAGEVALIDATIONVIEW_H
        #define VIEWS_BUSINESS_CONTEXT_MODULES_STOREFRONT_CUSTOMIZER_GENERIC_PAGE_PAGEVALIDATIONVIEW_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Boolean.h"
        
#include <java/util/HashMap.h>
class BasicArrayList;
class TransformInfoEntity;
class TransformInfoEntityBuilder;
class DomDocumentHelper;
class XmlDocumentHelper;
class StdUtil;
class LogUtil;
#include <org/allbinary/logic/control/validate/ValidationComponentInterface.h>
class StringMaker;
class TransformInfo;
class TransformInfoHttpInterface;
class TransformInfoInterface;
class TransformInfoObjectConfigInterface;
class PageValidation;
class TitleData;
class Document;
class Node;
class CustomizerUtil;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "views/business/context/modules/storefront/customizer/generic/page/PageView.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class PageValidationView: public PageView, public virtual ValidationComponentInterface {

    /*protected*/ public: LogUtil* logUtil;

public: PageValidationView(TransformInfoInterface* transformInfoInterface);

    public: bool isValid();

    public: std::string validationInfo();

    public: Document* toValidationInfoDoc();

    public: Node* toValidationInfoNode(Document* document);

};

            


        #endif //VIEWS_BUSINESS_CONTEXT_MODULES_STOREFRONT_CUSTOMIZER_GENERIC_PAGE_PAGEVALIDATIONVIEW_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(VIEWS_BUSINESS_CONTEXT_MODULES_STOREFRONT_CUSTOMIZER_GENERIC_PAGE_PAGEVALIDATIONVIEW_H_COMPLETE)
        #define VIEWS_BUSINESS_CONTEXT_MODULES_STOREFRONT_CUSTOMIZER_GENERIC_PAGE_PAGEVALIDATIONVIEW_H_COMPLETE
        #if __has_include(<java/util/HashMap.h>)
#include <java/util/HashMap.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif
#if __has_include(<org/allbinary/data/tables/transform/info/TransformInfoEntity.h>)
#include <org/allbinary/data/tables/transform/info/TransformInfoEntity.h>
#endif
#if __has_include(<org/allbinary/data/tables/transform/info/TransformInfoEntityBuilder.h>)
#include <org/allbinary/data/tables/transform/info/TransformInfoEntityBuilder.h>
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
#if __has_include(<org/allbinary/logic/control/validate/ValidationComponentInterface.h>)
#include <org/allbinary/logic/control/validate/ValidationComponentInterface.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/logic/visual/transform/info/TransformInfo.h>)
#include <org/allbinary/logic/visual/transform/info/TransformInfo.h>
#endif
#if __has_include(<org/allbinary/logic/visual/transform/info/TransformInfoHttpInterface.h>)
#include <org/allbinary/logic/visual/transform/info/TransformInfoHttpInterface.h>
#endif
#if __has_include(<org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>)
#include <org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>
#endif
#if __has_include(<org/allbinary/logic/visual/transform/info/objectConfig/TransformInfoObjectConfigInterface.h>)
#include <org/allbinary/logic/visual/transform/info/objectConfig/TransformInfoObjectConfigInterface.h>
#endif
#if __has_include(<org/allbinary/logic/visual/transform/template/customizer/page/PageValidation.h>)
#include <org/allbinary/logic/visual/transform/template/customizer/page/PageValidation.h>
#endif
#if __has_include(<org/allbinary/logic/visual/transform/template/customizer/widgets/title/TitleData.h>)
#include <org/allbinary/logic/visual/transform/template/customizer/widgets/title/TitleData.h>
#endif
#if __has_include(<org/w3c/dom/Document.h>)
#include <org/w3c/dom/Document.h>
#endif
#if __has_include(<org/w3c/dom/Node.h>)
#include <org/w3c/dom/Node.h>
#endif
#if __has_include(<views/business/context/modules/storefront/customizer/CustomizerUtil.h>)
#include <views/business/context/modules/storefront/customizer/CustomizerUtil.h>
#endif
#if __has_include("views/business/context/modules/storefront/customizer/generic/page/PageView.h")
#include "views/business/context/modules/storefront/customizer/generic/page/PageView.h"
#endif

        #endif
    
