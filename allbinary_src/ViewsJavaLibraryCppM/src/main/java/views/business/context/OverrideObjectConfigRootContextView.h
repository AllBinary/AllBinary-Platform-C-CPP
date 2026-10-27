
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
        



        #ifndef VIEWS_BUSINESS_CONTEXT_OVERRIDEOBJECTCONFIGROOTCONTEXTVIEW_H
        #define VIEWS_BUSINESS_CONTEXT_OVERRIDEOBJECTCONFIGROOTCONTEXTVIEW_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
class XmlDocumentHelper;
class LogUtil;
class StringMaker;
class TransformFactory;
class TransformInterface;
class GeneratorTransformInfoData;
class RootTransformInfoData;
class TransformInfoHttp;
class TransformInfoInterface;
class TransformInfoObjectConfigAndManipulatorFactory;
class TransformInfoObjectConfigInterface;
class TransformTemplateInterface;
class CommonSeps;
class Document;
#include <views/business/context/modules/storefront/HttpStoreComponentView.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class OverrideObjectConfigRootContextView: public HttpStoreComponentView {

    /*protected*/ public: LogUtil* logUtil;

public: OverrideObjectConfigRootContextView(TransformInfoInterface* transformInfoInterface);

                //@Throws(Exception.constructor)
            
    public: std::string view();

};

            


        #endif //VIEWS_BUSINESS_CONTEXT_OVERRIDEOBJECTCONFIGROOTCONTEXTVIEW_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(VIEWS_BUSINESS_CONTEXT_OVERRIDEOBJECTCONFIGROOTCONTEXTVIEW_H_COMPLETE)
        #define VIEWS_BUSINESS_CONTEXT_OVERRIDEOBJECTCONFIGROOTCONTEXTVIEW_H_COMPLETE
        #if __has_include(<org/allbinary/data/tree/dom/document/XmlDocumentHelper.h>)
#include <org/allbinary/data/tree/dom/document/XmlDocumentHelper.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/logic/visual/transform/TransformFactory.h>)
#include <org/allbinary/logic/visual/transform/TransformFactory.h>
#endif
#if __has_include(<org/allbinary/logic/visual/transform/TransformInterface.h>)
#include <org/allbinary/logic/visual/transform/TransformInterface.h>
#endif
#if __has_include(<org/allbinary/logic/visual/transform/info/GeneratorTransformInfoData.h>)
#include <org/allbinary/logic/visual/transform/info/GeneratorTransformInfoData.h>
#endif
#if __has_include(<org/allbinary/logic/visual/transform/info/RootTransformInfoData.h>)
#include <org/allbinary/logic/visual/transform/info/RootTransformInfoData.h>
#endif
#if __has_include(<org/allbinary/logic/visual/transform/info/TransformInfoHttp.h>)
#include <org/allbinary/logic/visual/transform/info/TransformInfoHttp.h>
#endif
#if __has_include(<org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>)
#include <org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>
#endif
#if __has_include(<org/allbinary/logic/visual/transform/info/objectConfig/TransformInfoObjectConfigAndManipulatorFactory.h>)
#include <org/allbinary/logic/visual/transform/info/objectConfig/TransformInfoObjectConfigAndManipulatorFactory.h>
#endif
#if __has_include(<org/allbinary/logic/visual/transform/info/objectConfig/TransformInfoObjectConfigInterface.h>)
#include <org/allbinary/logic/visual/transform/info/objectConfig/TransformInfoObjectConfigInterface.h>
#endif
#if __has_include(<org/allbinary/logic/visual/transform/template/TransformTemplateInterface.h>)
#include <org/allbinary/logic/visual/transform/template/TransformTemplateInterface.h>
#endif
#if __has_include(<org/allbinary/string/CommonSeps.h>)
#include <org/allbinary/string/CommonSeps.h>
#endif
#if __has_include(<org/w3c/dom/Document.h>)
#include <org/w3c/dom/Document.h>
#endif
#if __has_include(<views/business/context/modules/storefront/HttpStoreComponentView.h>)
#include <views/business/context/modules/storefront/HttpStoreComponentView.h>
#endif

        #endif
    
