
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2002 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_DATA_TABLES_GENERATOR_IDGENERATORENTITY_H
        #define ORG_ALLBINARY_DATA_TABLES_GENERATOR_IDGENERATORENTITY_H

            #include "../../../../../java/lang/Exception.h"
        
            #include "../../../../../java/lang/Long.h"
        
#include <java/util/HashMap.h>

      
#include <java/util/Vector.h>

      
#include <org/allbinary/business/init/db/UserDbInitInfo.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/communication/sql/AbSqlBean.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "IdGeneratorEntityInterface.h"

class IdGeneratorEntity: public AbSqlBean: public IdGeneratorEntityInterface {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: const tableName: string = "idgenerator";

    private: const tableData: string;

    const NAME: string = "NAME";

    const VALUE: string = "VALUE";

public constructor ();

                //@Throws(Exception.constructor)
            
    public Long get(string name);

    public insert(Vector values);

    public delete(string value);

    public update(string name, Long value);

    public update(HashMap<any, any> hashMap);

    public string createTable();

    public string dropTable();

};

            


        #endif //ORG_ALLBINARY_DATA_TABLES_GENERATOR_IDGENERATORENTITY_H
