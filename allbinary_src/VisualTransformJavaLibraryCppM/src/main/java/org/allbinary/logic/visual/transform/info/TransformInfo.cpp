
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

    protected: const LogUtil logUtil = LogUtil::getInstance();

    protected: const CommonStrings commonStrings = CommonStrings::getInstance();

    private: const AbeClientInformationInterface abeClientInformation = ServiceClientInformationInterfaceFactory::getInstance();

    private: bool isChild = false;

    private: std::string name;

    private: std::string storeName;

    private: std::string objectFileName;

    private: Object* anyType;

    private: std::string objectConfigFileName;

    private: TransformInfoObjectConfigInterface objectConfigInterface;

    private: std::string template;

    private: std::string templateFileName;

    private: std::string dataFileName;

    private: std::string data = StringUtil::getInstance().EMPTY_STRING;

public: TransformInfo(){
}


public: TransformInfo(std::string name){
this->setName(name);
    
}


public: TransformInfo(std::string name, std::string objectFileName, std::string objectConfigFileName, std::string templateFileName, std::string dataFileName){
this->setName(name);
    
this->setObjectFile(objectFileName);
    
this->setObjectConfigFile(objectConfigFileName);
    
this->setTemplateFile(templateFileName);
    
this->setDataFile(dataFileName);
    
}


                //@Throws(Exception.constructor)
            
    public: void override(HashMap<any, any> hashMap){

    TransformInfoData transformInfoData = TransformInfoData::getInstance();;
    

    StringValidationUtil stringValidationUtil = StringValidationUtil::getInstance();;
    

    std::string aName = hashMap.get(transformInfoData.NAME) as string;;
    

                        if(!stringValidationUtil.isEmpty(aName))
                        
                                    {
                                    this->name= aName;
    

                                    }
                                

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().VIEW))
                        
                                    {
                                    
    StringMaker stringBuffer = StringMaker();;
    
stringBuffer.append("TransformInfo properties overridden for: ");
    
stringBuffer.append(this->getName());
    
stringBuffer.append("\n properties: ");
    
stringBuffer.append(hashMap.toString());
    
this->logUtil.putF(stringBuffer.toString(), this, "override(HashMap hashMap)");
    

                                    }
                                

    std::string aStoreName = hashMap.get(StoreFrontData::getInstance().NAME) as string;;
    

                        if(!stringValidationUtil.isEmpty(aStoreName))
                        
                                    {
                                    this->storeName= aStoreName;
    

                                    }
                                

    std::string aObjectFileName = hashMap.get(transformInfoData.OBJECTFILENAME) as string;;
    

                        if(!stringValidationUtil.isEmpty(aObjectFileName))
                        
                                    {
                                    this->objectFileName= aObjectFileName;
    

                                    }
                                

    StringMaker stringBuffer = StringMaker();;
    
stringBuffer.append(URLGLOBALS::getMainPath());
    
stringBuffer.append(FREEBLISKET_PATH_GLOBALS::getInstance().XSLPATH);
    
stringBuffer.append(this->storeName);
    
stringBuffer.append(AbPathData::getInstance().SEPARATOR);
    

    AbPath fileAbPath = AbPath(stringBuffer.toString(), StringUtil::getInstance().EMPTY_STRING);;
    

    std::string aObject = hashMap.get(transformInfoData.OBJECT) as string;;
    

                        if(!stringValidationUtil.isEmpty(aObject))
                        
                                    {
                                    
                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().VIEW))
                        
                                    {
                                    this->logUtil.putF("TransformInfo override view Object for: " +this->getName(), this, "override(HashMap hashMap)");
    

                                    }
                                

    std::string fileDataString = CryptFileReader(TransformInfoObjectData::getInstance().UNCRYPTED_EXTENSION, TransformInfoObjectData::getInstance().ENCRYPTED_EXTENSION).get(AbPath(fileAbPath.toString(), aObject));;
    

                        if(true)
                        
                                    {
                                    this->anyType= fileDataString;
    

                                    }
                                

                                    }
                                

                        if(!stringValidationUtil.isEmpty(hashMap.get(transformInfoData.OBJECTCONFIG) as string))
                        
                                    {
                                    
                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().VIEW))
                        
                                    {
                                    this->logUtil.putF("TransformInfo override ObjectConfig for: " +this->getName(), this, "override(HashMap hashMap)");
    

                                    }
                                
