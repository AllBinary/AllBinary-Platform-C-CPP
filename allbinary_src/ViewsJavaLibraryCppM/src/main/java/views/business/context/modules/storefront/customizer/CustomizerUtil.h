
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
        



        #ifndef VIEWS_BUSINESS_CONTEXT_MODULES_STOREFRONT_CUSTOMIZER_CUSTOMIZERUTIL_H
        #define VIEWS_BUSINESS_CONTEXT_MODULES_STOREFRONT_CUSTOMIZER_CUSTOMIZERUTIL_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class BasicArrayList;
class TransformInfoEntity;
class TransformInfoEntityBuilder;
class DomNodeInterface;
class DomDocumentHelper;
class XmlDocumentHelper;
class LogUtil;
class StringMaker;
class TransformInfo;
class TransformInfoHttpInterface;
class TransformInfoInterface;
class TransformInfoObjectConfigInterface;
class Document;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class CustomizerUtil
            : public virtual Object
         {

    private: static CustomizerUtil* instance_owner();
    private: static CustomizerUtil* instance;

    public: static CustomizerUtil* getInstance();

    /*protected*/ public: LogUtil* logUtil;

private: CustomizerUtil();

                //@Throws(Exception.constructor)
            
    public: TransformInfoInterface* getTransformInfoInterfaceToCustomize(TransformInfoInterface* customizerTransformInfoInterface, TransformInfoInterface* transformInfoInterface);

                //@Throws(Exception.constructor)
            
    public: BasicArrayList* getTransformInfoObjectConfigComponentNodesToCustomize(TransformInfoInterface* customizerTransformInfoInterface, TransformInfoInterface* transformInfoInterface);

                //@Throws(Exception.constructor)
            
    public: BasicArrayList* getTransformInfoObjectConfigComponentNodes(TransformInfoInterface* transformInfoInterface);

                //@Throws(Exception.constructor)
            
    public: BasicArrayList* getTransformInfoObjectConfigGroupComponentNodes(TransformInfoInterface* transformInfoInterface);

                //@Throws(Exception.constructor)
            
    public: void insert(TransformInfoInterface* transformInfoInterface, DomNodeInterface* domNodeInterface);

                //@Throws(Exception.constructor)
            
    public: void write(TransformInfoInterface* specifiedTransformInfoInterface, std::string documentString);

                //@Throws(Exception.constructor)
            
    public: Document* getViewDataForComponentsInObjectConfig(TransformInfoInterface* transformInfoInterface);

};

            


        #endif //VIEWS_BUSINESS_CONTEXT_MODULES_STOREFRONT_CUSTOMIZER_CUSTOMIZERUTIL_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(VIEWS_BUSINESS_CONTEXT_MODULES_STOREFRONT_CUSTOMIZER_CUSTOMIZERUTIL_H_COMPLETE)
        #define VIEWS_BUSINESS_CONTEXT_MODULES_STOREFRONT_CUSTOMIZER_CUSTOMIZERUTIL_H_COMPLETE
        #if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif
#if __has_include(<org/allbinary/data/tables/transform/info/TransformInfoEntity.h>)
#include <org/allbinary/data/tables/transform/info/TransformInfoEntity.h>
#endif
#if __has_include(<org/allbinary/data/tables/transform/info/TransformInfoEntityBuilder.h>)
#include <org/allbinary/data/tables/transform/info/TransformInfoEntityBuilder.h>
#endif
#if __has_include(<org/allbinary/data/tree/dom/DomNodeInterface.h>)
#include <org/allbinary/data/tree/dom/DomNodeInterface.h>
#endif
#if __has_include(<org/allbinary/data/tree/dom/document/DomDocumentHelper.h>)
#include <org/allbinary/data/tree/dom/document/DomDocumentHelper.h>
#endif
#if __has_include(<org/allbinary/data/tree/dom/document/XmlDocumentHelper.h>)
#include <org/allbinary/data/tree/dom/document/XmlDocumentHelper.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
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
#if __has_include(<org/w3c/dom/Document.h>)
#include <org/w3c/dom/Document.h>
#endif

        #endif
    
