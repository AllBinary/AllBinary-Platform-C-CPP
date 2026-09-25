
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_INIT_INITINFOENTITY_H
        #define ORG_ALLBINARY_BUSINESS_INIT_INITINFOENTITY_H

            #include "../../../../java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/business/init/db/UserDbInitInfo.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/logic/communication/log/PreLogUtil.h>

      
#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

      
#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

      
#include <org/allbinary/logic/io/path/AbPathData.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "InitSql.h"
#include "InitInfo.h"

class InitInfoEntity: public InitSql {

    private: const std::string NAME = "InitInfoEntity";

    private: const std::string NOTHING = "NOTHING";

    private: const std::string tableName = "initdata";

    private: std::string tableData;

    private: const std::string NOT_IN_DB = "Not In DB";

    private: const std::string METHOD_GET = "get()";

    private: const std::string METHOD_IS = "is()";

    private: const std::string METHOD_ADD = "add()";

    private: const std::string CREATED_SUCCESS = " Created Successfully";

    private: const std::string FAILED_TO_CREATE = "Failed to create ";

public: InitInfoEntity();

    public: bool get();

    public: bool is();

    public: void update();

    public: void add();

    public: std::string createTable();

};

            


        #endif //ORG_ALLBINARY_BUSINESS_INIT_INITINFOENTITY_H
