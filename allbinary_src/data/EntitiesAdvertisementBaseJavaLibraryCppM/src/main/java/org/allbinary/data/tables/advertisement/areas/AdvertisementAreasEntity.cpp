
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
        



            #include "../../../../../../java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <java/util/Vector.h>

      
#include <org/allbinary/business/advertisement/area/AdvertisementArea.h>

      
#include <org/allbinary/business/advertisement/area/AdvertisementAreaData.h>

      
#include <org/allbinary/business/advertisement/area/AdvertisementAreaInterface.h>

      
#include <org/allbinary/business/advertisement/campaign/AdvertisementCampaignData.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFrontData.h>

      
#include <org/allbinary/business/entry/EntryData.h>

      
#include <org/allbinary/business/init/db/UserDbInitInfo.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/communication/sql/AbSqlBean.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "AdvertisementAreasEntityInterface.h"

class AdvertisementAreasEntity: public AbSqlBean, public AdvertisementAreasEntityInterface {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    protected: const std::string tableName = "advertisements";

public: AdvertisementAreasEntity(){
            super(UserDbInitInfo());
                    

                            //For kotlin this is before the body of the constructor.
                    
this->setTableName(this->tableName);
    
}


    public: void delete_(std::string value){

        try {
            super.deleteWhere(EntryData::getInstance().ID, value);
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().SQLLOGGING))
                        
                                    {
                                    this->logUtil.putF(this->commonStrings.SUCCESS, this, this->commonStrings.delete_);
    

                                    }
                                

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().SQLLOGGING))
                        
                                    {
                                    this->logUtil.put(this->commonStrings.FAILURE, this, this->commonStrings.delete_, e);
    

                                    }
                                
}

}


                //@Throws(Exception.constructor)
            
    public: Vector get(std::string storeName){

    HashMap<any, any> keysAndValues = HashMap<any, any>();;
    
keysAndValues.put(StoreFrontData::getInstance().NAME, storeName);
    

    Vector hashMapVector = super.getRows(keysAndValues);;
    

    Vector vector = Vector();;
    

    int32_t size = hashMapVector.length;;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    HashMap<any, any> hashMap = hashMapVector.get(index) as HashMap<any, any>;;
    

                        if(hashMap != 
                                    nullptr
                                )
                        
                                    {
                                    vector.add(AdvertisementArea(hashMap) as AdvertisementAreaInterface);
    

                                    }
                                
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return vector;
    
}


                //@Throws(Exception.constructor)
            
    public: AdvertisementAreaInterface get(std::string storeName, std::string advertisementAreaName){

    HashMap<any, any> keysAndValues = HashMap<any, any>();;
    
keysAndValues.put(StoreFrontData::getInstance().NAME, storeName);
    
keysAndValues.put(AdvertisementAreaData::getInstance().NAME, advertisementAreaName);
    

    HashMap<any, any> hashMap = super.getRow(keysAndValues);;
    

                        if(hashMap != 
                                    nullptr
                                )
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return AdvertisementArea(hashMap) as AdvertisementAreaInterface;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    

                        }
                            
}


    public: std::string createTableStatement(){

    AdvertisementAreaData advertisementAreaData = AdvertisementAreaData::getInstance();;
    

    StringMaker stringBuffer = StringMaker();;
    
stringBuffer.append(this->sqlStrings.CREATE_TABLE);
    
stringBuffer.append(this->getTableName());
    
stringBuffer.append(this->sqlStrings.START);
    
stringBuffer.append(advertisementAreaData.NAME).append(this->sqlTypeStrings.MAX_CHAR_COLUMN_NOT_NULL).append(StoreFrontData::getInstance().NAME).append(this->sqlTypeStrings.MAX_CHAR_COLUMN_NOT_NULL).append(advertisementAreaData.DESCRIPTION).append(this->sqlTypeStrings.MAX_CHAR_COLUMN_NOT_NULL).append(advertisementAreaData.CONSTRAINTS).append(this->sqlTypeStrings.BLOB_NOT_NULL).append(AdvertisementCampaignData::getInstance().NAME).append(this->sqlTypeStrings.MAX_CHAR_COLUMN_NOT_NULL).append(EntryData::getInstance().TIMECREATED).append(this->sqlTypeStrings.MAX_BIG_INT_UNSIGNED_NOT_NULL).append(EntryData::getInstance().LASTMODIFIED).append(this->sqlTypeStrings.MAX_BIG_INT_UNSIGNED_NOT_NULL).append(this->sqlStrings.PRIMARY_KEY).append(advertisementAreaData.NAME).append(this->sqlStrings.END);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer.toString();;
    
}


    public: std::string createTable(){

    std::string returnStr = super.createTable(this->createTableStatement());;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return returnStr;
    
}


    public: void update(HashMap<any, any> updatedValues){
super.updateWhere(AdvertisementAreaData::getInstance().NAME, updatedValues.get(AdvertisementAreaData::getInstance().NAME) as string, updatedValues);
    
}


    public: std::string dropTable(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return super.dropTable();;
    
}


};

            

