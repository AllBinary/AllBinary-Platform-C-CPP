
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
        



        #ifndef ORG_ALLBINARY_DATA_TABLES_GENERATOR_IDGENERATORENTITY_CPP
        #define ORG_ALLBINARY_DATA_TABLES_GENERATOR_IDGENERATORENTITY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/data/tables/generator/IdGeneratorEntity.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Long.h"
        
#include <java/util/HashMap.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/business/init/db/UserDbInitInfo.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/communication/sql/AbSqlBean.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/data/tables/generator/IdGeneratorEntityInterface.h"


IdGeneratorEntity::IdGeneratorEntity() : AbSqlBean(new UserDbInitInfo()), logUtil(LogUtil::getInstance()){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->tableData= (new StringMaker())->append(this->sqlStrings->CREATE_TABLE)->append(tableName)->append(this->sqlStrings->START)->append(NAME)->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL)->append(VALUE)->append(this->sqlTypeStrings->MAX_BIG_INT_UNSIGNED_NOT_NULL)->append(this->sqlStrings->PRIMARY_KEY)->append(NAME)->append(this->sqlStrings->END)->toString();
    
AbSqlBean::setTableName(this->tableName);
    
}


                //@Throws(Exception.constructor)
            
    auto IdGeneratorEntity::get(std::string name) -> int64_t{

    HashMap<Object*, Object*>* keysAndValues = StdUtil::getInstance()->createHashMap();;
    
keysAndValues->put(this->NAME, name);
    

    HashMap<Object*, Object*>* hashMap = AbSqlBean::getRow(keysAndValues);;
    

                        if((get)).compareTo(name) != 0)
                        
                                    {
                                    


                            throw Exception("results do not match");
                    

                                    }
                                

    std::string value = JavaBoxes::unbox<std::string>(hashMap->get(this->VALUE));;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return Long.parseLong(value);;
    
}


    auto IdGeneratorEntity::insert(BasicArrayList* values) -> void{

        try {
            AbSqlBean::insert(values);
    
this->logUtil->putF(this->commonStrings->SUCCESS, this, INSERT);
    

                //: 
} catch(Exception& e) 
            {
this->logUtil->put(this->commonStrings->FAILURE, this, INSERT, &e);
    
}

}


    auto IdGeneratorEntity::delete_(std::string value) -> void{

        try {
            AbSqlBean::deleteWhere(this->NAME, value);
    
this->logUtil->putF(this->commonStrings->SUCCESS, this, this->commonStrings->delete_);
    

                //: 
} catch(Exception& e) 
            {
this->logUtil->put(this->commonStrings->FAILURE, this, this->commonStrings->delete_, &e);
    
}

}


    auto IdGeneratorEntity::update(std::string name, int64_t value) -> void{

    HashMap<Object*, Object*>* map = StdUtil::getInstance()->createHashMap();;
    
map->put(this->NAME, name);
    
map->put(this->VALUE, value.toString());
    
this->update(map);
    
}


    auto IdGeneratorEntity::update(HashMap<Object*, Object*>* hashMap) -> void{
AbSqlBean::updateWhere(this->NAME, JavaBoxes::unbox<std::string>(hashMap->get(this->NAME)), hashMap);
    
}


    auto IdGeneratorEntity::createTable() -> std::string{

    std::string returnStr = AbSqlBean::createTable(tableData);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return returnStr;
    
}


    auto IdGeneratorEntity::dropTable() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return AbSqlBean::dropTable();;
    
}


    auto IdGeneratorEntity::deleteWhere(std::string key, std::string value) -> void{
AbSqlBean::deleteWhere(key, value);
    
}




        #endif //ORG_ALLBINARY_DATA_TABLES_GENERATOR_IDGENERATORENTITY_CPP
