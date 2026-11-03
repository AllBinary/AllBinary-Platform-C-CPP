
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
        



        #ifndef ORG_ALLBINARY_DATA_TABLES_TRANSFORM_INFO_TRANSFORMINFOENTITY_H
        #define ORG_ALLBINARY_DATA_TABLES_TRANSFORM_INFO_TRANSFORMINFOENTITY_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/util/HashMap.h>
class BasicArrayList;
class BasicArrayListD;
class PageContext;
class StoreFrontData;
class EntryData;
class UserDbInitInfo;
class DomDocumentHelper;
class StdUtil;
class LogUtil;
#include <org/allbinary/logic/communication/sql/AbSqlBean.h>
class Encoder;
class StringMaker;
class AbeClientInformationInterface;
class ServiceClientInformationInterfaceFactory;
class TransformInfoData;
class TransformInfoFactoryInterface;
class TransformInfoInterface;
class TransformInfoObjectConfigAndManipulatorFactoryBase;
class TransformInfoObjectConfigGeneratorFactoryInterface;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/data/tables/transform/info/TransformInfoEntityInterface.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class TransformInfoEntity: public AbSqlBean, public virtual TransformInfoEntityInterface {

    /*protected*/ public: LogUtil* logUtil;

    /*protected*/ public: const std::string tableName = "transforminfo";

    private: AbeClientInformationInterface* abeClientInformation;

    private: TransformInfoFactoryInterface* transformInfoFactoryInterface;

    private: TransformInfoObjectConfigAndManipulatorFactoryBase* transformInfoObjectConfigAndManipulatorFactoryInterface;

    private: TransformInfoObjectConfigGeneratorFactoryInterface* transformInfoObjectConfigGeneratorFactoryInterface;

public: TransformInfoEntity(TransformInfoObjectConfigGeneratorFactoryInterface* transformInfoObjectConfigGeneratorFactoryInterface, TransformInfoObjectConfigAndManipulatorFactoryBase* transformInfoObjectConfigAndManipulatorFactoryInterface, TransformInfoFactoryInterface* transformInfoFactoryInterface);

    public: void insert(BasicArrayList* values);

    public: void delete_(std::string value);

                //@Throws(Exception.constructor)
            
    public: TransformInfoInterface* get(std::string name, HashMap<Object*, Object*>* propertiesHashMap, PageContext* pageContext);

                //@Throws(Exception.constructor)
            
    public: BasicArrayList* getObjectConfigs(std::string storeName);

                //@Throws(Exception.constructor)
            
    public: BasicArrayList* getNames(std::string storeName);

    public: std::string createTableStatement();

    public: std::string createTable();

    public: void update(HashMap<Object*, Object*>* updatedValues);

    public: std::string dropTable();

};

            


        #endif //ORG_ALLBINARY_DATA_TABLES_TRANSFORM_INFO_TRANSFORMINFOENTITY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_DATA_TABLES_TRANSFORM_INFO_TRANSFORMINFOENTITY_H_COMPLETE)
        #define ORG_ALLBINARY_DATA_TABLES_TRANSFORM_INFO_TRANSFORMINFOENTITY_H_COMPLETE
        #if __has_include(<java/util/HashMap.h>)
#include <java/util/HashMap.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayListD.h>)
#include <org/allbinary/util/BasicArrayListD.h>
#endif
#if __has_include(<javax/servlet/jsp/PageContext.h>)
#include <javax/servlet/jsp/PageContext.h>
#endif
#if __has_include(<org/allbinary/business/context/modules/storefront/StoreFrontData.h>)
#include <org/allbinary/business/context/modules/storefront/StoreFrontData.h>
#endif
#if __has_include(<org/allbinary/business/entry/EntryData.h>)
#include <org/allbinary/business/entry/EntryData.h>
#endif
#if __has_include(<org/allbinary/business/init/db/UserDbInitInfo.h>)
#include <org/allbinary/business/init/db/UserDbInitInfo.h>
#endif
#if __has_include(<org/allbinary/data/tree/dom/document/DomDocumentHelper.h>)
#include <org/allbinary/data/tree/dom/document/DomDocumentHelper.h>
#endif
#if __has_include(<org/allbinary/logic/StdUtil.h>)
#include <org/allbinary/logic/StdUtil.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/communication/sql/AbSqlBean.h>)
#include <org/allbinary/logic/communication/sql/AbSqlBean.h>
#endif
#if __has_include(<org/allbinary/logic/control/crypt/Encoder.h>)
#include <org/allbinary/logic/control/crypt/Encoder.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>)
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>
#endif
#if __has_include(<org/allbinary/logic/system/security/licensing/ServiceClientInformationInterfaceFactory.h>)
#include <org/allbinary/logic/system/security/licensing/ServiceClientInformationInterfaceFactory.h>
#endif
#if __has_include(<org/allbinary/logic/visual/transform/info/TransformInfoData.h>)
#include <org/allbinary/logic/visual/transform/info/TransformInfoData.h>
#endif
#if __has_include(<org/allbinary/logic/visual/transform/info/TransformInfoFactoryInterface.h>)
#include <org/allbinary/logic/visual/transform/info/TransformInfoFactoryInterface.h>
#endif
#if __has_include(<org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>)
#include <org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>
#endif
#if __has_include(<org/allbinary/logic/visual/transform/info/objectConfig/TransformInfoObjectConfigAndManipulatorFactoryBase.h>)
#include <org/allbinary/logic/visual/transform/info/objectConfig/TransformInfoObjectConfigAndManipulatorFactoryBase.h>
#endif
#if __has_include(<org/allbinary/logic/visual/transform/info/objectConfig/generator/TransformInfoObjectConfigGeneratorFactoryInterface.h>)
#include <org/allbinary/logic/visual/transform/info/objectConfig/generator/TransformInfoObjectConfigGeneratorFactoryInterface.h>
#endif
#if __has_include("org/allbinary/data/tables/transform/info/TransformInfoEntityInterface.h")
#include "org/allbinary/data/tables/transform/info/TransformInfoEntityInterface.h"
#endif

        #endif
    
