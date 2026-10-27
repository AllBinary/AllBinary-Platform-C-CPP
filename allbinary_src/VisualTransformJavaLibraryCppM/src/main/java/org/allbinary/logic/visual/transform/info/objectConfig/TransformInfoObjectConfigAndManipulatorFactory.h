
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
        



        #ifndef ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_INFO_OBJECTCONFIG_TRANSFORMINFOOBJECTCONFIGANDMANIPULATORFACTORY_H
        #define ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_INFO_OBJECTCONFIG_TRANSFORMINFOOBJECTCONFIGANDMANIPULATORFACTORY_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
class DomDocumentHelper;
class LogUtil;
class CryptFileReader;
class AbPath;
class StringValidationUtil;
class AbeClientInformationInterface;
class TransformInfoInterface;
class Document;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/visual/transform/info/objectConfig/TransformInfoObjectConfigAndManipulatorFactoryBase.h"
class TransformInfoObjectConfigData;
class TransformInfoObjectConfigInterface;
class TransformInfoObjectConfig;
class GenericStoreTransformInfoObjectConfig;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class TransformInfoObjectConfigAndManipulatorFactory: public TransformInfoObjectConfigAndManipulatorFactoryBase {

    private: static TransformInfoObjectConfigAndManipulatorFactory* instance_owner();
    private: static TransformInfoObjectConfigAndManipulatorFactory* instance;

    public: static TransformInfoObjectConfigAndManipulatorFactory* getInstance();

    /*protected*/ public: LogUtil* logUtil;

private: TransformInfoObjectConfigAndManipulatorFactory();

                //@Throws(Exception.constructor)
            
    public: TransformInfoObjectConfigInterface* getInstance(AbeClientInformationInterface* abeClientInformation, TransformInfoInterface* transformInfoInterface, AbPath* objectConfigFileAbPath);

                //@Throws(Exception.constructor)
            
    public: TransformInfoObjectConfigInterface* getInstance(AbeClientInformationInterface* abeClientInformation, TransformInfoInterface* transformInfoInterface);

                //@Throws(Exception.constructor)
            
    public: TransformInfoObjectConfigInterface* getInstance(AbeClientInformationInterface* abeClientInformation, TransformInfoInterface* transformInfoInterface, Document* document);

};

            


        #endif //ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_INFO_OBJECTCONFIG_TRANSFORMINFOOBJECTCONFIGANDMANIPULATORFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_INFO_OBJECTCONFIG_TRANSFORMINFOOBJECTCONFIGANDMANIPULATORFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_INFO_OBJECTCONFIG_TRANSFORMINFOOBJECTCONFIGANDMANIPULATORFACTORY_H_COMPLETE
        #if __has_include(<org/allbinary/data/tree/dom/document/DomDocumentHelper.h>)
#include <org/allbinary/data/tree/dom/document/DomDocumentHelper.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/control/crypt/file/CryptFileReader.h>)
#include <org/allbinary/logic/control/crypt/file/CryptFileReader.h>
#endif
#if __has_include(<org/allbinary/logic/io/path/AbPath.h>)
#include <org/allbinary/logic/io/path/AbPath.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringValidationUtil.h>)
#include <org/allbinary/logic/string/StringValidationUtil.h>
#endif
#if __has_include(<org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>)
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>
#endif
#if __has_include(<org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>)
#include <org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>
#endif
#if __has_include(<org/w3c/dom/Document.h>)
#include <org/w3c/dom/Document.h>
#endif
#if __has_include("org/allbinary/logic/visual/transform/info/objectConfig/TransformInfoObjectConfigAndManipulatorFactoryBase.h")
#include "org/allbinary/logic/visual/transform/info/objectConfig/TransformInfoObjectConfigAndManipulatorFactoryBase.h"
#endif
#if __has_include("org/allbinary/logic/visual/transform/info/objectConfig/TransformInfoObjectConfigData.h")
#include "org/allbinary/logic/visual/transform/info/objectConfig/TransformInfoObjectConfigData.h"
#endif
#if __has_include("org/allbinary/logic/visual/transform/info/objectConfig/TransformInfoObjectConfigInterface.h")
#include "org/allbinary/logic/visual/transform/info/objectConfig/TransformInfoObjectConfigInterface.h"
#endif
#if __has_include("org/allbinary/logic/visual/transform/info/objectConfig/TransformInfoObjectConfig.h")
#include "org/allbinary/logic/visual/transform/info/objectConfig/TransformInfoObjectConfig.h"
#endif
#if __has_include("org/allbinary/logic/visual/transform/info/objectConfig/GenericStoreTransformInfoObjectConfig.h")
#include "org/allbinary/logic/visual/transform/info/objectConfig/GenericStoreTransformInfoObjectConfig.h"
#endif

        #endif
    
