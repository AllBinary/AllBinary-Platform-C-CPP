
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2011 AllBinary 
                *   
                *  By agreeing to this license you and any business entity you represent are 
                *  legally bound to the AllBinary Open License Version 1 legal agreement. 
                *  ` 
                *  You may obtain the AllBinary Open License Version 1 legal agreement from 
                *  AllBinary or the root directory of AllBinary's AllBinary Platform repository. 
                *   
                *  Created By: Travis Berthelot    
        */
        
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_DATA_TABLES_USER_COMMERCE_INVENTORY_ITEM_OPTIONS_XMLOPTIONITEMSENTITY_CPP
        #define ORG_ALLBINARY_DATA_TABLES_USER_COMMERCE_INVENTORY_ITEM_OPTIONS_XMLOPTIONITEMSENTITY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/data/tables/user/commerce/inventory/item/options/XmlOptionItemsEntity.h"
        

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

      
#include <org/allbinary/business/user/commerce/inventory/item/option/XmlOptionItemData.h>

      
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
        #include "org/allbinary/data/tables/user/commerce/inventory/item/options/XmlOptionItemsEntityInterface.h"


XmlOptionItemsEntity::XmlOptionItemsEntity() : AbSqlBean(new InventoryDbInitInfo()), logUtil(LogUtil::getInstance()), basicItemData(BasicItemData::getInstance()){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->setTableName(this->tableName);
    
}


    auto XmlOptionItemsEntity::insert(BasicArrayList* values) -> void{

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


    auto XmlOptionItemsEntity::delete_(std::string value) -> void{

        try {
            AbSqlBean::deleteWhere(basicItemData->ID, value);
    

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


    auto XmlOptionItemsEntity::createTableStatement() -> std::string{

    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append(this->sqlStrings->CREATE_TABLE)->append(tableName)->append(this->sqlStrings->START)->append(basicItemData->ID)->append(this->sqlTypeStrings->MAX_BIG_INT_UNSIGNED_NOT_NULL);
    
stringBuffer->append(XmlOptionItemData::XML_FILE_STATUS)->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL)->append(XmlOptionItemData::OPTION_XML_FILE)->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL)->append(EntryData::getInstance()->TIMECREATED)->append(this->sqlTypeStrings->MAX_BIG_INT_UNSIGNED_NOT_NULL)->append(EntryData::getInstance()->LASTMODIFIED)->append(this->sqlTypeStrings->MAX_BIG_INT_UNSIGNED_NOT_NULL)->append(this->sqlStrings->PRIMARY_KEY)->append(basicItemData->ID)->append(this->sqlStrings->END);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return JavaString::valueOf(stringBuffer);;
    
}


    auto XmlOptionItemsEntity::createTable() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return AbSqlBean::createTable(this->createTableStatement());;
    
}


    auto XmlOptionItemsEntity::update(HashMap<Object*, Object*>* updatedValues) -> void{
AbSqlBean::updateWhere(basicItemData->ID, JavaBoxes::unbox<std::string>(updatedValues->get(basicItemData->ID)), updatedValues);
    
}


    auto XmlOptionItemsEntity::dropTable() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return AbSqlBean::dropTable();;
    
}




        #endif //ORG_ALLBINARY_DATA_TABLES_USER_COMMERCE_INVENTORY_ITEM_OPTIONS_XMLOPTIONITEMSENTITY_CPP
