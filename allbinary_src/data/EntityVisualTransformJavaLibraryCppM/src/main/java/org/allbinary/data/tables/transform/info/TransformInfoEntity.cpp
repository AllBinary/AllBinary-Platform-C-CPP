
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
        



        #ifndef ORG_ALLBINARY_DATA_TABLES_TRANSFORM_INFO_TRANSFORMINFOENTITY_CPP
        #define ORG_ALLBINARY_DATA_TABLES_TRANSFORM_INFO_TRANSFORMINFOENTITY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/data/tables/transform/info/TransformInfoEntity.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
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
        #include "org/allbinary/data/tables/transform/info/TransformInfoEntityInterface.h"


TransformInfoEntity::TransformInfoEntity(TransformInfoObjectConfigGeneratorFactoryInterface* transformInfoObjectConfigGeneratorFactoryInterface, TransformInfoObjectConfigAndManipulatorFactoryBase* transformInfoObjectConfigAndManipulatorFactoryInterface, TransformInfoFactoryInterface* transformInfoFactoryInterface) : AbSqlBean(new UserDbInitInfo()), logUtil(LogUtil::getInstance()), abeClientInformation(ServiceClientInformationInterfaceFactory::getInstance()){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->setTableName(this->tableName);
    
this->transformInfoObjectConfigGeneratorFactoryInterface= transformInfoObjectConfigGeneratorFactoryInterface;
    
this->transformInfoObjectConfigAndManipulatorFactoryInterface= transformInfoObjectConfigAndManipulatorFactoryInterface;
    
this->transformInfoFactoryInterface= transformInfoFactoryInterface;
    
}


    auto TransformInfoEntity::insert(BasicArrayList* values) -> void{

        try {
            AbSqlBean::insert(values);
    

                        if(allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->SQLLOGGING))
                        
                                    {
                                    this->logUtil->putF(this->commonStrings->SUCCESS, this, INSERT);
    

                                    }
                                

                //: 
} catch(Exception& e) 
            {

                        if(allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->SQLLOGGING))
                        
                                    {
                                    this->logUtil->put(this->commonStrings->FAILURE, this, INSERT, &e);
    

                                    }
                                
}

}


    auto TransformInfoEntity::delete_(std::string value) -> void{

        try {
            AbSqlBean::deleteWhere(TransformInfoData::getInstance()->NAME, value);
    

                        if(allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->SQLLOGGING))
                        
                                    {
                                    this->logUtil->putF(this->commonStrings->SUCCESS, this, this->commonStrings->delete_);
    

                                    }
                                

                //: 
} catch(Exception& e) 
            {

                        if(allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->SQLLOGGING))
                        
                                    {
                                    this->logUtil->put(this->commonStrings->FAILURE, this, this->commonStrings->delete_, &e);
    

                                    }
                                
}

}


                //@Throws(Exception.constructor)
            
    auto TransformInfoEntity::get(std::string name, HashMap<Object*, Object*>* propertiesHashMap, PageContext* pageContext) -> TransformInfoInterface*{

    TransformInfoData* transformInfoData = TransformInfoData::getInstance();;
    

    HashMap<Object*, Object*>* keysAndValues = StdUtil::getInstance()->createHashMap();;
    
keysAndValues->put(transformInfoData->NAME, name);
    

    HashMap<Object*, Object*>* hashMap = AbSqlBean::getRow(keysAndValues);;
    

                        if(hashMap != 
                                    nullptr
                                )
                        
                                    {
                                    
    Object* anyType = JavaBoxes::toObject(hashMap->get(transformInfoData->OBJECTCONFIG));;
    

                        if(anyType != 
                                    nullptr
                                )
                        
                                    {
                                    
    std::string string = JavaBoxes::unbox<std::string>(anyType);;
    
hashMap->put(transformInfoData->OBJECTCONFIG, decode.toCharArray());
    

                                    }
                                

    Object* objectData = JavaBoxes::toObject(hashMap->get(transformInfoData->DATA));;
    

                        if(objectData != 
                                    nullptr
                                )
                        
                                    {
                                    
    std::string string = JavaBoxes::unbox<std::string>(objectData);;
    
hashMap->put(transformInfoData->DATA, decode.toCharArray());
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->transformInfoFactoryInterface->getInstance(hashMap, propertiesHashMap, pageContext);;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return nullptr;
    

                        }
                            
}


                //@Throws(Exception.constructor)
            
    auto TransformInfoEntity::getObjectConfigs(std::string storeName) -> BasicArrayList*{

    BasicArrayList* objectConfigVector = new BasicArrayListD();;
    

    BasicArrayList* objectConfigColumnVector = this->getColumnWhere(TransformInfoData::getInstance()->OBJECTCONFIG, StoreFrontData::getInstance()->NAME, storeName);;
    

    int32_t size = objectConfigColumnVector->size();;
    




                        for (
    int32_t i = 0;i < size; i++)
        {

    std::string objectConfigString = JavaBoxes::unbox<std::string>(objectConfigColumnVector->get(i));;
    
objectConfigString= decode.toCharArray();
    
objectConfigVector->add(this->transformInfoObjectConfigAndManipulatorFactoryInterface->getInstance(this->abeClientInformation, dynamic_cast<TransformInfoInterface*>(this), DomDocumentHelper::create(objectConfigString)));
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return objectConfigVector;
    
}


                //@Throws(Exception.constructor)
            
    auto TransformInfoEntity::getNames(std::string storeName) -> BasicArrayList*{

    BasicArrayList* viewNameVector = new BasicArrayListD();;
    

    BasicArrayList* columnVector = this->getColumnWhere(TransformInfoData::getInstance()->NAME, StoreFrontData::getInstance()->NAME, storeName);;
    

    int32_t size = columnVector->size();;
    




                        for (
    int32_t i = 0;i < size; i++)
        {

    std::string viewNameString = JavaBoxes::unbox<std::string>(columnVector->get(i));;
    
viewNameVector->add(viewNameString);
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return viewNameVector;
    
}


    auto TransformInfoEntity::createTableStatement() -> std::string{

    TransformInfoData* transformInfoData = TransformInfoData::getInstance();;
    

    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append(this->sqlStrings->CREATE_TABLE);
    
stringBuffer->append(this->tableName);
    
stringBuffer->append(this->sqlStrings->START);
    
stringBuffer->append(transformInfoData->NAME);
    
stringBuffer->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL);
    
stringBuffer->append(StoreFrontData::getInstance()->NAME);
    
stringBuffer->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL);
    
stringBuffer->append(transformInfoData->OBJECTFILENAME);
    
stringBuffer->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL);
    
stringBuffer->append(transformInfoData->OBJECT);
    
stringBuffer->append(this->sqlTypeStrings->BLOB_NOT_NULL);
    
stringBuffer->append(transformInfoData->OBJECTCONFIGFILENAME);
    
stringBuffer->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL);
    
