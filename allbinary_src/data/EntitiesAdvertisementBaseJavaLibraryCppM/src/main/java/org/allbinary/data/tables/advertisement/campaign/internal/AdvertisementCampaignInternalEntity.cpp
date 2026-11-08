
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
        



        #ifndef ORG_ALLBINARY_DATA_TABLES_ADVERTISEMENT_CAMPAIGN_INTERNAL_ADVERTISEMENTCAMPAIGNINTERNALENTITY_CPP
        #define ORG_ALLBINARY_DATA_TABLES_ADVERTISEMENT_CAMPAIGN_INTERNAL_ADVERTISEMENTCAMPAIGNINTERNALENTITY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/data/tables/advertisement/campaign/internal/AdvertisementCampaignInternalEntity.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/business/advertisement/campaign/AdvertisementCampaign.h>

      
#include <org/allbinary/business/advertisement/campaign/AdvertisementCampaignData.h>

      
#include <org/allbinary/business/advertisement/campaign/AdvertisementCampaignInterface.h>

      
#include <org/allbinary/business/advertisement/campaign/AdvertisementCampaigns.h>

      
#include <org/allbinary/business/advertisement/campaign/AdvertisementCampaignsInterface.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFrontData.h>

      
#include <org/allbinary/business/entry/EntryData.h>

      
#include <org/allbinary/business/init/db/UserDbInitInfo.h>

      
#include <org/allbinary/business/time/TimeData.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/communication/sql/AbSqlBean.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/data/tables/advertisement/campaign/internal/AdvertisementCampaignInternalEntityInterface.h"


AdvertisementCampaignInternalEntity::AdvertisementCampaignInternalEntity() : AbSqlBean(new UserDbInitInfo()), logUtil(LogUtil::getInstance()){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->setTableName(this->tableName);
    
}


    auto AdvertisementCampaignInternalEntity::delete_(std::string value) -> void{

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


    auto AdvertisementCampaignInternalEntity::getCampaignsInStore(std::string storeName) -> AdvertisementCampaignsInterface*{

    HashMap<Object*, Object*>* keysAndValues = StdUtil::getInstance()->createHashMap();;
    
keysAndValues->put(StoreFrontData::getInstance()->NAME, storeName);
    

    BasicArrayList* hashMapVector = AbSqlBean::getRows(keysAndValues);;
    

    BasicArrayList* vector = new BasicArrayListD();;
    

    int32_t size = hashMapVector->size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    HashMap<Object*, Object*>* hashMap = dynamic_cast<HashMap<Object*, Object*>*>(hashMapVector->get(index));;
    

                        if(hashMap != 
                                    nullptr
                                )
                        
                                    {
                                    vector->add(dynamic_cast<AdvertisementCampaignInterface*>(new AdvertisementCampaign(hashMap)));
    

                                    }
                                
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return dynamic_cast<AdvertisementCampaignsInterface*>(new AdvertisementCampaigns(vector));
    
}


    auto AdvertisementCampaignInternalEntity::get(std::string storeName, std::string name) -> AdvertisementCampaignInterface*{

    HashMap<Object*, Object*>* keysAndValues = StdUtil::getInstance()->createHashMap();;
    
keysAndValues->put(StoreFrontData::getInstance()->NAME, storeName);
    
keysAndValues->put(AdvertisementCampaignData::getInstance()->NAME, name);
    

    HashMap<Object*, Object*>* hashMap = AbSqlBean::getRow(keysAndValues);;
    

                        if(hashMap != 
                                    nullptr
                                )
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return dynamic_cast<AdvertisementCampaignInterface*>(new AdvertisementCampaign(hashMap));
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return nullptr;
    

                        }
                            
}


    auto AdvertisementCampaignInternalEntity::update(HashMap<Object*, Object*>* updatedValues) -> void{
AbSqlBean::updateWhere(EntryData::getInstance()->getInstance()->ID, JavaBoxes::unbox<std::string>(updatedValues->get(EntryData::getInstance()->getInstance()->ID)), updatedValues);
    
}


    auto AdvertisementCampaignInternalEntity::createTableStatement() -> std::string{

    EntryData* entryData = EntryData::getInstance()->getInstance();;
    

    AdvertisementCampaignData* advertisementCampaignData = AdvertisementCampaignData::getInstance();;
    

    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append(this->sqlStrings->CREATE_TABLE);
    
stringBuffer->append(this->getTableName());
    
stringBuffer->append(this->sqlStrings->START);
    
stringBuffer->append(entryData->ID)->append(this->sqlTypeStrings->MAX_BIG_INT_UNSIGNED_NOT_NULL)->append(StoreFrontData::getInstance()->NAME)->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL)->append(advertisementCampaignData->NAME)->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL)->append(advertisementCampaignData->DESCRIPTION)->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL)->append(advertisementCampaignData->CONFIG)->append(this->sqlTypeStrings->BLOB_NOT_NULL)->append(TimeData::getInstance()->START)->append(this->sqlTypeStrings->MAX_BIG_INT_UNSIGNED_NOT_NULL)->append(TimeData::getInstance()->END)->append(this->sqlTypeStrings->MAX_BIG_INT_UNSIGNED_NOT_NULL)->append(entryData->TIMECREATED)->append(this->sqlTypeStrings->MAX_BIG_INT_UNSIGNED_NOT_NULL)->append(entryData->LASTMODIFIED)->append(this->sqlTypeStrings->MAX_BIG_INT_UNSIGNED_NOT_NULL)->append(this->sqlStrings->PRIMARY_KEY)->append(entryData->ID)->append(this->sqlStrings->END);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return JavaString::valueOf(stringBuffer);;
    
}


    auto AdvertisementCampaignInternalEntity::createTable() -> std::string{

    std::string returnStr = AbSqlBean::createTable(this->createTableStatement());;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return returnStr;
    
}


    auto AdvertisementCampaignInternalEntity::dropTable() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return AbSqlBean::dropTable();;
    
}


    auto AdvertisementCampaignInternalEntity::insert(BasicArrayList* values) -> void{
AbSqlBean::insert(values);
    
}




        #endif //ORG_ALLBINARY_DATA_TABLES_ADVERTISEMENT_CAMPAIGN_INTERNAL_ADVERTISEMENTCAMPAIGNINTERNALENTITY_CPP
