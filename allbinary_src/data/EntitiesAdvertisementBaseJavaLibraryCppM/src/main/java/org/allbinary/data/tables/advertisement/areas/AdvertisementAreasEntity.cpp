
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
        



        #ifndef ORG_ALLBINARY_DATA_TABLES_ADVERTISEMENT_AREAS_ADVERTISEMENTAREASENTITY_CPP
        #define ORG_ALLBINARY_DATA_TABLES_ADVERTISEMENT_AREAS_ADVERTISEMENTAREASENTITY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/data/tables/advertisement/areas/AdvertisementAreasEntity.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/business/advertisement/area/AdvertisementArea.h>

      
#include <org/allbinary/business/advertisement/area/AdvertisementAreaData.h>

      
#include <org/allbinary/business/advertisement/area/AdvertisementAreaInterface.h>

      
#include <org/allbinary/business/advertisement/campaign/AdvertisementCampaignData.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFrontData.h>

      
#include <org/allbinary/business/entry/EntryData.h>

      
#include <org/allbinary/business/init/db/UserDbInitInfo.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/communication/sql/AbSqlBean.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/data/tables/advertisement/areas/AdvertisementAreasEntityInterface.h"


AdvertisementAreasEntity::AdvertisementAreasEntity() : AbSqlBean(new UserDbInitInfo()), logUtil(LogUtil::getInstance()){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->setTableName(this->tableName);
    
}


    auto AdvertisementAreasEntity::delete_(std::string value) -> void{

        try {
            AbSqlBean::deleteWhere(EntryData::getInstance()->ID, value);
    

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->SQLLOGGING))
                        
                                    {
                                    this->logUtil->putF(this->commonStrings->SUCCESS, this, this->commonStrings->delete_);
    

                                    }
                                

                //: 
} catch(Exception& e) 
            {

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->SQLLOGGING))
                        
                                    {
                                    this->logUtil->put(this->commonStrings->FAILURE, this, this->commonStrings->delete_, &e);
    

                                    }
                                
}

}


                //@Throws(Exception.constructor)
            
    auto AdvertisementAreasEntity::get(std::string storeName) -> BasicArrayList*{

    HashMap<Object*, Object*>* keysAndValues = StdUtil::getInstance()->createHashMap();;
    
keysAndValues->put(StoreFrontData::getInstance()->NAME, storeName);
    

    BasicArrayList* hashMapVector = AbSqlBean::getRows(keysAndValues);;
    

    BasicArrayList* vector = new BasicArrayListD();;
    

    int32_t size = hashMapVector->size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    HashMap<Object*, Object*>* hashMap = dynamic_cast<HashMap*>(hashMapVector->get(index));;
    

                        if(hashMap != 
                                    nullptr
                                )
                        
                                    {
                                    vector->add(dynamic_cast<AdvertisementAreaInterface*>(new AdvertisementArea(hashMap)));
    

                                    }
                                
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return vector;
    
}


                //@Throws(Exception.constructor)
            
    auto AdvertisementAreasEntity::get(std::string storeName, std::string advertisementAreaName) -> AdvertisementAreaInterface*{

    HashMap<Object*, Object*>* keysAndValues = StdUtil::getInstance()->createHashMap();;
    
keysAndValues->put(StoreFrontData::getInstance()->NAME, storeName);
    
keysAndValues->put(AdvertisementAreaData::getInstance()->NAME, advertisementAreaName);
    

    HashMap<Object*, Object*>* hashMap = AbSqlBean::getRow(keysAndValues);;
    

                        if(hashMap != 
                                    nullptr
                                )
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return dynamic_cast<AdvertisementAreaInterface*>(new AdvertisementArea(hashMap));
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return nullptr;
    

                        }
                            
}


    auto AdvertisementAreasEntity::createTableStatement() -> std::string{

    AdvertisementAreaData* advertisementAreaData = AdvertisementAreaData::getInstance();;
    

    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append(this->sqlStrings->CREATE_TABLE);
    
stringBuffer->append(this->getTableName());
    
stringBuffer->append(this->sqlStrings->START);
    
stringBuffer->append(advertisementAreaData->NAME)->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL)->append(StoreFrontData::getInstance()->NAME)->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL)->append(advertisementAreaData->DESCRIPTION)->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL)->append(advertisementAreaData->CONSTRAINTS)->append(this->sqlTypeStrings->BLOB_NOT_NULL)->append(AdvertisementCampaignData::getInstance()->NAME)->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL)->append(EntryData::getInstance()->TIMECREATED)->append(this->sqlTypeStrings->MAX_BIG_INT_UNSIGNED_NOT_NULL)->append(EntryData::getInstance()->LASTMODIFIED)->append(this->sqlTypeStrings->MAX_BIG_INT_UNSIGNED_NOT_NULL)->append(this->sqlStrings->PRIMARY_KEY)->append(advertisementAreaData->NAME)->append(this->sqlStrings->END);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return stringBuffer->toString();;
    
}


    auto AdvertisementAreasEntity::createTable() -> std::string{

    std::string returnStr = AbSqlBean::createTable(this->createTableStatement());;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return returnStr;
    
}


    auto AdvertisementAreasEntity::update(HashMap<Object*, Object*>* updatedValues) -> void{
AbSqlBean::updateWhere(AdvertisementAreaData::getInstance()->NAME, JavaBoxes::unbox<std::string>(updatedValues->get(AdvertisementAreaData::getInstance()->NAME)), updatedValues);
    
}


    auto AdvertisementAreasEntity::dropTable() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return AbSqlBean::dropTable();;
    
}




        #endif //ORG_ALLBINARY_DATA_TABLES_ADVERTISEMENT_AREAS_ADVERTISEMENTAREASENTITY_CPP
