
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
        



        #ifndef ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_INFO_OBJECTCONFIG_GENERICSTORETRANSFORMINFOOBJECTCONFIG_H
        #define ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_INFO_OBJECTCONFIG_GENERICSTORETRANSFORMINFOOBJECTCONFIG_H

        
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
class StringMaker;
class StringUtil;
class Replace;
class AbeClientInformationInterface;
class RootTransformInfoData;
class TransformInfoData;
class TransformInfoHttp;
class TransformInfoInterface;
class TransformTemplateFactory;
class TransformTemplateInterface;
class TransformTemplateCustomizerUtil;
class CommonSeps;
class Document;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/visual/transform/info/objectConfig/TransformInfoObjectConfig.h"
class TransformInfoObjectConfigData;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class GenericStoreTransformInfoObjectConfig: public TransformInfoObjectConfig {

    /*protected*/ public: LogUtil* logUtil;

    /*protected*/ public: AbeClientInformationInterface* abeClientInformation;

public: GenericStoreTransformInfoObjectConfig(AbeClientInformationInterface* abeClientInformation, TransformInfoInterface* transformInfoInterface);

public: GenericStoreTransformInfoObjectConfig(AbeClientInformationInterface* abeClientInformation, TransformInfoInterface* transformInfoInterface, Document* document);

public: GenericStoreTransformInfoObjectConfig(AbeClientInformationInterface* abeClientInformation, TransformInfoInterface* transformInfoInterface, std::string name, std::string type);

                //@Throws(Exception.constructor)
            
    /*protected*/ public: Document* generate(Document* objectConfigDocument);

                //@Throws(Exception.constructor)
            
    private: HashMap<Object*, Object*>* createReplaceHashMap(TransformInfoHttp* transformInfoHttpStoreInterface, std::string objectConfigDocumentString);

                //@Throws(Exception.constructor)
            
    private: HashMap<Object*, Object*>* createHashMap(TransformInfoHttp* transformInfoHttpStoreInterface, std::string objectConfigDocumentString);

                //@Throws(Exception.constructor)
            
    private: Document* generate(std::string objectConfigDocumentString, HashMap<Object*, Object*>* hashMap);

};

            


        #endif //ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_INFO_OBJECTCONFIG_GENERICSTORETRANSFORMINFOOBJECTCONFIG_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_INFO_OBJECTCONFIG_GENERICSTORETRANSFORMINFOOBJECTCONFIG_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_INFO_OBJECTCONFIG_GENERICSTORETRANSFORMINFOOBJECTCONFIG_H_COMPLETE
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
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringUtil.h>)
#include <org/allbinary/logic/string/StringUtil.h>
#endif
#if __has_include(<org/allbinary/logic/string/regex/replace/Replace.h>)
#include <org/allbinary/logic/string/regex/replace/Replace.h>
#endif
#if __has_include(<org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>)
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>
#endif
#if __has_include(<org/allbinary/logic/visual/transform/info/RootTransformInfoData.h>)
#include <org/allbinary/logic/visual/transform/info/RootTransformInfoData.h>
#endif
#if __has_include(<org/allbinary/logic/visual/transform/info/TransformInfoData.h>)
#include <org/allbinary/logic/visual/transform/info/TransformInfoData.h>
#endif
#if __has_include(<org/allbinary/logic/visual/transform/info/TransformInfoHttp.h>)
#include <org/allbinary/logic/visual/transform/info/TransformInfoHttp.h>
#endif
#if __has_include(<org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>)
#include <org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>
#endif
#if __has_include(<org/allbinary/logic/visual/transform/template/TransformTemplateFactory.h>)
#include <org/allbinary/logic/visual/transform/template/TransformTemplateFactory.h>
#endif
#if __has_include(<org/allbinary/logic/visual/transform/template/TransformTemplateInterface.h>)
#include <org/allbinary/logic/visual/transform/template/TransformTemplateInterface.h>
#endif
#if __has_include(<org/allbinary/logic/visual/transform/template/util/TransformTemplateCustomizerUtil.h>)
#include <org/allbinary/logic/visual/transform/template/util/TransformTemplateCustomizerUtil.h>
#endif
#if __has_include(<org/allbinary/string/CommonSeps.h>)
#include <org/allbinary/string/CommonSeps.h>
#endif
#if __has_include(<org/w3c/dom/Document.h>)
#include <org/w3c/dom/Document.h>
#endif
#if __has_include("org/allbinary/logic/visual/transform/info/objectConfig/TransformInfoObjectConfig.h")
#include "org/allbinary/logic/visual/transform/info/objectConfig/TransformInfoObjectConfig.h"
#endif
#if __has_include("org/allbinary/logic/visual/transform/info/objectConfig/TransformInfoObjectConfigData.h")
#include "org/allbinary/logic/visual/transform/info/objectConfig/TransformInfoObjectConfigData.h"
#endif

        #endif
    
