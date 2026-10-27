
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
        



        #ifndef VIEWS_CUSTOMURITRANSFORMVIEW_H
        #define VIEWS_CUSTOMURITRANSFORMVIEW_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class XmlDocumentHelper;
class LogUtil;
class AbeClientInformationInterface;
class ServiceClientInformationInterfaceFactory;
class TransformInfoCustomUriTransformer;
#include <org/allbinary/logic/visual/transform/TransformInterface.h>
class TransformDocumentFactory;
class TransformDocumentInterface;
class TransformInfoInterface;
class CommonStrings;
class Document;
class Node;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class CustomUriTransformView
            : public virtual Object
        , public TransformInterface {

    /*protected*/ public: LogUtil* logUtil;

    /*protected*/ public: CommonStrings* commonStrings;

    /*protected*/ public: AbeClientInformationInterface* abeClientInformation;

    private: TransformInfoInterface* transformInfoInterface;

    private: TransformDocumentInterface* transformDocumentInterface;

public: CustomUriTransformView(TransformInfoInterface* transformInfoInterface);

    public: int32_t NO_TYPE = 0;

    public: int32_t getTypeId();

    public: TransformInfoInterface* getTransformInfoInterface();

    public: void setTransformInfoInterface(TransformInfoInterface* transformInfoInterface);

    public: TransformDocumentInterface* getTransformDocumentInterface();

    public: void setTransformDocumentInterface(TransformDocumentInterface* transformDocumentInterface);

    public: Document* toXmlDoc();

                //@Throws(Exception.constructor)
            
    public: Document* getDoc();

                //@Throws(Exception.constructor)
            
    public: std::string view();

};

            


        #endif //VIEWS_CUSTOMURITRANSFORMVIEW_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(VIEWS_CUSTOMURITRANSFORMVIEW_H_COMPLETE)
        #define VIEWS_CUSTOMURITRANSFORMVIEW_H_COMPLETE
        #if __has_include(<org/allbinary/data/tree/dom/document/XmlDocumentHelper.h>)
#include <org/allbinary/data/tree/dom/document/XmlDocumentHelper.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>)
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>
#endif
#if __has_include(<org/allbinary/logic/system/security/licensing/ServiceClientInformationInterfaceFactory.h>)
#include <org/allbinary/logic/system/security/licensing/ServiceClientInformationInterfaceFactory.h>
#endif
#if __has_include(<org/allbinary/logic/visual/transform/TransformInfoCustomUriTransformer.h>)
#include <org/allbinary/logic/visual/transform/TransformInfoCustomUriTransformer.h>
#endif
#if __has_include(<org/allbinary/logic/visual/transform/TransformInterface.h>)
#include <org/allbinary/logic/visual/transform/TransformInterface.h>
#endif
#if __has_include(<org/allbinary/logic/visual/transform/data/TransformDocumentFactory.h>)
#include <org/allbinary/logic/visual/transform/data/TransformDocumentFactory.h>
#endif
#if __has_include(<org/allbinary/logic/visual/transform/data/TransformDocumentInterface.h>)
#include <org/allbinary/logic/visual/transform/data/TransformDocumentInterface.h>
#endif
#if __has_include(<org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>)
#include <org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include(<org/w3c/dom/Document.h>)
#include <org/w3c/dom/Document.h>
#endif
#if __has_include(<org/w3c/dom/Node.h>)
#include <org/w3c/dom/Node.h>
#endif

        #endif
    
