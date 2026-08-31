
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

      
#include <javax/servlet/jsp/PageContext.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFrontData.h>

      
#include <org/allbinary/business/entry/EntryData.h>

      
#include <org/allbinary/business/init/db/UserDbInitInfo.h>

      
#include <org/allbinary/data/tree/dom/document/DomDocumentHelper.h>

      
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

class TransformInfoEntity: public AbSqlBean: public TransformInfoEntityInterface {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    const tableName: string = "transforminfo";

    private: const abeClientInformation: AbeClientInformationInterface = ServiceClientInformationInterfaceFactory.getInstance()!;

    private: const transformInfoFactoryInterface: TransformInfoFactoryInterface;

    private: const transformInfoObjectConfigAndManipulatorFactoryInterface: TransformInfoObjectConfigAndManipulatorFactoryBase;

    private: const transformInfoObjectConfigGeneratorFactoryInterface: TransformInfoObjectConfigGeneratorFactoryInterface;

public constructor (TransformInfoObjectConfigGeneratorFactoryInterface transformInfoObjectConfigGeneratorFactoryInterface, TransformInfoObjectConfigAndManipulatorFactoryBase transformInfoObjectConfigAndManipulatorFactoryInterface, TransformInfoFactoryInterface transformInfoFactoryInterface){
            super(new UserDbInitInfo());
                    

                            //For kotlin this is before the body of the constructor.
                    
this.setTableName(this.tableName);
    
this.transformInfoObjectConfigGeneratorFactoryInterface= transformInfoObjectConfigGeneratorFactoryInterface;
    
this.transformInfoObjectConfigAndManipulatorFactoryInterface= transformInfoObjectConfigAndManipulatorFactoryInterface;
    
this.transformInfoFactoryInterface= transformInfoFactoryInterface;
    
}


    public insert(Vector values){

        try {
            super.insert(values);
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.SQLLOGGING))
                        
