
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
        



            #include "../../../../../java/lang/Exception.h"
        
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

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "StaticPagesEntityInterface.h"

class StaticPagesEntity: public AbSqlBean, public StaticPagesEntityInterface {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    protected: const BasicItemData basicItemData = BasicItemData::getInstance();

    private: const std::string TABLENAME = "staticpages";

public: StaticPagesEntity(){
            super(StaticPagesDbInitInfo());
                    

                            //For kotlin this is before the body of the constructor.
                    
this->setTableName(this->TABLENAME);
    
}


    public: void insert(BasicArrayList values){

        try {
            super.insert(values);
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().SQLLOGGING))
                        
                                    {
                                    this->logUtil.putF(this->commonStrings.SUCCESS, this, INSERT);
    

                                    }
                                

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().SQLLOGGING))
                        
                                    {
                                    this->logUtil.put(this->commonStrings.FAILURE, this, INSERT, e);
    

                                    }
                                
}

}


    public: std::string getFile(std::string store, std::string keywords){

    HashMap<any, any> whereHashMap = StdUtil::getInstance().createHashMap();;
    
whereHashMap.put(StoreFrontData::getInstance().NAME, store);
    
whereHashMap.put(basicItemData.KEYWORDS, keywords);
    

    std::string file = super.getField(whereHashMap, SearchData::PAGE);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return file;
    
}


    public: void delete_(std::string keywords){
super.deleteWhere(basicItemData.KEYWORDS, keywords);
    
}


    public: std::string dropTable(){

    std::string returnStr = super.dropTable();;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return returnStr;
    
}


    public: void update(HashMap<any, any> updatedValues){
super.updateWhere(basicItemData.KEYWORDS, updatedValues.get(basicItemData.KEYWORDS) as string, updatedValues);
    
}


    public: std::string createTableStatement(){

    StringMaker stringBuffer = StringMaker();;
    
stringBuffer.append(this->sqlStrings.CREATE_TABLE).append(TABLENAME).append(this->sqlStrings.START).append(StoreFrontData::getInstance().NAME).append(this->sqlTypeStrings.SIXTY_CHAR_COLUMN_NOT_NULL).append(basicItemData.KEYWORDS).append(this->sqlTypeStrings.MAX_CHAR_COLUMN_NOT_NULL).append(SearchData::PAGE).append(this->sqlTypeStrings.MAX_CHAR_COLUMN_NOT_NULL).append(this->sqlStrings.PRIMARY_KEY).append(StoreFrontData::getInstance().NAME).append(CommonSeps::getInstance().COMMA_SEP).append(basicItemData.KEYWORDS).append(this->sqlStrings.END);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer.toString();;
    
}


    public: std::string createTable(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return super.createTable(this->createTableStatement());;
    
}


};

            

