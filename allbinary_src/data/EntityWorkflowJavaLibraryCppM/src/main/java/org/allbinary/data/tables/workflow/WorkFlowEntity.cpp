
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
        



            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/business/DynamicObjectData.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFrontData.h>

      
#include <org/allbinary/business/entry/EntryData.h>

      
#include <org/allbinary/business/init/db/UserDbInitInfo.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/communication/sql/AbSqlBean.h>

      
#include <org/allbinary/logic/control/workflow/DbWorkFlowFactory.h>

      
#include <org/allbinary/logic/control/workflow/WorkFlowData.h>

      
#include <org/allbinary/logic/control/workflow/WorkFlowInterface.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>

      
#include <org/allbinary/logic/system/security/licensing/LicensingException.h>

      
#include <org/allbinary/logic/system/security/licensing/ServiceClientInformationInterfaceFactory.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/data/tables/workflow/WorkFlowEntityInterface.h"

class WorkFlowEntity: public AbSqlBean, public WorkFlowEntityInterface {

    protected: LogUtil* logUtil = LogUtil::getInstance();

    private: AbeClientInformationInterface* abeClientInformation = ServiceClientInformationInterfaceFactory::getInstance();

    protected: const std::string tableName = "workflows";

    private: const std::string METHOD_GET = "get()";

    private: const std::string METHOD_UPDATE = "update";

public: WorkFlowEntity() : AbSqlBean(new UserDbInitInfo()){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->setTableName(this->tableName);
    
}


    public: void insert(BasicArrayList* values){

        try {
            super.insert(values);
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()->SQLLOGGING))
                        
                                    {
                                    this->logUtil->putF(this->commonStrings.SUCCESS, this, INSERT);
    

                                    }
                                

                //: 
} catch(Exception& e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()->SQLLOGGING))
                        
                                    {
                                    this->logUtil->put(this->commonStrings.FAILURE, this, INSERT, &e);
    

                                    }
                                
}

}


    public: void delete_(std::string name, std::string storeName){

        try {
            
    HashMap<Object*, Object*>* keysAndValues = StdUtil::getInstance()->createHashMap();;
    
keysAndValues->put(WorkFlowData::getInstance()->NAME, name);
    
keysAndValues->put(StoreFrontData::getInstance()->NAME, storeName);
    
super.deleteWhere(keysAndValues);
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()->SQLLOGGING))
                        
                                    {
                                    this->logUtil->putF(this->commonStrings.SUCCESS, this, this->commonStrings.delete_);
    

                                    }
                                

                //: 
} catch(Exception& e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()->SQLLOGGING))
                        
                                    {
                                    this->logUtil->put(this->commonStrings.FAILURE, this, this->commonStrings.delete_, &e);
    

                                    }
                                
}

}


                //@Throws(Exception.constructor, LicensingException.constructor)
            
    public: WorkFlowInterface* get(std::string name, std::string storeName){

        try {
            
    HashMap<Object*, Object*>* keysAndValues = StdUtil::getInstance()->createHashMap();;
    
keysAndValues->put(WorkFlowData::getInstance()->NAME, name);
    
keysAndValues->put(StoreFrontData::getInstance()->NAME, storeName);
    

    HashMap<Object*, Object*>* hashMap = super.getRow(keysAndValues);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return dynamic_cast<WorkFlowInterface*>(DbWorkFlowFactory::getInstance()->getInstance(this->abeClientInformation, hashMap));
    

                //: 
} catch(LicensingException& e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()->SQLLOGGING))
                        
                                    {
                                    this->logUtil->put(this->commonStrings.FAILURE, this, METHOD_GET, &e);
    

                                    }
                                



                            throw e;
                    
}

                //: 
 catch(Exception& e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()->SQLLOGGING))
                        
                                    {
                                    this->logUtil->put(this->commonStrings.FAILURE, this, METHOD_GET, &e);
    

                                    }
                                



                            throw e;
                    
}

}


    public: BasicArrayList* get(std::string storeName){

        try {
            
    BasicArrayList* workFlowsVector = new BasicArrayListD();;
    

    HashMap<Object*, Object*>* keysAndValues = StdUtil::getInstance()->createHashMap();;
    
keysAndValues->put(StoreFrontData::getInstance()->NAME, storeName);
    

    BasicArrayList* hashMapVector = super.getRows(keysAndValues);;
    

    int32_t size = hashMapVector->size();;
    




                        for (
    int32_t i = 0;i < size; i++)
        {

    HashMap<Object*, Object*>* workFlowHashMap = dynamic_cast<HashMap*>(hashMapVector->get(i));;
    

                        if(workFlowHashMap != 
                                    nullptr
                                )
                        
                                    {
                                    workFlowsVector->add(DbWorkFlowFactory::getInstance()->getInstance(abeClientInformation, workFlowHashMap));
    

                                    }
                                
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return workFlowsVector;
    

                //: 
} catch(Exception& e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()->SQLLOGGING))
                        
                                    {
                                    this->logUtil->put(this->commonStrings.FAILURE, this, this->METHOD_GET, &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}

}


    public: void update(HashMap<Object*, Object*>* updatedValues){

        try {
            
    HashMap<Object*, Object*>* wherekeysAndValues = StdUtil::getInstance()->createHashMap();;
    
wherekeysAndValues->put(WorkFlowData::getInstance()->NAME, updatedValues->get(WorkFlowData::getInstance()->NAME));
    
wherekeysAndValues->put(StoreFrontData::getInstance()->NAME, updatedValues->get(StoreFrontData::getInstance()->NAME));
    
super.updateWhere(wherekeysAndValues, updatedValues);
    

                //: 
} catch(Exception& e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()->SQLLOGGING))
                        
                                    {
                                    this->logUtil->put(this->commonStrings.FAILURE, this, METHOD_UPDATE, &e);
    

                                    }
                                
}

}


    public: std::string createTableStatement(){

    WorkFlowData* workFlowData = WorkFlowData::getInstance();;
    

    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append(this->sqlStrings.CREATE_TABLE)->append(tableName)->append(this->sqlStrings.START)->append(workFlowData->NAME)->append(this->sqlTypeStrings.MAX_CHAR_COLUMN_NOT_NULL)->append(StoreFrontData::getInstance()->NAME)->append(this->sqlTypeStrings.MAX_CHAR_COLUMN_NOT_NULL)->append(DynamicObjectData::NAME)->append(this->sqlTypeStrings.MAX_CHAR_COLUMN_NOT_NULL)->append(workFlowData->DATA)->append(this->sqlTypeStrings.BLOB_NOT_NULL)->append(EntryData::getInstance()->TIMECREATED)->append(this->sqlTypeStrings.MAX_BIG_INT_UNSIGNED_NOT_NULL)->append(EntryData::getInstance()->LASTMODIFIED)->append(this->sqlTypeStrings.MAX_BIG_INT_UNSIGNED_NOT_NULL)->append(this->sqlStrings.PRIMARY_KEY)->append(workFlowData->NAME)->append(this->sqlStrings.END);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer->toString();;
    
}


    public: std::string createTable(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return super.createTable(this->createTableStatement());;
    
}


    public: std::string dropTable(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return super.dropTable();;
    
}


};

            

