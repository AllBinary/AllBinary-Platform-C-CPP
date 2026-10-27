
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
        



        #ifndef VIEWS_COMPOUND_OBJECTCONFIG_COMPOUNDCONTEXTTRANSFORMINFOOBJECTCONFIG_H
        #define VIEWS_COMPOUND_OBJECTCONFIG_COMPOUNDCONTEXTTRANSFORMINFOOBJECTCONFIG_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <java/io/ByteArrayInputStream.h>
#include <java/io/InputStream.h>
class BasicArrayList;

class DocumentToNode;
class LogUtil;
class StringMaker;
class StringUtil;
class Replace;
class AbeClientInformationInterface;
class TransformFactory;
class TransformInterface;
class RootTransformInfoData;
class TransformInfoData;
class TransformInfoDomNode;
class TransformInfoHttpInterface;
class TransformInfoInterface;
#include <org/allbinary/logic/visual/transform/info/objectConfig/GenericStoreTransformInfoObjectConfig.h>
class CommonSeps;
class Document;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class CompoundContextTransformInfoObjectConfig: public GenericStoreTransformInfoObjectConfig {

    /*protected*/ public: LogUtil* logUtil;

public: CompoundContextTransformInfoObjectConfig(AbeClientInformationInterface* abeClientInformation, TransformInfoInterface* transformInfoInterface);

public: CompoundContextTransformInfoObjectConfig(AbeClientInformationInterface* abeClientInformation, TransformInfoInterface* transformInfoInterface, Document* document);

public: CompoundContextTransformInfoObjectConfig(AbeClientInformationInterface* abeClientInformation, TransformInfoInterface* transformInfoInterface, std::string name, std::string type);

                //@Throws(Exception.constructor)
            
    public: std::string get();

                //@Throws(Exception.constructor)
            
    public: InputStream* createInputStream();

};

            


        #endif //VIEWS_COMPOUND_OBJECTCONFIG_COMPOUNDCONTEXTTRANSFORMINFOOBJECTCONFIG_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(VIEWS_COMPOUND_OBJECTCONFIG_COMPOUNDCONTEXTTRANSFORMINFOOBJECTCONFIG_H_COMPLETE)
        #define VIEWS_COMPOUND_OBJECTCONFIG_COMPOUNDCONTEXTTRANSFORMINFOOBJECTCONFIG_H_COMPLETE
        #if __has_include(<java/io/ByteArrayInputStream.h>)
#include <java/io/ByteArrayInputStream.h>
#endif
#if __has_include(<java/io/InputStream.h>)
#include <java/io/InputStream.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif

#if __has_include(<org/allbinary/data/tree/dom/document/DocumentToNode.h>)
#include <org/allbinary/data/tree/dom/document/DocumentToNode.h>
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
#if __has_include(<org/allbinary/logic/visual/transform/TransformFactory.h>)
#include <org/allbinary/logic/visual/transform/TransformFactory.h>
#endif
#if __has_include(<org/allbinary/logic/visual/transform/TransformInterface.h>)
#include <org/allbinary/logic/visual/transform/TransformInterface.h>
#endif
#if __has_include(<org/allbinary/logic/visual/transform/info/RootTransformInfoData.h>)
#include <org/allbinary/logic/visual/transform/info/RootTransformInfoData.h>
#endif
#if __has_include(<org/allbinary/logic/visual/transform/info/TransformInfoData.h>)
#include <org/allbinary/logic/visual/transform/info/TransformInfoData.h>
#endif
#if __has_include(<org/allbinary/logic/visual/transform/info/TransformInfoDomNode.h>)
#include <org/allbinary/logic/visual/transform/info/TransformInfoDomNode.h>
#endif
#if __has_include(<org/allbinary/logic/visual/transform/info/TransformInfoHttpInterface.h>)
#include <org/allbinary/logic/visual/transform/info/TransformInfoHttpInterface.h>
#endif
#if __has_include(<org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>)
#include <org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>
#endif
#if __has_include(<org/allbinary/logic/visual/transform/info/objectConfig/GenericStoreTransformInfoObjectConfig.h>)
#include <org/allbinary/logic/visual/transform/info/objectConfig/GenericStoreTransformInfoObjectConfig.h>
#endif
#if __has_include(<org/allbinary/string/CommonSeps.h>)
#include <org/allbinary/string/CommonSeps.h>
#endif
#if __has_include(<org/w3c/dom/Document.h>)
#include <org/w3c/dom/Document.h>
#endif

        #endif
    
