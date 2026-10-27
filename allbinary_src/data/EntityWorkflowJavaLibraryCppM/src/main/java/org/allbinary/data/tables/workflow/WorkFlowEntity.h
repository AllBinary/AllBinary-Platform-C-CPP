
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
        



        #ifndef ORG_ALLBINARY_DATA_TABLES_WORKFLOW_WORKFLOWENTITY_H
        #define ORG_ALLBINARY_DATA_TABLES_WORKFLOW_WORKFLOWENTITY_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <java/util/HashMap.h>
class BasicArrayList;
class BasicArrayListD;
class DynamicObjectData;
class StoreFrontData;
class EntryData;
class UserDbInitInfo;
class StdUtil;
class LogUtil;
#include <org/allbinary/logic/communication/sql/AbSqlBean.h>
class DbWorkFlowFactory;
class WorkFlowData;
class WorkFlowInterface;
class StringMaker;
class AbeClientInformationInterface;
class LicensingException;
class ServiceClientInformationInterfaceFactory;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/data/tables/workflow/WorkFlowEntityInterface.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class WorkFlowEntity: public AbSqlBean, public WorkFlowEntityInterface {

    /*protected*/ public: LogUtil* logUtil;

    private: AbeClientInformationInterface* abeClientInformation;

    /*protected*/ public: const std::string tableName = "workflows";

    private: const std::string METHOD_GET = "get()";

    private: const std::string METHOD_UPDATE = "update";

public: WorkFlowEntity();

    public: void insert(BasicArrayList* values);

    public: void delete_(std::string name, std::string storeName);

                //@Throws(Exception.constructor, LicensingException.constructor)
            
    public: WorkFlowInterface* get(std::string name, std::string storeName);

    public: BasicArrayList* get(std::string storeName);

    public: void update(HashMap<Object*, Object*>* updatedValues);

    public: std::string createTableStatement();

    public: std::string createTable();

    public: std::string dropTable();

};

            


        #endif //ORG_ALLBINARY_DATA_TABLES_WORKFLOW_WORKFLOWENTITY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_DATA_TABLES_WORKFLOW_WORKFLOWENTITY_H_COMPLETE)
        #define ORG_ALLBINARY_DATA_TABLES_WORKFLOW_WORKFLOWENTITY_H_COMPLETE
        #if __has_include(<java/util/HashMap.h>)
#include <java/util/HashMap.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayListD.h>)
#include <org/allbinary/util/BasicArrayListD.h>
#endif
#if __has_include(<org/allbinary/business/DynamicObjectData.h>)
#include <org/allbinary/business/DynamicObjectData.h>
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
#if __has_include(<org/allbinary/logic/StdUtil.h>)
#include <org/allbinary/logic/StdUtil.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/communication/sql/AbSqlBean.h>)
#include <org/allbinary/logic/communication/sql/AbSqlBean.h>
#endif
#if __has_include(<org/allbinary/logic/control/workflow/DbWorkFlowFactory.h>)
#include <org/allbinary/logic/control/workflow/DbWorkFlowFactory.h>
#endif
#if __has_include(<org/allbinary/logic/control/workflow/WorkFlowData.h>)
#include <org/allbinary/logic/control/workflow/WorkFlowData.h>
#endif
#if __has_include(<org/allbinary/logic/control/workflow/WorkFlowInterface.h>)
#include <org/allbinary/logic/control/workflow/WorkFlowInterface.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>)
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>
#endif
#if __has_include(<org/allbinary/logic/system/security/licensing/LicensingException.h>)
#include <org/allbinary/logic/system/security/licensing/LicensingException.h>
#endif
#if __has_include(<org/allbinary/logic/system/security/licensing/ServiceClientInformationInterfaceFactory.h>)
#include <org/allbinary/logic/system/security/licensing/ServiceClientInformationInterfaceFactory.h>
#endif
#if __has_include("org/allbinary/data/tables/workflow/WorkFlowEntityInterface.h")
#include "org/allbinary/data/tables/workflow/WorkFlowEntityInterface.h"
#endif

        #endif
    
