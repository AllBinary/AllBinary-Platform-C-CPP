
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
        



            #include "../../../../../../java/lang/Object.h"
        
            #include "../../../../../../java/lang/Exception.h"
        
            #include "../../../../../../java/lang/Long.h"
        
#include <java/util/Calendar.h>

      
#include <java/util/HashMap.h>

      
#include <java/util/Vector.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFrontData.h>

      
#include <org/allbinary/business/entry/EntryData.h>

      
#include <org/allbinary/data/tree/dom/document/DomDocumentHelper.h>

      
#include <org/allbinary/globals/FREEBLISKET_PATH_GLOBALS.h>

      
#include <org/allbinary/globals/URLGLOBALS.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/control/crypt/Encoder.h>

      
#include <org/allbinary/logic/control/crypt/file/CryptFileReader.h>

      
#include <org/allbinary/logic/io/OutputTypeData.h>

      
#include <org/allbinary/logic/io/path/AbFilePath.h>

      
#include <org/allbinary/logic/io/path/AbPath.h>

      
#include <org/allbinary/logic/io/path/AbPathData.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/string/StringValidationUtil.h>

      
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>

      
#include <org/allbinary/logic/system/security/licensing/ServiceClientInformationInterfaceFactory.h>

      
#include <org/allbinary/logic/visual/transform/info/data/TransformInfoDataData.h>

      
#include <org/allbinary/logic/visual/transform/info/objectConfig/TransformInfoObjectConfig.h>

      
#include <org/allbinary/logic/visual/transform/info/objectConfig/TransformInfoObjectConfigAndManipulatorFactory.h>

      
#include <org/allbinary/logic/visual/transform/info/objectConfig/TransformInfoObjectConfigInterface.h>

      
#include <org/allbinary/logic/visual/transform/info/template/TransformInfoTemplateData.h>

      
#include <org/allbinary/logic/visual/transform/info/viewObject/TransformInfoObjectData.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/w3c/dom/Document.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "TransformInfoInterface.h"
#include "TransformInfoData.h"

class TransformInfo
            : public Object
        : public TransformInfoInterface {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    const commonStrings: CommonStrings = CommonStrings.getInstance()!;

    private: const abeClientInformation: AbeClientInformationInterface = ServiceClientInformationInterfaceFactory.getInstance()!;

    private: isChild: bool = false;

    private: name: string;

    private: storeName: string;

    private: objectFileName: string;

    private: anyType: any;

    private: objectConfigFileName: string;

    private: objectConfigInterface: TransformInfoObjectConfigInterface;

    private: template: string;

    private: templateFileName: string;

    private: dataFileName: string;

    private: data: string = StringUtil.getInstance()!.EMPTY_STRING;

public constructor (){

            super();
        }


public constructor (string name){

            super();
        this.setName(name);
    
}


public constructor (string name, string objectFileName, string objectConfigFileName, string templateFileName, string dataFileName){

            super();
        this.setName(name);
    
this.setObjectFile(objectFileName);
    
this.setObjectConfigFile(objectConfigFileName);
    
this.setTemplateFile(templateFileName);
    
this.setDataFile(dataFileName);
    
}


                //@Throws(Exception.constructor)
            
    public override(HashMap<any, any> hashMap){

    transformInfoData: TransformInfoData = TransformInfoData.getInstance()!;;
    

    stringValidationUtil: StringValidationUtil = StringValidationUtil.getInstance()!;;
    

    aName: string = hashMap!.get(transformInfoData!.NAME) as string;;
    

                        if(!stringValidationUtil!.isEmpty(aName))
                        
                                    {
                                    this.name= aName;
    

                                    }
                                

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.VIEW))
                        
                                    {
                                    
    stringBuffer: StringMaker = new StringMaker();;
    
stringBuffer!.append("TransformInfo properties overridden for: ");
    
stringBuffer!.append(this.getName());
    
stringBuffer!.append("\n properties: ");
    
stringBuffer!.append(hashMap!.toString());
    
this.logUtil!.putF(stringBuffer!.toString(), this, "override(HashMap hashMap)");
    

                                    }
                                

    aStoreName: string = hashMap!.get(StoreFrontData.getInstance()!.NAME) as string;;
    

                        if(!stringValidationUtil!.isEmpty(aStoreName))
                        
                                    {
                                    this.storeName= aStoreName;
    

                                    }
                                

    aObjectFileName: string = hashMap!.get(transformInfoData!.OBJECTFILENAME) as string;;
    

                        if(!stringValidationUtil!.isEmpty(aObjectFileName))
                        
                                    {
                                    this.objectFileName= aObjectFileName;
    

                                    }
                                

    stringBuffer: StringMaker = new StringMaker();;
    