this->setObjectConfig(hashMap.get(transformInfoData.OBJECTCONFIG) as string);
    

                                    }
                                

    std::string objectConfigFileName = hashMap.get(transformInfoData.OBJECTCONFIGFILENAME) as string;;
    

                        if(!stringValidationUtil.isEmpty(objectConfigFileName))
                        
                                    {
                                    
                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().VIEW))
                        
                                    {
                                    this->logUtil.putF("TransformInfo override ObjectConfig File for: " +this->getName(), this, "override(HashMap hashMap)");
    

                                    }
                                
this->setObjectConfigFile(objectConfigFileName);
    

                                    }
                                

    std::string type = hashMap.get(OutputTypeData::getInstance().NAME) as string;;
    

                        if(!stringValidationUtil.isEmpty(type))
                        
                                    {
                                    
                        if(this->getObjectConfigInterface() == 
                                    nullptr
                                )
                        
                                    {
                                    this->setObjectConfigInterface(TransformInfoObjectConfig(this));
    

                                    }
                                
this->getObjectConfigInterface().setOutputTypeName(type);
    

                                    }
                                

    std::string aTemplateFileName = hashMap.get(transformInfoData.TEMPLATEFILENAME) as string;;
    

                        if(!stringValidationUtil.isEmpty(aTemplateFileName))
                        
                                    {
                                    this->templateFileName= aTemplateFileName;
    

                                    }
                                

    std::string aTemplate = hashMap.get(transformInfoData.TEMPLATE) as string;;
    

                        if(!stringValidationUtil.isEmpty(aTemplate))
                        
                                    {
                                    
                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().VIEW))
                        
                                    {
                                    this->logUtil.putF("TransformInfo override Template for: " +this->getName(), this, "override(HashMap hashMap)");
    

                                    }
                                

    std::string fileDataString = CryptFileReader(TransformInfoTemplateData::getInstance().UNCRYPTED_EXTENSION, TransformInfoTemplateData::getInstance().ENCRYPTED_EXTENSION).get(AbPath(fileAbPath.toString(), aTemplate));;
    

                        if(!stringValidationUtil.isEmpty(fileDataString))
                        
                                    {
                                    this->template= fileDataString;
    

                                    }
                                

                                    }
                                

    std::string aDataFileName = hashMap.get(transformInfoData.DATAFILENAME) as string;;
    

                        if(!stringValidationUtil.isEmpty(aDataFileName))
                        
                                    {
                                    this->dataFileName= aDataFileName;
    

                                    }
                                

    std::string aData = hashMap.get(transformInfoData.DATA) as string;;
    

                        if(!stringValidationUtil.isEmpty(aData))
                        
                                    {
                                    
                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().VIEW))
                        
                                    {
                                    this->logUtil.putF("TransformInfo override Data for: " +this->getName(), this, "override(HashMap hashMap)");
    

                                    }
                                

    std::string fileDataString = CryptFileReader(TransformInfoDataData::getInstance().UNCRYPTED_EXTENSION, TransformInfoDataData::getInstance().ENCRYPTED_EXTENSION).get(AbPath(fileAbPath.toString(), aData));;
    

                        if(!stringValidationUtil.isEmpty(fileDataString))
                        
                                    {
                                    this->data= fileDataString;
    

                                    }
                                

                                    }
                                

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().VIEW))
                        
                                    {
                                    stringBuffer= StringMaker();
    
stringBuffer.append("Name: ");
    
stringBuffer.append(aName);
    
stringBuffer.append("\nTemp Object File: ");
    
stringBuffer.append(aObject);
    
stringBuffer.append("\nTemp Object Config File: ");
    
stringBuffer.append(this->getObjectConfigFilePath().toString());
    
stringBuffer.append("\nTemp Template File: ");
    
stringBuffer.append(aTemplate);
    
stringBuffer.append("\nTemp Data File: ");
    
stringBuffer.append(aData);
    
stringBuffer.append("\nStore Name: ");
    
stringBuffer.append(aStoreName);
    
stringBuffer.append("\nObjectFile: ");
    
stringBuffer.append(this->getObjectFile());
    
stringBuffer.append("->TransformInfo");
    
this->logUtil.putF(stringBuffer.toString(), this, "TransformInfoInterface(HashMap)");
    

                                    }
                                

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().TAGHELPERFACTORY))
                        
                                    {
                                    this->logUtil.putF(this->log(), this, "override");
    

                                    }
                                
}


    public: std::string log(){

    StringMaker stringBuffer = StringMaker();;
    
stringBuffer.append("Name: ");
    
stringBuffer.append(this->name);
    
stringBuffer.append("\nObject File: ");
    
stringBuffer.append(this->objectFileName);
    
stringBuffer.append("\nObject Config File Path: ");
    
stringBuffer.append(this->getObjectConfigFile());
    
stringBuffer.append("\nTemplate File: ");
    
stringBuffer.append(this->templateFileName);
    
stringBuffer.append("\nData File: ");
    
stringBuffer.append(this->dataFileName);
    
stringBuffer.append("\nStore Name: ");
    
stringBuffer.append(this->storeName);
    
stringBuffer.append(CommonSeps::getInstance().NEW_LINE);
    
stringBuffer.append(this->getObjectFile());
    
stringBuffer.append("->TransformInfo");
    
stringBuffer.append("TransformInfoInterface(HashMap)");
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer.toString();;
    
}


    public: void setName(std::string value){
this->name= value;
    
}


    public: void setStoreName(std::string value){
this->storeName= value;
    
}


    public: std::string getStoreName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->storeName;
    
}


    public: void setObject(Object anyType){
this->anyType= anyType;
    
}


    public: void setObjectFile(std::string value){
this->objectFileName= value;
    
}


    public: void setTemplate(std::string value){
this->template= value;
    
}


    public: void setTemplateFile(std::string value){
this->templateFileName= value;
    
}


                //@Throws(Exception.constructor)
            
    protected: void setObjectConfigFileName(std::string value){
this->objectConfigFileName= value;
    
}


                //@Throws(Exception.constructor)
            
    protected: void setObjectConfigFile(std::string value){
this->objectConfigFileName= value;
    
this->setObjectConfigInterface(TransformInfoObjectConfigAndManipulatorFactory::getInstance().getInstance(this->abeClientInformation, this, this->getObjectConfigFilePath()));
    
}


                //@Throws(Exception.constructor)
            
    protected: void setObjectConfig(std::string value){

    Document document = DomDocumentHelper::create(value);;
    
this->setObjectConfigInterface(TransformInfoObjectConfigAndManipulatorFactory::getInstance().getInstance(this->abeClientInformation, this, document));
    
}


    public: void setDataFile(std::string value){
this->dataFileName= value;
    
}


    public: void setData(std::string value){
this->data= value;
    
}


    public: std::string getName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->name;
    
}


    public: Object* getObject(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->anyType;
    
}


    public: std::string getObjectFile(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->objectFileName;
    
}


    public: std::string getTemplate(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->template;
    
}


    public: std::string getTemplateFile(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->templateFileName;
    
}


                //@Throws(Exception.constructor)
            
    public: AbPath getTemplateFilePath(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return AbFilePath(this->getTemplateFile());
    
}


                //@Throws(Exception.constructor)
            
    public: AbPath getObjectConfigFilePath(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return AbFilePath(this->getObjectConfigFile());
    
}


                //@Throws(Exception.constructor)
            
    public: AbPath getDataFilePath(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return AbFilePath(this->getDataFile());
    
}


    public: std::string getObjectConfigFile(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->objectConfigFileName;
    
}


    private: std::string getData(){

    StringValidationUtil stringValidationUtil = StringValidationUtil::getInstance();;
    

    std::string dataFileString = this->getDataFile();;
    

                        if(!stringValidationUtil.isEmpty(dataFileString))
                        
                                    {
                                    
        try {
            
    std::string fileData = CryptFileReader(TransformInfoDataData::getInstance().UNCRYPTED_EXTENSION, TransformInfoDataData::getInstance().ENCRYPTED_EXTENSION).get(this->getDataFilePath());;
    

                        if(!stringValidationUtil.isEmpty(this->data))
                        
                                    {
                                    
                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().VIEW))
                        
                                    {
                                    this->logUtil.putF("Data File overriding existing data: " +this->getDataFilePath(), this, "getData()");
    

                                    }
                                

                                    }
                                
this->data= fileData;
    

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().VIEWERROR))
                        
                                    {
                                    this->logUtil.put("Could Not Load Data from: " +this->getDataFile(), this, "getData()", e);
    

                                    }
                                
}


                                    }
                                

        try {
            
                        if(!stringValidationUtil.isEmpty(this->data))
                        
                                    {
                                    
                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().VIEWERROR))
                        
                                    {
                                    this->logUtil.putF("Data: " +DomDocumentHelper::toString(DomDocumentHelper::create(data)), this, "getData()");
    

                                    }
                                

                                    }
                                
                        else {
                            
                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().VIEWERROR))
                        
                                    {
                                    
    StringMaker stringBuffer = StringMaker();;
    
stringBuffer.append("Name: ");
    
stringBuffer.append(this->name);
    
stringBuffer.append("\nEmpty Data For: ");
    
stringBuffer.append(dataFileString);
    
stringBuffer.append("\nPath: ");
    
stringBuffer.append(this->getDataFilePath().toFileSystemString());
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().VIEWERROR))
                        
                                    {
                                    this->logUtil.putF(stringBuffer.toString(), this, "getData()");
    

                                    }
                                

                                    }
                                

                        }
                            

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().VIEWERROR))
                        
                                    {
                                    this->logUtil.put("Could Not Preview Data: " +this->data, this, "getData()", e);
    

                                    }
                                
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->data;
    
}


                //@Throws(Exception.constructor)
            
    public: Document getDataDocument(){

    std::string localData = this->getData();;
    

    StringValidationUtil stringValidationUtil = StringValidationUtil::getInstance();;
    

                        if(stringValidationUtil.isEmpty(localData))
                        
                                    {
                                    
                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().VIEWERROR))
                        
                                    {
                                    this->logUtil.putF("No Data So Creating New Document", this, "getDataDocument()");
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return DomDocumentHelper::create();;
    

                                    }
                                
                        else {
                            
    Document document = DomDocumentHelper::create(localData);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return document;
    

                        }
                            
}


    public: std::string getDataFile(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->dataFileName;
    
}


    public: HashMap<any, any> toHashMap(){

    TransformInfoData transformInfoData = TransformInfoData::getInstance();;
    

    HashMap<any, any> hashMap = HashMap<any, any>();;
    
hashMap.put(transformInfoData.NAME, this->name);
    
hashMap.put(StoreFrontData::getInstance().NAME, this->storeName);
    
hashMap.put(transformInfoData.OBJECTFILENAME, this->objectFileName);
    
hashMap.put(transformInfoData.OBJECT, this->anyType);
    
hashMap.put(transformInfoData.OBJECTCONFIGFILENAME, this->getObjectConfigFile());
    
hashMap.put(transformInfoData.OBJECTCONFIG, Encoder::encode(this->getObjectConfigInterface().toString().getBytes()));
    
hashMap.put(transformInfoData.TEMPLATEFILENAME, this->templateFileName);
    
hashMap.put(transformInfoData.TEMPLATE, this->template);
    
hashMap.put(transformInfoData.DATAFILENAME, this->dataFileName);
    
hashMap.put(transformInfoData.DATA, Encoder::encode(this->data.getBytes()));
    

    Calendar calendar = Calendar::getInstance();;
    

    std::string time = Long(calendar.getTimeInMillis()).toString();;
    
hashMap.put(EntryData::getInstance().LASTMODIFIED, time);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return hashMap;
    
}


    public: java::util::Vector toVector(){

    Vector vector = Vector();;
    
vector.add(this->name);
    
vector.add(this->storeName);
    
vector.add(this->objectFileName);
    
vector.add(this->anyType);
    
vector.add(this->getObjectConfigFile());
    
vector.add(Encoder::encode(this->getObjectConfigInterface().toString().getBytes()));
    
vector.add(this->templateFileName);
    
vector.add(this->template);
    
vector.add(this->dataFileName);
    
vector.add(Encoder::encode(this->data.getBytes()));
    

    Calendar calendar = Calendar::getInstance();;
    

    std::string time = Long(calendar.getTimeInMillis()).toString();;
    
vector.add(time);
    
vector.add(time);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return vector;
    
}


    public: Object* getKey(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->getName();
    
}


    public: void setChild(){
this->isChild= true;
    
}


    public: bool isChild(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->isChild;
    
}


    public: TransformInfoObjectConfigInterface getObjectConfigInterface(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->objectConfigInterface;
    
}


    public: void setObjectConfigInterface(Object objectConfigInterface){
this->objectConfigInterface= objectConfigInterface;
    
}


};

            

