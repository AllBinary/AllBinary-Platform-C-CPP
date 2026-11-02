
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
        



        #ifndef ORG_ALLBINARY_DATA_TABLES_USER_COMMERCE_INVENTORY_ITEM_OPTIONS_BASICOPTIONITEMSENTITY_CPP
        #define ORG_ALLBINARY_DATA_TABLES_USER_COMMERCE_INVENTORY_ITEM_OPTIONS_BASICOPTIONITEMSENTITY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/data/tables/user/commerce/inventory/item/options/BasicOptionItemsEntity.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/business/entry/EntryData.h>

      
#include <org/allbinary/business/init/db/InventoryDbInitInfo.h>

      
#include <org/allbinary/business/user/commerce/inventory/item/BasicItemData.h>

      
#include <org/allbinary/business/user/commerce/inventory/item/option/BasicOptionItemData.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/communication/sql/AbSqlBean.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/data/tables/user/commerce/inventory/item/options/BasicOptionItemsEntityInterface.h"


BasicOptionItemsEntity::BasicOptionItemsEntity() : AbSqlBean(new InventoryDbInitInfo()), logUtil(LogUtil::getInstance()), basicItemData(BasicItemData::getInstance()){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->setTableName(this->tableName);
    
}


    auto BasicOptionItemsEntity::insert(BasicArrayList* values) -> void{

        try {
            AbSqlBean::insert(values);
    

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->SQLLOGGING))
                        
                                    {
                                    this->logUtil->putF(this->commonStrings->SUCCESS, this, INSERT);
    

                                    }
                                

                //: 
} catch(Exception& e) 
            {

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->SQLLOGGING))
                        
                                    {
                                    this->logUtil->put(this->commonStrings->FAILURE, this, INSERT, &e);
    

                                    }
                                
}

}


    auto BasicOptionItemsEntity::delete_(std::string value) -> void{

        try {
            AbSqlBean::deleteWhere(basicItemData->ID, value);
    

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


    auto BasicOptionItemsEntity::createTableStatement() -> std::string{

    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append(this->sqlStrings->CREATE_TABLE)->append(tableName)->append(this->sqlStrings->START)->append(basicItemData->ID)->append(this->sqlTypeStrings->MAX_BIG_INT_UNSIGNED_NOT_NULL);
    
stringBuffer->append(BasicOptionItemData::OPTION_ONE_TITLE)->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL)->append(BasicOptionItemData::DEFAULT_OPTION_ITEM)->append(this->sqlTypeStrings->MAX_BIG_INT_UNSIGNED_NOT_NULL)->append(BasicOptionItemData::DEFAULT_OPTION_VALUE)->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL);
    
stringBuffer->append(BasicOptionItemData::OPTION_ONE_ONE_ITEM)->append(this->sqlTypeStrings->MAX_BIG_INT_UNSIGNED_NOT_NULL)->append(BasicOptionItemData::OPTION_ONE_ONE_VALUE)->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL)->append(BasicOptionItemData::OPTION_ONE_TWO_ITEM)->append(this->sqlTypeStrings->MAX_BIG_INT_UNSIGNED_NOT_NULL)->append(BasicOptionItemData::OPTION_ONE_TWO_VALUE)->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL)->append(BasicOptionItemData::OPTION_ONE_THREE_ITEM)->append(this->sqlTypeStrings->MAX_BIG_INT_UNSIGNED_NOT_NULL)->append(BasicOptionItemData::OPTION_ONE_THREE_VALUE)->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL)->append(BasicOptionItemData::OPTION_ONE_FOUR_ITEM)->append(this->sqlTypeStrings->MAX_BIG_INT_UNSIGNED_NOT_NULL)->append(BasicOptionItemData::OPTION_ONE_FOUR_VALUE)->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL)->append(BasicOptionItemData::OPTION_ONE_FIVE_ITEM)->append(this->sqlTypeStrings->MAX_BIG_INT_UNSIGNED_NOT_NULL)->append(BasicOptionItemData::OPTION_ONE_FIVE_VALUE)->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL)->append(BasicOptionItemData::OPTION_ONE_SIX_ITEM)->append(this->sqlTypeStrings->MAX_BIG_INT_UNSIGNED_NOT_NULL)->append(BasicOptionItemData::OPTION_ONE_SIX_VALUE)->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL)->append(BasicOptionItemData::OPTION_ONE_SEVEN_ITEM)->append(this->sqlTypeStrings->MAX_BIG_INT_UNSIGNED_NOT_NULL)->append(BasicOptionItemData::OPTION_ONE_SEVEN_VALUE)->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL)->append(BasicOptionItemData::OPTION_ONE_EIGHT_ITEM)->append(this->sqlTypeStrings->MAX_BIG_INT_UNSIGNED_NOT_NULL)->append(BasicOptionItemData::OPTION_ONE_EIGHT_VALUE)->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL)->append(BasicOptionItemData::OPTION_ONE_NINE_ITEM)->append(this->sqlTypeStrings->MAX_BIG_INT_UNSIGNED_NOT_NULL)->append(BasicOptionItemData::OPTION_ONE_NINE_VALUE)->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL)->append(EntryData::getInstance()->TIMECREATED)->append(this->sqlTypeStrings->MAX_BIG_INT_UNSIGNED_NOT_NULL)->append(EntryData::getInstance()->LASTMODIFIED)->append(this->sqlTypeStrings->MAX_BIG_INT_UNSIGNED_NOT_NULL)->append(this->sqlStrings->PRIMARY_KEY)->append(basicItemData->ID)->append(this->sqlStrings->END);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer->toString();;
    
}


    auto BasicOptionItemsEntity::createTable() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return AbSqlBean::createTable(this->createTableStatement());;
    
}


    auto BasicOptionItemsEntity::update(HashMap<Object*, Object*>* updatedValues) -> void{
AbSqlBean::updateWhere(basicItemData->ID, JavaBoxes::unbox<std::string>(updatedValues->get(basicItemData->ID)), updatedValues);
    
}


    auto BasicOptionItemsEntity::dropTable() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return AbSqlBean::dropTable();;
    
}




        #endif //ORG_ALLBINARY_DATA_TABLES_USER_COMMERCE_INVENTORY_ITEM_OPTIONS_BASICOPTIONITEMSENTITY_CPP