stringBuffer!.append(URLGLOBALS.getMainPath());
    
stringBuffer!.append(FREEBLISKET_PATH_GLOBALS.getInstance()!.XSLPATH);
    
stringBuffer!.append(this.storeName);
    
stringBuffer!.append(AbPathData.getInstance()!.SEPARATOR);
    

    fileAbPath: AbPath = new AbPath(stringBuffer!.toString(), StringUtil.getInstance()!.EMPTY_STRING);;
    

    aObject: string = hashMap!.get(transformInfoData!.OBJECT) as string;;
    

                        if(!stringValidationUtil!.isEmpty(aObject))
                        
                                    {
                                    
                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.VIEW))
                        
                                    {
                                    this.logUtil!.putF("TransformInfo override view Object for: " +this.getName(), this, "override(HashMap hashMap)");
    

                                    }
                                

    fileDataString: string = new CryptFileReader(TransformInfoObjectData.getInstance()!.UNCRYPTED_EXTENSION, TransformInfoObjectData.getInstance()!.ENCRYPTED_EXTENSION).get(new AbPath(fileAbPath!.toString(), aObject))!;;
    

                        if(fileDataString != 
                                    null
                                )
                        
                                    {
                                    this.anyType= fileDataString;
    

                                    }
                                

                                    }
                                

                        if(!stringValidationUtil!.isEmpty(hashMap!.get(transformInfoData!.OBJECTCONFIG) as string))
                        
                                    {
                                    
                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.VIEW))
                        
                                    {
                                    this.logUtil!.putF("TransformInfo override ObjectConfig for: " +this.getName(), this, "override(HashMap hashMap)");
    

                                    }
                                
this.setObjectConfig(hashMap!.get(transformInfoData!.OBJECTCONFIG) as string);
    

                                    }
                                

    objectConfigFileName: string = hashMap!.get(transformInfoData!.OBJECTCONFIGFILENAME) as string;;
    

                        if(!stringValidationUtil!.isEmpty(objectConfigFileName))
                        
                                    {
                                    
                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.VIEW))
                        
                                    {
                                    this.logUtil!.putF("TransformInfo override ObjectConfig File for: " +this.getName(), this, "override(HashMap hashMap)");
    

                                    }
                                
