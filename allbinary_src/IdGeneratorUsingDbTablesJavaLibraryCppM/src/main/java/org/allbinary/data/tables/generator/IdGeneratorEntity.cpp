
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
        #include "IdGeneratorEntityInterface.h"

class IdGeneratorEntity: public AbSqlBean, public IdGeneratorEntityInterface {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: const std::string tableName = "idgenerator";

    private: std::string tableData;

    const std::string NAME = "NAME";

    const std::string VALUE = "VALUE";

public: IdGeneratorEntity() : AbSqlBean(UserDbInitInfo()){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->tableData= StringMaker().append(this->sqlStrings.CREATE_TABLE).append(tableName).append(this->sqlStrings.START).append(NAME).append(this->sqlTypeStrings.MAX_CHAR_COLUMN_NOT_NULL).append(VALUE).append(this->sqlTypeStrings.MAX_BIG_INT_UNSIGNED_NOT_NULL).append(this->sqlStrings.PRIMARY_KEY).append(NAME).append(this->sqlStrings.END).toString();
    
super.setTableName(this->tableName);
    
}


                //@Throws(Exception.constructor)
            
    public: Long get(std::string name){

    HashMap<Object*, Object*> keysAndValues = StdUtil::getInstance().createHashMap();;
    
keysAndValues.put(this->NAME, name);
    

    HashMap<Object*, Object*> hashMap = super.getRow(keysAndValues);;
    

                        if((get).compareTo(name) != 0)
                        
                                    {
                                    


                            throw Exception("results do not match");
                    

                                    }
                                

    std::string value = hashMap.get(this->VALUE);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Long::parseLong(value);;
    
}


    public: void insert(BasicArrayList values){

        try {
            super.insert(values);
    
this->logUtil.putF(this->commonStrings.SUCCESS, this, INSERT);
    

                //: 
} catch(e) 
            {
this->logUtil.put(this->commonStrings.FAILURE, this, INSERT, e);
    
}

}


    public: void delete_(std::string value){

        try {
            super.deleteWhere(this->NAME, value);
    
this->logUtil.putF(this->commonStrings.SUCCESS, this, this->commonStrings.delete_);
    

                //: 
} catch(e) 
            {
this->logUtil.put(this->commonStrings.FAILURE, this, this->commonStrings.delete_, e);
    
}

}


    public: void update(std::string name, Long value){

    HashMap<Object*, Object*> map = StdUtil::getInstance().createHashMap();;
    
map.put(this->NAME, name);
    
map.put(this->VALUE, value.toString());
    
this->update(map);
    
}


    public: void update(HashMap<Object*, Object*> hashMap){
super.updateWhere(this->NAME, hashMap.get(this->NAME), hashMap);
    
}


    public: std::string createTable(){

    std::string returnStr = super.createTable(tableData);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return returnStr;
    
}


    public: std::string dropTable(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return super.dropTable();;
    
}


};

            

