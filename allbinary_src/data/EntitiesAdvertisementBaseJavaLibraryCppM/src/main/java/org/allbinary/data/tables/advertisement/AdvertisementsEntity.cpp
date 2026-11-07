
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
        



        #ifndef ORG_ALLBINARY_DATA_TABLES_ADVERTISEMENT_ADVERTISEMENTSENTITY_CPP
        #define ORG_ALLBINARY_DATA_TABLES_ADVERTISEMENT_ADVERTISEMENTSENTITY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/data/tables/advertisement/AdvertisementsEntity.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/business/DynamicObjectData.h>

      
#include <org/allbinary/business/advertisement/AdvertisementData.h>

      
#include <org/allbinary/business/advertisement/AdvertisementInterface.h>

      
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
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/data/tables/advertisement/AdvertisementsEntityInterface.h"


AdvertisementsEntity::AdvertisementsEntity() : AbSqlBean(new UserDbInitInfo()), logUtil(LogUtil::getInstance()){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->setTableName(this->tableName);
    
}


    auto AdvertisementsEntity::delete_(std::string value) -> void{

        try {
            AbSqlBean::deleteWhere(EntryData::getInstance()->ID, value);
    

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


    auto AdvertisementsEntity::get(std::string storeName) -> BasicArrayList*{

    HashMap<Object*, Object*>* keysAndValues = StdUtil::getInstance()->createHashMap();;
    
keysAndValues->put(StoreFrontData::getInstance()->NAME, storeName);
    

    BasicArrayList* hashMapVector = AbSqlBean::getRows(keysAndValues);;
    

    BasicArrayList* vector = new BasicArrayListD();;
    

    int32_t size = hashMapVector->size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    HashMap<Object*, Object*>* hashMap = dynamic_cast<HashMap*>(hashMapVector->get(index));;
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return vector;
    
}


    auto AdvertisementsEntity::get(std::string storeName, std::string advertismentName) -> AdvertisementInterface*{

    HashMap<Object*, Object*>* keysAndValues = StdUtil::getInstance()->createHashMap();;
    
keysAndValues->put(StoreFrontData::getInstance()->NAME, storeName);
    
keysAndValues->put(AdvertisementData::getInstance()->NAME, advertismentName);
    

    HashMap<Object*, Object*>* hashMap = AbSqlBean::getRow(keysAndValues);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return nullptr;
    
}


    auto AdvertisementsEntity::createTableStatement() -> std::string{

    AdvertisementData* advertisementData = AdvertisementData::getInstance();;
    

    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append(this->sqlStrings->CREATE_TABLE);
    
stringBuffer->append(this->getTableName())->append(this->sqlStrings->START)->append(advertisementData->NAME)->append(_INDEX)->append(this->sqlTypeStrings->MAX_BIG_INT_UNSIGNED_NOT_NULL)->append(advertisementData->NAME)->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL)->append(StoreFrontData::getInstance()->NAME)->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL)->append(advertisementData->DESCRIPTION)->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL);
    
stringBuffer->append(DynamicObjectData::NAME)->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL)->append(EntryData::getInstance()->TIMECREATED)->append(this->sqlTypeStrings->MAX_BIG_INT_UNSIGNED_NOT_NULL)->append(EntryData::getInstance()->LASTMODIFIED)->append(this->sqlTypeStrings->MAX_BIG_INT_UNSIGNED_NOT_NULL)->append(this->sqlStrings->PRIMARY_KEY)->append(advertisementData->NAME)->append(this->sqlStrings->END);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return JavaString::valueOf(stringBuffer);;
    
}


    auto AdvertisementsEntity::createTable() -> std::string{

    std::string returnStr = AbSqlBean::createTable(this->createTableStatement());;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return returnStr;
    
}


    auto AdvertisementsEntity::update(HashMap<Object*, Object*>* updatedValues) -> void{
AbSqlBean::updateWhere(EntryData::getInstance()->ID, JavaBoxes::unbox<std::string>(updatedValues->get(EntryData::getInstance()->ID)), updatedValues);
    
}


    auto AdvertisementsEntity::dropTable() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return AbSqlBean::dropTable();;
    
}


    auto AdvertisementsEntity::insert(BasicArrayList* values) -> void{
AbSqlBean::insert(values);
    
}




        #endif //ORG_ALLBINARY_DATA_TABLES_ADVERTISEMENT_ADVERTISEMENTSENTITY_CPP
