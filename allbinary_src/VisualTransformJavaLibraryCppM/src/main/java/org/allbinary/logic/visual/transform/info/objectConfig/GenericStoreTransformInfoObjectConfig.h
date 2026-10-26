
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

            #include "java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFrontData.h>

      
#include <org/allbinary/data/tree/dom/document/DomDocumentHelper.h>

      
#include <org/allbinary/data/tree/dom/document/XmlDocumentHelper.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/string/regex/replace/Replace.h>

      
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>

      
#include <org/allbinary/logic/visual/transform/info/RootTransformInfoData.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoData.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoHttp.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>

      
#include <org/allbinary/logic/visual/transform/template/TransformTemplateFactory.h>

      
#include <org/allbinary/logic/visual/transform/template/TransformTemplateInterface.h>

      
#include <org/allbinary/logic/visual/transform/template/util/TransformTemplateCustomizerUtil.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/w3c/dom/Document.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "TransformInfoObjectConfig.h"
#include "TransformInfoObjectConfigData.h"

class GenericStoreTransformInfoObjectConfig: public TransformInfoObjectConfig {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    protected: AbeClientInformationInterface abeClientInformation;

public: GenericStoreTransformInfoObjectConfig(Object abeClientInformation, Object transformInfoInterface);

public: GenericStoreTransformInfoObjectConfig(Object abeClientInformation, Object transformInfoInterface, Object document);

public: GenericStoreTransformInfoObjectConfig(Object abeClientInformation, Object transformInfoInterface, std::string name, std::string type);

                //@Throws(Exception.constructor)
            
    protected: Document generate(Document objectConfigDocument);

                //@Throws(Exception.constructor)
            
    private: HashMap<Object*, Object*> createReplaceHashMap(TransformInfoHttp transformInfoHttpStoreInterface, std::string objectConfigDocumentString);

                //@Throws(Exception.constructor)
            
    private: HashMap<Object*, Object*> createHashMap(TransformInfoHttp transformInfoHttpStoreInterface, std::string objectConfigDocumentString);

                //@Throws(Exception.constructor)
            
    private: Document generate(std::string objectConfigDocumentString, HashMap<Object*, Object*> hashMap);

};

            


        #endif //ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_INFO_OBJECTCONFIG_GENERICSTORETRANSFORMINFOOBJECTCONFIG_H
