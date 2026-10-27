
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
        



        #ifndef VIEWS_BUSINESS_CONTEXT_HTTPCONTEXTVIEW_H
        #define VIEWS_BUSINESS_CONTEXT_HTTPCONTEXTVIEW_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
class XmlDocumentHelper;
class LogUtil;
class ContextTransformer;
class TransformHttpRequestDocumentFactory;
class TransformInfoInterface;
class CommonStrings;
#include <views/HttpComponentView.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class HttpContextView: public HttpComponentView {

    /*protected*/ public: LogUtil* logUtil;

    /*protected*/ public: CommonStrings* commonStrings;

public: HttpContextView(TransformInfoInterface* transformInfoInterface);

                //@Throws(Exception.constructor)
            
    public: std::string view();

};

            


        #endif //VIEWS_BUSINESS_CONTEXT_HTTPCONTEXTVIEW_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(VIEWS_BUSINESS_CONTEXT_HTTPCONTEXTVIEW_H_COMPLETE)
        #define VIEWS_BUSINESS_CONTEXT_HTTPCONTEXTVIEW_H_COMPLETE
        #if __has_include(<org/allbinary/data/tree/dom/document/XmlDocumentHelper.h>)
#include <org/allbinary/data/tree/dom/document/XmlDocumentHelper.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/visual/transform/ContextTransformer.h>)
#include <org/allbinary/logic/visual/transform/ContextTransformer.h>
#endif
#if __has_include(<org/allbinary/logic/visual/transform/data/TransformHttpRequestDocumentFactory.h>)
#include <org/allbinary/logic/visual/transform/data/TransformHttpRequestDocumentFactory.h>
#endif
#if __has_include(<org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>)
#include <org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include(<views/HttpComponentView.h>)
#include <views/HttpComponentView.h>
#endif

        #endif
    