stringBuffer->append(transformInfoData->OBJECTCONFIG);
    
stringBuffer->append(this->sqlTypeStrings->BLOB_NOT_NULL);
    
stringBuffer->append(transformInfoData->TEMPLATEFILENAME);
    
stringBuffer->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL);
    
stringBuffer->append(transformInfoData->TEMPLATE);
    
stringBuffer->append(this->sqlTypeStrings->BLOB_NOT_NULL);
    
stringBuffer->append(transformInfoData->DATAFILENAME);
    
stringBuffer->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL);
    
stringBuffer->append(transformInfoData->DATA);
    
stringBuffer->append(this->sqlTypeStrings->BLOB_NOT_NULL);
    
stringBuffer->append(EntryData::getInstance()->LASTMODIFIED);
    
stringBuffer->append(EntryData::getInstance()->TIMECREATED);
    
stringBuffer->append(this->sqlTypeStrings->MAX_BIG_INT_UNSIGNED_NOT_NULL);
    
stringBuffer->append(this->sqlStrings->PRIMARY_KEY);
    
stringBuffer->append(transformInfoData->NAME);
    
stringBuffer->append(this->sqlStrings->END);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return stringBuffer->toString();;
    
}


    auto TransformInfoEntity::createTable() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return AbSqlBean::createTable(this->createTableStatement());;
    
}


    auto TransformInfoEntity::update(HashMap<Object*, Object*>* updatedValues) -> void{
AbSqlBean::updateWhere(TransformInfoData::getInstance()->NAME, JavaBoxes::unbox<std::string>(updatedValues->get(TransformInfoData::getInstance()->NAME)), updatedValues);
    
}


    auto TransformInfoEntity::dropTable() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return AbSqlBean::dropTable();;
    
}




        #endif //ORG_ALLBINARY_DATA_TABLES_TRANSFORM_INFO_TRANSFORMINFOENTITY_CPP