                                    {
                                    this.logUtil!.putF(this.commonStrings!.SUCCESS, this, INSERT);
    

                                    }
                                

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.SQLLOGGING))
                        
                                    {
                                    this.logUtil!.put(this.commonStrings!.FAILURE, this, INSERT, e);
    

                                    }
                                
}

}


    public delete(string value){

        try {
            super.deleteWhere(TransformInfoData.getInstance()!.NAME, value);
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.SQLLOGGING))
                        
                                    {
                                    this.logUtil!.putF(this.commonStrings!.SUCCESS, this, this.commonStrings!.delete);
    

                                    }
                                

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.SQLLOGGING))
                        
                                    {
                                    this.logUtil!.put(this.commonStrings!.FAILURE, this, this.commonStrings!.delete, e);
    

                                    }
                                
}

}


                //@Throws(Exception.constructor)
            
    public TransformInfoInterface get(string name, HashMap<any, any> propertiesHashMap, PageContext pageContext){

    transformInfoData: TransformInfoData = TransformInfoData.getInstance()!;;
    

    keysAndValues: HashMap<any, any> = new HashMap<any, any>();;
    
keysAndValues!.put(transformInfoData!.NAME, name);
    

    hashMap: HashMap<any, any> = super.getRow(keysAndValues)!;;
    

                        if(hashMap != 
                                    null
                                )
                        
                                    {
                                    
    anyType: any = hashMap!.get(transformInfoData!.OBJECTCONFIG)!;;
    

                        if(anyType != 
                                    null
                                )
                        
                                    {
                                    
    string: string = anyType as string;;
    
hashMap!.put(transformInfoData!.OBJECTCONFIG, decode.toCharArray());
    

                                    }
                                

    objectData: any = hashMap!.get(transformInfoData!.DATA)!;;
    

                        if(objectData != 
                                    null
                                )
                        
                                    {
                                    
    string: string = objectData as string;;
    
hashMap!.put(transformInfoData!.DATA, decode.toCharArray());
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.transformInfoFactoryInterface!.getInstance(hashMap, propertiesHashMap, pageContext);;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    

                        }
                            
}


                //@Throws(Exception.constructor)
            
    public Vector getObjectConfigs(string storeName){

    objectConfigVector: Vector = new Vector();;
    

    objectConfigColumnVector: Vector = this.getColumnWhere(TransformInfoData.getInstance()!.OBJECTCONFIG, StoreFrontData.getInstance()!.NAME, storeName)!;;
    

    size: int32_t = objectConfigColumnVector!.length!;;
    




                        for (
    i: int32_t = 0;i < size; i++)
        {

    objectConfigString: string = objectConfigColumnVector!.get(i) as string;;
    
objectConfigString= decode.toCharArray();
    
objectConfigVector!.add(this.transformInfoObjectConfigAndManipulatorFactoryInterface!.getInstance(this.abeClientInformation, this as TransformInfoInterface, DomDocumentHelper.create(objectConfigString)));
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return objectConfigVector;
    
}


                //@Throws(Exception.constructor)
            
    public Vector getNames(string storeName){

    viewNameVector: Vector = new Vector();;
    

    columnVector: Vector = this.getColumnWhere(TransformInfoData.getInstance()!.NAME, StoreFrontData.getInstance()!.NAME, storeName)!;;
    

    size: int32_t = columnVector!.length!;;
    




                        for (
    i: int32_t = 0;i < size; i++)
        {

    viewNameString: string = columnVector!.get(i) as string;;
    
viewNameVector!.add(viewNameString);
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return viewNameVector;
    
}


    public string createTableStatement(){

    transformInfoData: TransformInfoData = TransformInfoData.getInstance()!;;
    

    stringBuffer: StringMaker = new StringMaker();;
    
stringBuffer!.append(this.sqlStrings!.CREATE_TABLE);
    
stringBuffer!.append(this.tableName);
    
stringBuffer!.append(this.sqlStrings!.START);
    
stringBuffer!.append(transformInfoData!.NAME);
    
stringBuffer!.append(this.sqlTypeStrings!.MAX_CHAR_COLUMN_NOT_NULL);
    
stringBuffer!.append(StoreFrontData.getInstance()!.NAME);
    
stringBuffer!.append(this.sqlTypeStrings!.MAX_CHAR_COLUMN_NOT_NULL);
    
stringBuffer!.append(transformInfoData!.OBJECTFILENAME);
    
stringBuffer!.append(this.sqlTypeStrings!.MAX_CHAR_COLUMN_NOT_NULL);
    
stringBuffer!.append(transformInfoData!.OBJECT);
    
stringBuffer!.append(this.sqlTypeStrings!.BLOB_NOT_NULL);
    
stringBuffer!.append(transformInfoData!.OBJECTCONFIGFILENAME);
    
stringBuffer!.append(this.sqlTypeStrings!.MAX_CHAR_COLUMN_NOT_NULL);
    
stringBuffer!.append(transformInfoData!.OBJECTCONFIG);
    
stringBuffer!.append(this.sqlTypeStrings!.BLOB_NOT_NULL);
    
stringBuffer!.append(transformInfoData!.TEMPLATEFILENAME);
    
stringBuffer!.append(this.sqlTypeStrings!.MAX_CHAR_COLUMN_NOT_NULL);
    
stringBuffer!.append(transformInfoData!.TEMPLATE);
    
stringBuffer!.append(this.sqlTypeStrings!.BLOB_NOT_NULL);
    
stringBuffer!.append(transformInfoData!.DATAFILENAME);
    
stringBuffer!.append(this.sqlTypeStrings!.MAX_CHAR_COLUMN_NOT_NULL);
    
stringBuffer!.append(transformInfoData!.DATA);
    
stringBuffer!.append(this.sqlTypeStrings!.BLOB_NOT_NULL);
    
stringBuffer!.append(EntryData.getInstance()!.LASTMODIFIED);
    
stringBuffer!.append(EntryData.getInstance()!.TIMECREATED);
    
stringBuffer!.append(this.sqlTypeStrings!.MAX_BIG_INT_UNSIGNED_NOT_NULL);
    
stringBuffer!.append(this.sqlStrings!.PRIMARY_KEY);
    
stringBuffer!.append(transformInfoData!.NAME);
    
stringBuffer!.append(this.sqlStrings!.END);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer!.toString();;
    
}


    public string createTable(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return super.createTable(this.createTableStatement());;
    
}


    public update(HashMap<any, any> updatedValues){
super.updateWhere(TransformInfoData.getInstance()!.NAME, updatedValues!.get(TransformInfoData.getInstance()!.NAME) as string, updatedValues);
    
}


    public string dropTable(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return super.dropTable();;
    
}


};

            

