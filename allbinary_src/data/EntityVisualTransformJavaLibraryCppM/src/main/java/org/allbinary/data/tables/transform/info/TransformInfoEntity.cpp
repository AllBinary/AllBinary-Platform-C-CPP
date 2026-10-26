
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
        



            #include "java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <javax/servlet/jsp/PageContext.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFrontData.h>

      
#include <org/allbinary/business/entry/EntryData.h>

      
#include <org/allbinary/business/init/db/UserDbInitInfo.h>

      
#include <org/allbinary/data/tree/dom/document/DomDocumentHelper.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/communication/sql/AbSqlBean.h>

      
#include <org/allbinary/logic/control/crypt/Encoder.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>

      
#include <org/allbinary/logic/system/security/licensing/ServiceClientInformationInterfaceFactory.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoData.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoFactoryInterface.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>

      
#include <org/allbinary/logic/visual/transform/info/objectConfig/TransformInfoObjectConfigAndManipulatorFactoryBase.h>

      
#include <org/allbinary/logic/visual/transform/info/objectConfig/generator/TransformInfoObjectConfigGeneratorFactoryInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "TransformInfoEntityInterface.h"

class TransformInfoEntity: public AbSqlBean, public TransformInfoEntityInterface {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    protected: const std::string tableName = "transforminfo";

    private: const AbeClientInformationInterface abeClientInformation = ServiceClientInformationInterfaceFactory::getInstance();

    private: TransformInfoFactoryInterface transformInfoFactoryInterface;

    private: TransformInfoObjectConfigAndManipulatorFactoryBase transformInfoObjectConfigAndManipulatorFactoryInterface;