this.setObjectConfigFile(objectConfigFileName);
    

                                    }
                                

    type: string = hashMap!.get(OutputTypeData.getInstance()!.NAME) as string;;
    

                        if(!stringValidationUtil!.isEmpty(type))
                        
                                    {
                                    
                        if(this.getObjectConfigInterface() == 
                                    null
                                )
                        
                                    {
                                    this.setObjectConfigInterface(new TransformInfoObjectConfig(this));
    

                                    }
                                
this.getObjectConfigInterface()!.setOutputTypeName(type);
    

                                    }
                                

    aTemplateFileName: string = hashMap!.get(transformInfoData!.TEMPLATEFILENAME) as string;;
    

                        if(!stringValidationUtil!.isEmpty(aTemplateFileName))
                        
                                    {
                                    this.templateFileName= aTemplateFileName;
    

                                    }
                                

    aTemplate: string = hashMap!.get(transformInfoData!.TEMPLATE) as string;;
    

                        if(!stringValidationUtil!.isEmpty(aTemplate))
                        
                                    {
                                    
                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.VIEW))
                        
                                    {
                                    this.logUtil!.putF("TransformInfo override Template for: " +this.getName(), this, "override(HashMap hashMap)");
    

                                    }
                                

    fileDataString: string = new CryptFileReader(TransformInfoTemplateData.getInstance()!.UNCRYPTED_EXTENSION, TransformInfoTemplateData.getInstance()!.ENCRYPTED_EXTENSION).get(new AbPath(fileAbPath!.toString(), aTemplate))!;;
    

                        if(!stringValidationUtil!.isEmpty(fileDataString))
                        
                                    {
                                    this.template= fileDataString;
    

                                    }
                                

                                    }
                                

    aDataFileName: string = hashMap!.get(transformInfoData!.DATAFILENAME) as string;;
    

                        if(!stringValidationUtil!.isEmpty(aDataFileName))
                        
                                    {
                                    this.dataFileName= aDataFileName;
    

                                    }
                                

    aData: string = hashMap!.get(transformInfoData!.DATA) as string;;
    

                        if(!stringValidationUtil!.isEmpty(aData))
                        
                                    {
                                    
                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.VIEW))
                        
                                    {
                                    this.logUtil!.putF("TransformInfo override Data for: " +this.getName(), this, "override(HashMap hashMap)");
    

                                    }
                                

    fileDataString: string = new CryptFileReader(TransformInfoDataData.getInstance()!.UNCRYPTED_EXTENSION, TransformInfoDataData.getInstance()!.ENCRYPTED_EXTENSION).get(new AbPath(fileAbPath!.toString(), aData))!;;
    

                        if(!stringValidationUtil!.isEmpty(fileDataString))
                        
                                    {
                                    this.data= fileDataString;
    

                                    }
                                

                                    }
                                

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.VIEW))
                        
                                    {
                                    stringBuffer= new StringMaker();
    
stringBuffer!.append("Name: ");
    
stringBuffer!.append(aName);
    
stringBuffer!.append("\nTemp Object File: ");
    
stringBuffer!.append(aObject);
    
stringBuffer!.append("\nTemp Object Config File: ");
    
stringBuffer!.append(this.getObjectConfigFilePath()!.toString());
    
stringBuffer!.append("\nTemp Template File: ");
    
stringBuffer!.append(aTemplate);
    
stringBuffer!.append("\nTemp Data File: ");
    
stringBuffer!.append(aData);
    
stringBuffer!.append("\nStore Name: ");
    
stringBuffer!.append(aStoreName);
    
stringBuffer!.append("\nObjectFile: ");
    
stringBuffer!.append(this.getObjectFile());
    
stringBuffer!.append("->TransformInfo");
    
this.logUtil!.putF(stringBuffer!.toString(), this, "TransformInfoInterface(HashMap)");
    

                                    }
                                

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.TAGHELPERFACTORY))
                        
                                    {
                                    this.logUtil!.putF(this.log(), this, "override");
    

                                    }
                                
}


    public string log(){

    stringBuffer: StringMaker = new StringMaker();;
    
stringBuffer!.append("Name: ");
    
stringBuffer!.append(this.name);
    
stringBuffer!.append("\nObject File: ");
    
stringBuffer!.append(this.objectFileName);
    
stringBuffer!.append("\nObject Config File Path: ");
    
stringBuffer!.append(this.getObjectConfigFile());
    
stringBuffer!.append("\nTemplate File: ");
    
stringBuffer!.append(this.templateFileName);
    
stringBuffer!.append("\nData File: ");
    
stringBuffer!.append(this.dataFileName);
    
stringBuffer!.append("\nStore Name: ");
    
stringBuffer!.append(this.storeName);
    
stringBuffer!.append(CommonSeps.getInstance()!.NEW_LINE);
    
stringBuffer!.append(this.getObjectFile());
    
stringBuffer!.append("->TransformInfo");
    
stringBuffer!.append("TransformInfoInterface(HashMap)");
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer!.toString();;
    
}


    public setName(string value){
this.name= value;
    
}


    public setStoreName(string value){
this.storeName= value;
    
}


    public string getStoreName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.storeName;
    
}


    public setObject(Object anyType){
this.anyType= anyType;
    
}


    public setObjectFile(string value){
this.objectFileName= value;
    
}


    public setTemplate(string value){
this.template= value;
    
}


    public setTemplateFile(string value){
this.templateFileName= value;
    
}


                //@Throws(Exception.constructor)
            
    setObjectConfigFileName(string value){
this.objectConfigFileName= value;
    
}


                //@Throws(Exception.constructor)
            
    setObjectConfigFile(string value){
this.objectConfigFileName= value;
    
this.setObjectConfigInterface(TransformInfoObjectConfigAndManipulatorFactory.getInstance()!.getInstance(this.abeClientInformation, this, this.getObjectConfigFilePath()));
    
}


                //@Throws(Exception.constructor)
            
    setObjectConfig(string value){

    document: Document = DomDocumentHelper.create(value)!;;
    
this.setObjectConfigInterface(TransformInfoObjectConfigAndManipulatorFactory.getInstance()!.getInstance(this.abeClientInformation, this, document));
    
}


    public setDataFile(string value){
this.dataFileName= value;
    
}


    public setData(string value){
this.data= value;
    
}


    public string getName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.name;
    
}


    public any getObject(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.anyType;
    
}


    public string getObjectFile(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.objectFileName;
    
}


    public string getTemplate(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.template;
    
}


    public string getTemplateFile(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.templateFileName;
    
}


                //@Throws(Exception.constructor)
            
    public AbPath getTemplateFilePath(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new AbFilePath(this.getTemplateFile());
    
}


                //@Throws(Exception.constructor)
            
    public AbPath getObjectConfigFilePath(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new AbFilePath(this.getObjectConfigFile());
    
}


                //@Throws(Exception.constructor)
            
    public AbPath getDataFilePath(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new AbFilePath(this.getDataFile());
    
}


    public string getObjectConfigFile(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.objectConfigFileName;
    
}


    string getData(){

    stringValidationUtil: StringValidationUtil = StringValidationUtil.getInstance()!;;
    

    dataFileString: string = this.getDataFile()!;;
    

                        if(!stringValidationUtil!.isEmpty(dataFileString))
                        
                                    {
                                    
        try {
            
    fileData: string = new CryptFileReader(TransformInfoDataData.getInstance()!.UNCRYPTED_EXTENSION, TransformInfoDataData.getInstance()!.ENCRYPTED_EXTENSION).get(this.getDataFilePath())!;;
    

                        if(!stringValidationUtil!.isEmpty(this.data))
                        
                                    {
                                    
                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.VIEW))
                        
                                    {
                                    this.logUtil!.putF("Data File overriding existing data: " +this.getDataFilePath(), this, "getData()");
    

                                    }
                                

                                    }
                                
this.data= fileData;
    

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.VIEWERROR))
                        
                                    {
                                    this.logUtil!.put("Could Not Load Data from: " +this.getDataFile(), this, "getData()", e);
    

                                    }
                                
}


                                    }
                                

        try {
            
                        if(!stringValidationUtil!.isEmpty(this.data))
                        
                                    {
                                    
                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.VIEWERROR))
                        
                                    {
                                    this.logUtil!.putF("Data: " +DomDocumentHelper.toString(DomDocumentHelper.create(data)), this, "getData()");
    

                                    }
                                

                                    }
                                
                        else {
                            
                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.VIEWERROR))
                        
                                    {
                                    
    stringBuffer: StringMaker = new StringMaker();;
    
stringBuffer!.append("Name: ");
    
stringBuffer!.append(this.name);
    
stringBuffer!.append("\nEmpty Data For: ");
    
stringBuffer!.append(dataFileString);
    
stringBuffer!.append("\nPath: ");
    
stringBuffer!.append(this.getDataFilePath()!.toFileSystemString());
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.VIEWERROR))
                        
                                    {
                                    this.logUtil!.putF(stringBuffer!.toString(), this, "getData()");
    

                                    }
                                

                                    }
                                

                        }
                            

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.VIEWERROR))
                        
                                    {
                                    this.logUtil!.put("Could Not Preview Data: " +this.data, this, "getData()", e);
    

                                    }
                                
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.data;
    
}


                //@Throws(Exception.constructor)
            
    public Document getDataDocument(){

    localData: string = this.getData()!;;
    

    stringValidationUtil: StringValidationUtil = StringValidationUtil.getInstance()!;;
    

                        if(stringValidationUtil!.isEmpty(localData))
                        
                                    {
                                    
                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.VIEWERROR))
                        
                                    {
                                    this.logUtil!.putF("No Data So Creating New Document", this, "getDataDocument()");
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return DomDocumentHelper.create();;
    

                                    }
                                
                        else {
                            
    document: Document = DomDocumentHelper.create(localData)!;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return document;
    

                        }
                            
}


    public string getDataFile(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.dataFileName;
    
}


    public HashMap<any, any> toHashMap(){

    transformInfoData: TransformInfoData = TransformInfoData.getInstance()!;;
    

    hashMap: HashMap<any, any> = new HashMap<any, any>();;
    
hashMap!.put(transformInfoData!.NAME, this.name);
    
hashMap!.put(StoreFrontData.getInstance()!.NAME, this.storeName);
    
hashMap!.put(transformInfoData!.OBJECTFILENAME, this.objectFileName);
    
hashMap!.put(transformInfoData!.OBJECT, this.anyType);
    
hashMap!.put(transformInfoData!.OBJECTCONFIGFILENAME, this.getObjectConfigFile());
    
hashMap!.put(transformInfoData!.OBJECTCONFIG, Encoder.encode(this.getObjectConfigInterface()!.toString()!.getBytes()));
    
hashMap!.put(transformInfoData!.TEMPLATEFILENAME, this.templateFileName);
    
hashMap!.put(transformInfoData!.TEMPLATE, this.template);
    
hashMap!.put(transformInfoData!.DATAFILENAME, this.dataFileName);
    
hashMap!.put(transformInfoData!.DATA, Encoder.encode(this.data.getBytes()));
    

    calendar: Calendar = Calendar.getInstance()!;;
    

    time: string = new Long(calendar.getTimeInMillis()).toString();;
    
hashMap!.put(EntryData.getInstance()!.LASTMODIFIED, time);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return hashMap;
    
}


    public java.util.Vector toVector(){

    vector: Vector = new Vector();;
    
vector.add(this.name);
    
vector.add(this.storeName);
    
vector.add(this.objectFileName);
    
vector.add(this.anyType);
    
vector.add(this.getObjectConfigFile());
    
vector.add(Encoder.encode(this.getObjectConfigInterface()!.toString()!.getBytes()));
    
vector.add(this.templateFileName);
    
vector.add(this.template);
    
vector.add(this.dataFileName);
    
vector.add(Encoder.encode(this.data.getBytes()));
    

    calendar: Calendar = Calendar.getInstance()!;;
    

    time: string = new Long(calendar.getTimeInMillis()).toString();;
    
vector.add(time);
    
vector.add(time);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return vector;
    
}


    public any getKey(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.getName();
    
}


    public setChild(){
this.isChild= true;
    
}


    public bool isChild(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.isChild;
    
}


    public TransformInfoObjectConfigInterface getObjectConfigInterface(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.objectConfigInterface;
    
}


    public setObjectConfigInterface(Object objectConfigInterface){
this.objectConfigInterface= objectConfigInterface;
    
}


};

            

