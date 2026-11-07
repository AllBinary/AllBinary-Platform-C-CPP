
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
        



        #ifndef ORG_ALLBINARY_DATA_TABLES_CONTEXT_MODULE_STOREFRONTS_STOREFRONTSENTITY_CPP
        #define ORG_ALLBINARY_DATA_TABLES_CONTEXT_MODULE_STOREFRONTS_STOREFRONTSENTITY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/data/tables/context/module/storefronts/StoreFrontsEntity.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFront.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFrontData.h>

      
#include <org/allbinary/business/entry/EntryData.h>

      
#include <org/allbinary/business/init/db/UserDbInitInfo.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/communication/sql/AbSqlBean.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/data/tables/context/module/storefronts/StoreFrontsEntityInterface.h"


StoreFrontsEntity::StoreFrontsEntity() : AbSqlBean(new UserDbInitInfo()), logUtil(LogUtil::getInstance()){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->setTableName(this->tableName);
    
}


    auto StoreFrontsEntity::insert(BasicArrayList* values) -> void{

        try {
            AbSqlBean::insert(values);
    

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->SQLLOGGING))
                        
                                    {
                                    this->logUtil->putF(this->commonStrings->SUCCESS, this, INSERT);
    

                                    }
                                

                //: 
} catch(Exception& e) 
            {

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->SQLLOGGING))
                        
                                    {
                                    this->logUtil->put(this->commonStrings->FAILURE, this, INSERT, &e);
    

                                    }
                                
}

}


    auto StoreFrontsEntity::delete_(std::string value) -> void{

        try {
            AbSqlBean::deleteWhere(StoreFrontData::getInstance()->NAME, value);
    

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->SQLLOGGING))
                        
                                    {
                                    this->logUtil->putF(this->commonStrings->SUCCESS, this, this->commonStrings->delete_);
    

                                    }
                                

                //: 
} catch(Exception& e) 
            {

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->SQLLOGGING))
                        
                                    {
                                    this->logUtil->put(this->commonStrings->FAILURE, this, this->commonStrings->delete_, &e);
    

                                    }
                                
}

}


                //@Throws(Exception.constructor)
            
    auto StoreFrontsEntity::getStoreFrontInterface(std::string name) -> StoreFront*{

    HashMap<Object*, Object*>* keysAndValues = StdUtil::getInstance()->createHashMap();;
    
keysAndValues->put(StoreFrontData::getInstance()->NAME, name);
    

    HashMap<Object*, Object*>* storeHashMap = AbSqlBean::getRow(keysAndValues);;
    

                        if(storeHashMap != 
                                    nullptr
                                )
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return new StoreFront(storeHashMap);
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return new StoreFront();
    

                        }
                            
}


    auto StoreFrontsEntity::getStoreFrontNames() -> BasicArrayList*{

    BasicArrayList* storeFrontNames = AbSqlBean::getColumn(StoreFrontData::getInstance()->NAME);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return storeFrontNames;
    
}


    auto StoreFrontsEntity::update(HashMap<Object*, Object*>* updatedValues) -> void{
AbSqlBean::updateWhere(StoreFrontData::getInstance()->NAME, JavaBoxes::unbox<std::string>(updatedValues->get(StoreFrontData::getInstance()->NAME)), updatedValues);
    
}


    auto StoreFrontsEntity::createTableStatement() -> std::string{

    StoreFrontData* storeFrontData = StoreFrontData::getInstance();;
    

    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append(this->sqlStrings->CREATE_TABLE);
    
stringBuffer->append(this->tableName);
    
stringBuffer->append(this->sqlStrings->START);
    
stringBuffer->append(storeFrontData->NAME);
    
stringBuffer->append(this->sqlTypeStrings->SIXTY_CHAR_COLUMN_NOT_NULL);
    
stringBuffer->append(storeFrontData->HOMEHOSTNAME);
    
stringBuffer->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL);
    
stringBuffer->append(storeFrontData->HOMEHOSTNAMEPATH);
    
stringBuffer->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL);
    
stringBuffer->append(storeFrontData->HOSTNAME);
    
stringBuffer->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL);
    
stringBuffer->append(storeFrontData->HOSTNAMEPATH);
    
stringBuffer->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL);
    
stringBuffer->append(storeFrontData->TESTHOMEHOSTNAME);
    
stringBuffer->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL);
    
stringBuffer->append(storeFrontData->TESTHOMEHOSTNAMEPATH);
    
stringBuffer->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL);
    
stringBuffer->append(storeFrontData->TESTHOSTNAME);
    
stringBuffer->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL);
    
stringBuffer->append(storeFrontData->TESTHOSTNAMEPATH);
    
stringBuffer->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL);
    
stringBuffer->append(storeFrontData->IMAGEPATH);
    
stringBuffer->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL);
    
stringBuffer->append(storeFrontData->STATICPATH);
    
stringBuffer->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL);
    
stringBuffer->append(storeFrontData->CATEGORYPATH);
    
stringBuffer->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL);
    
stringBuffer->append(storeFrontData->INVENTORYCONTROL);
    
stringBuffer->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL);
    
stringBuffer->append(storeFrontData->CONFIGURATION);
    
stringBuffer->append(this->sqlTypeStrings->BLOB_NOT_NULL);
    
stringBuffer->append(storeFrontData->SUBSTORES);
    
stringBuffer->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL);
    
stringBuffer->append(storeFrontData->TAGLOCATION);
    
stringBuffer->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL);
    
stringBuffer->append(storeFrontData->PACKAGELOCATION);
    
stringBuffer->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL);
    
stringBuffer->append(storeFrontData->FTP);
    
stringBuffer->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL);
    
stringBuffer->append(storeFrontData->FTPPATH);
    
stringBuffer->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL);
    
stringBuffer->append(storeFrontData->FTPUSERNAME);
    
stringBuffer->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL);
    
stringBuffer->append(storeFrontData->FTPPASSWORD);
    
stringBuffer->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL);
    
stringBuffer->append(storeFrontData->TESTFTP);
    
stringBuffer->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL);
    
stringBuffer->append(storeFrontData->TESTFTPPATH);
    
stringBuffer->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL);
    
stringBuffer->append(storeFrontData->TESTFTPUSERNAME);
    
stringBuffer->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL);
    
stringBuffer->append(storeFrontData->TESTFTPPASSWORD);
    
stringBuffer->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL);
    
stringBuffer->append(EntryData::getInstance()->TIMECREATED);
    
stringBuffer->append(this->sqlTypeStrings->MAX_BIG_INT_UNSIGNED_NOT_NULL);
    
stringBuffer->append(EntryData::getInstance()->getInstance()->LASTMODIFIED);
    
stringBuffer->append(this->sqlTypeStrings->MAX_BIG_INT_UNSIGNED_NOT_NULL);
    
stringBuffer->append(this->sqlStrings->PRIMARY_KEY);
    
stringBuffer->append(storeFrontData->NAME);
    
stringBuffer->append(this->sqlStrings->END);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return JavaString::valueOf(stringBuffer);;
    
}


    auto StoreFrontsEntity::createTable() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return AbSqlBean::createTable(this->createTableStatement());;
    
}


    auto StoreFrontsEntity::dropTable() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return AbSqlBean::dropTable();;
    
}




        #endif //ORG_ALLBINARY_DATA_TABLES_CONTEXT_MODULE_STOREFRONTS_STOREFRONTSENTITY_CPP
