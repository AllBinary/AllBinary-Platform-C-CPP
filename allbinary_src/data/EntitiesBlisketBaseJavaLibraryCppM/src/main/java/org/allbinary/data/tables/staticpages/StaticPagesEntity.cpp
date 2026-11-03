
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
        



        #ifndef ORG_ALLBINARY_DATA_TABLES_STATICPAGES_STATICPAGESENTITY_CPP
        #define ORG_ALLBINARY_DATA_TABLES_STATICPAGES_STATICPAGESENTITY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/data/tables/staticpages/StaticPagesEntity.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFrontData.h>

      
#include <org/allbinary/business/init/db/StaticPagesDbInitInfo.h>

      
#include <org/allbinary/business/user/commerce/inventory/item/BasicItemData.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/communication/sql/AbSqlBean.h>

      
#include <org/allbinary/logic/control/search/SearchData.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonSeps.h>

      

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/data/tables/staticpages/StaticPagesEntityInterface.h"


StaticPagesEntity::StaticPagesEntity() : AbSqlBean(new StaticPagesDbInitInfo()), logUtil(LogUtil::getInstance()), basicItemData(BasicItemData::getInstance()){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->setTableName(this->TABLENAME);
    
}


    auto StaticPagesEntity::insert(BasicArrayList* values) -> void{

        try {
            AbSqlBean::insert(values);
    

                        if(LogConfigTypes::LOGGING::contains(LogConfigTypeFactory::getInstance()->SQLLOGGING))
                        
                                    {
                                    this->logUtil->putF(this->commonStrings->SUCCESS, this, INSERT);
    

                                    }
                                

                //: 
} catch(Exception& e) 
            {

                        if(LogConfigTypes::LOGGING::contains(LogConfigTypeFactory::getInstance()->SQLLOGGING))
                        
                                    {
                                    this->logUtil->put(this->commonStrings->FAILURE, this, INSERT, &e);
    

                                    }
                                
}

}


    auto StaticPagesEntity::getFile(std::string store, std::string keywords) -> std::string{

    HashMap<Object*, Object*>* whereHashMap = StdUtil::getInstance()->createHashMap();;
    
whereHashMap->put(StoreFrontData::getInstance()->NAME, store);
    
whereHashMap->put(basicItemData->KEYWORDS, keywords);
    

    std::string file = AbSqlBean::getField(whereHashMap, SearchData::PAGE);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return file;
    
}


    auto StaticPagesEntity::delete_(std::string keywords) -> void{
AbSqlBean::deleteWhere(basicItemData->KEYWORDS, keywords);
    
}


    auto StaticPagesEntity::dropTable() -> std::string{

    std::string returnStr = AbSqlBean::dropTable();;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return returnStr;
    
}


    auto StaticPagesEntity::update(HashMap<Object*, Object*>* updatedValues) -> void{
AbSqlBean::updateWhere(basicItemData->KEYWORDS, JavaBoxes::unbox<std::string>(updatedValues->get(basicItemData->KEYWORDS)), updatedValues);
    
}


    auto StaticPagesEntity::createTableStatement() -> std::string{

    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append(this->sqlStrings->CREATE_TABLE)->append(TABLENAME)->append(this->sqlStrings->START)->append(StoreFrontData::getInstance()->NAME)->append(this->sqlTypeStrings->SIXTY_CHAR_COLUMN_NOT_NULL)->append(basicItemData->KEYWORDS)->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL)->append(SearchData::PAGE)->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL)->append(this->sqlStrings->PRIMARY_KEY)->append(StoreFrontData::getInstance()->NAME)->append(CommonSeps::getInstance()->COMMA_SEP)->append(basicItemData->KEYWORDS)->append(this->sqlStrings->END);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return stringBuffer->toString();;
    
}


    auto StaticPagesEntity::createTable() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return AbSqlBean::createTable(this->createTableStatement());;
    
}




        #endif //ORG_ALLBINARY_DATA_TABLES_STATICPAGES_STATICPAGESENTITY_CPP