    private: TransformInfoObjectConfigGeneratorFactoryInterface transformInfoObjectConfigGeneratorFactoryInterface;

public: TransformInfoEntity(TransformInfoObjectConfigGeneratorFactoryInterface transformInfoObjectConfigGeneratorFactoryInterface, TransformInfoObjectConfigAndManipulatorFactoryBase transformInfoObjectConfigAndManipulatorFactoryInterface, TransformInfoFactoryInterface transformInfoFactoryInterface) : AbSqlBean(UserDbInitInfo()){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->setTableName(this->tableName);
    
this->transformInfoObjectConfigGeneratorFactoryInterface= transformInfoObjectConfigGeneratorFactoryInterface;
    
this->transformInfoObjectConfigAndManipulatorFactoryInterface= transformInfoObjectConfigAndManipulatorFactoryInterface;
    
this->transformInfoFactoryInterface= transformInfoFactoryInterface;
    
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


    public: void delete_(std::string value){

        try {
            super.deleteWhere(TransformInfoData::getInstance().NAME, value);
    

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
            
    public: TransformInfoInterface get(std::string name, HashMap<Object*, Object*> propertiesHashMap, PageContext pageContext){

    TransformInfoData transformInfoData = TransformInfoData::getInstance();;
    

    HashMap<Object*, Object*> keysAndValues = StdUtil::getInstance().createHashMap();;
    
keysAndValues.put(transformInfoData.NAME, name);
    

    HashMap<Object*, Object*> hashMap = super.getRow(keysAndValues);;
    

                        if(hashMap != 
                                    nullptr
                                )
                        
                                    {
                                    
    Object* anyType = hashMap.get(transformInfoData.OBJECTCONFIG);;
    

                        if(anyType != 
                                    nullptr
                                )
                        
                                    {
                                    
    std::string string = anyType;;
    
hashMap.put(transformInfoData.OBJECTCONFIG, decode.toCharArray());
    

                                    }
                                

    Object* objectData = hashMap.get(transformInfoData.DATA);;
    

                        if(objectData != 
                                    nullptr
                                )
                        
                                    {
                                    
    std::string string = objectData;;
    
hashMap.put(transformInfoData.DATA, decode.toCharArray());
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->transformInfoFactoryInterface.getInstance(hashMap, propertiesHashMap, pageContext);;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    

                        }
                            
}


                //@Throws(Exception.constructor)
            
    public: BasicArrayList getObjectConfigs(std::string storeName){

    BasicArrayList objectConfigVector = BasicArrayListD();;
    

    BasicArrayList objectConfigColumnVector = this->getColumnWhere(TransformInfoData::getInstance().OBJECTCONFIG, StoreFrontData::getInstance().NAME, storeName);;
    

    int32_t size = objectConfigColumnVector.size();;
    




                        for (
    int32_t i = 0;i < size; i++)
        {

    std::string objectConfigString = objectConfigColumnVector.get(i);;
    
objectConfigString= decode.toCharArray();
    
objectConfigVector.add(this->transformInfoObjectConfigAndManipulatorFactoryInterface.getInstance(this->abeClientInformation, this, DomDocumentHelper::create(objectConfigString)));
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return objectConfigVector;
    
}


                //@Throws(Exception.constructor)
            
    public: BasicArrayList getNames(std::string storeName){

    BasicArrayList viewNameVector = BasicArrayListD();;
    

    BasicArrayList columnVector = this->getColumnWhere(TransformInfoData::getInstance().NAME, StoreFrontData::getInstance().NAME, storeName);;
    

    int32_t size = columnVector.size();;
    




                        for (
    int32_t i = 0;i < size; i++)
        {

    std::string viewNameString = columnVector.get(i);;
    
viewNameVector.add(viewNameString);
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return viewNameVector;
    
}


    public: std::string createTableStatement(){

    TransformInfoData transformInfoData = TransformInfoData::getInstance();;
    

    StringMaker stringBuffer = StringMaker();;
    
stringBuffer.append(this->sqlStrings.CREATE_TABLE);
    
stringBuffer.append(this->tableName);
    
stringBuffer.append(this->sqlStrings.START);
    
stringBuffer.append(transformInfoData.NAME);
    
stringBuffer.append(this->sqlTypeStrings.MAX_CHAR_COLUMN_NOT_NULL);
    
stringBuffer.append(StoreFrontData::getInstance().NAME);
    
stringBuffer.append(this->sqlTypeStrings.MAX_CHAR_COLUMN_NOT_NULL);
    
stringBuffer.append(transformInfoData.OBJECTFILENAME);
    
stringBuffer.append(this->sqlTypeStrings.MAX_CHAR_COLUMN_NOT_NULL);
    
stringBuffer.append(transformInfoData.OBJECT);
    
stringBuffer.append(this->sqlTypeStrings.BLOB_NOT_NULL);
    
stringBuffer.append(transformInfoData.OBJECTCONFIGFILENAME);
    
stringBuffer.append(this->sqlTypeStrings.MAX_CHAR_COLUMN_NOT_NULL);
    
stringBuffer.append(transformInfoData.OBJECTCONFIG);
    
stringBuffer.append(this->sqlTypeStrings.BLOB_NOT_NULL);
    
stringBuffer.append(transformInfoData.TEMPLATEFILENAME);
    
stringBuffer.append(this->sqlTypeStrings.MAX_CHAR_COLUMN_NOT_NULL);
    
stringBuffer.append(transformInfoData.TEMPLATE);
    
stringBuffer.append(this->sqlTypeStrings.BLOB_NOT_NULL);
    
stringBuffer.append(transformInfoData.DATAFILENAME);
    
stringBuffer.append(this->sqlTypeStrings.MAX_CHAR_COLUMN_NOT_NULL);
    
stringBuffer.append(transformInfoData.DATA);
    
stringBuffer.append(this->sqlTypeStrings.BLOB_NOT_NULL);
    
stringBuffer.append(EntryData::getInstance().LASTMODIFIED);
    
stringBuffer.append(EntryData::getInstance().TIMECREATED);
    
stringBuffer.append(this->sqlTypeStrings.MAX_BIG_INT_UNSIGNED_NOT_NULL);
    
stringBuffer.append(this->sqlStrings.PRIMARY_KEY);
    
stringBuffer.append(transformInfoData.NAME);
    
stringBuffer.append(this->sqlStrings.END);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer.toString();;
    
}


    public: std::string createTable(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return super.createTable(this->createTableStatement());;
    
}


    public: void update(HashMap<Object*, Object*> updatedValues){
super.updateWhere(TransformInfoData::getInstance().NAME, updatedValues.get(TransformInfoData::getInstance().NAME), updatedValues);
    
}


    public: std::string dropTable(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return super.dropTable();;
    
}


};

            

