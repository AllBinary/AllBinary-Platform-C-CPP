
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
        



            #include <vector>
        
            #include "../../../../../../java/lang/Object.h"
        
            #include "../../../../../../java/lang/Exception.h"
        
            #include "../../../../../../java/lang/Long.h"
        
#include <java/util/Calendar.h>

      
#include <java/util/HashMap.h>

      
#include <java/util/Vector.h>

      
#include <javax/servlet/http/HttpServletRequest.h>

      
#include <org/allbinary/business/context/configuration/ContextConfiguration.h>

      
#include <org/allbinary/business/context/configuration/ContextConfigurationDomDocumentMapping.h>

      
#include <org/allbinary/business/context/configuration/ContextConfigurationInterface.h>

      
#include <org/allbinary/business/context/configuration/ContextConfigurationInterfaceFactory.h>

      
#include <org/allbinary/business/entry/EntryData.h>

      
#include <org/allbinary/business/user/UserData.h>

      
#include <org/allbinary/data/tree/dom/document/DomDocumentHelper.h>

      
#include <org/allbinary/globals/FREEBLISKET_PATH_GLOBALS.h>

      
#include <org/allbinary/globals/URLGLOBALS.h>

      
#include <org/allbinary/logic/communication/http/request/RequestParams.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/io/file/AbFile.h>

      
#include <org/allbinary/logic/io/file/FileUtil.h>

      
#include <org/allbinary/logic/io/file/directory/Directory.h>

      
#include <org/allbinary/logic/io/path/AbPath.h>

      
#include <org/allbinary/logic/io/path/AbPathData.h>

      
#include <org/allbinary/logic/io/path/AbPathUtil.h>

      
#include <org/allbinary/logic/string/SpecialCharacterUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/string/StringValidationUtil.h>

      
#include <org/allbinary/logic/string/regex/replace/Replace.h>

      
#include <org/allbinary/logic/string/tokens/Tokenizer.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/apache/commons/lang3/StringEscapeUtils.h>

      
#include <org/w3c/dom/Document.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "StoreFrontInterface.h"
#include "StoreFrontData.h"

class StoreFront
            : public Object
        : public StoreFrontInterface {

    private: static const std::string RESOURCES = " Resources" +AbPathData::getInstance().SEPARATOR;

    protected: const LogUtil logUtil = LogUtil::getInstance();

    protected: const CommonStrings commonStrings = CommonStrings::getInstance();

    private: const Directory directory = Directory::getInstance();

    private: const StringUtil stringUtil = StringUtil::getInstance();

    private: const AbPathUtil abPathUtil = AbPathUtil::getInstance();

    private: std::string name = this->stringUtil.EMPTY_STRING;

    private: std::string basketName = this->stringUtil.EMPTY_STRING;

    private: std::string homeHostName = this->stringUtil.EMPTY_STRING;

    private: AbPath homeHostNamePath = this->abPathUtil.NO_ABPATH;

    private: std::string hostName = this->stringUtil.EMPTY_STRING;

    private: AbPath hostNamePath = this->abPathUtil.NO_ABPATH;

    private: std::string testHomeHostName = this->stringUtil.EMPTY_STRING;

    private: AbPath testHomeHostNamePath = this->abPathUtil.NO_ABPATH;

    private: std::string testHostName = this->stringUtil.EMPTY_STRING;

    private: AbPath testHostNamePath = this->abPathUtil.NO_ABPATH;

    private: AbPath imagePath = this->abPathUtil.NO_ABPATH;

    private: AbPath staticPath = this->abPathUtil.NO_ABPATH;

    private: AbPath categoryPath = this->abPathUtil.NO_ABPATH;

    private: std::string inventoryControl = this->stringUtil.EMPTY_STRING;

    private: ContextConfigurationInterface contextConfigurationInterface;

    private: std::string subStores = this->stringUtil.EMPTY_STRING;

    private: std::string tagLocation = this->stringUtil.EMPTY_STRING;

    private: std::string packageLocation = this->stringUtil.EMPTY_STRING;

    private: std::string ftp = this->stringUtil.EMPTY_STRING;

    private: AbPath ftpPath = this->abPathUtil.NO_ABPATH;

    private: std::string ftpUserName = this->stringUtil.EMPTY_STRING;

    private: std::string ftpPassword = this->stringUtil.EMPTY_STRING;

    private: std::string testFtp = this->stringUtil.EMPTY_STRING;

    private: AbPath testFtpPath = this->abPathUtil.NO_ABPATH;

    private: std::string testFtpUserName = this->stringUtil.EMPTY_STRING;

    private: std::string testFtpPassword = this->stringUtil.EMPTY_STRING;

    private: std::string timeCreated = this->stringUtil.EMPTY_STRING;

    private: std::string lastModified = this->stringUtil.EMPTY_STRING;

    private: const int32_t MINCHAR = 0;

    private: const int32_t MINSTORENAMELENGTH = 1;

    private: const int32_t MAXCHAR = 255;

    private: const std::string EMPTY_STRING = StringUtil::getInstance().EMPTY_STRING;

    private: const std::vector<std::string> ONE_EMPTY_STRING_ARRAY = StringUtil::getInstance().ONE_EMPTY_STRING_ARRAY;

public: StoreFront(){
this->contextConfigurationInterface= ContextConfiguration();
    
}


public: StoreFront(HttpServletRequest request){
this->getFormData(RequestParams(request).toHashMap());
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().EMAILLOGGING))
                        
                                    {
                                    this->logUtil.putF("TWB- needs update for adding and updating context configuration - currently defaults to admin context config", this, "StoreFront");
    

                                    }
                                
this->setContextConfigurationInterface(ContextConfigurationInterfaceFactory::getInstance().getInstance("Admin"));
    
}


public: StoreFront(HashMap<any, any> hashMap){
this->getFormData(hashMap);
    

    std::string domDocumentString = hashMap.get(StoreFrontData::getInstance().CONFIGURATION) as string;;
    

                        if(false)
                        
                                    {
                                    
    Document document = DomDocumentHelper::create(domDocumentString);;
    
this->setContextConfigurationInterface(ContextConfigurationInterfaceFactory::getInstance().getInstance(document));
    

                                    }
                                
}


    private: bool isColumn(std::string columnName){

                        if(columnName.compareTo(StoreFrontData::getInstance().NAME) == 0 || columnName.compareTo(UserData::MAINEMAIL) == 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    

                        }
                            
}


                //@Throws(Exception.constructor)
            
    private: AbPath createPath(std::string key, HashMap<any, any> hashMap){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return AbPath(this->create(this->EMPTY_STRING, key, hashMap), StringUtil::getInstance().EMPTY_STRING);
    
}


                //@Throws(Exception.constructor)
            
    private: AbPath createPath(std::string append, std::string key, HashMap<any, any> hashMap){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return AbPath(this->create(append, key, hashMap), StringUtil::getInstance().EMPTY_STRING);
    
}


    private: std::string get(std::string key, HashMap<any, any> hashMap){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->create(this->EMPTY_STRING, key, hashMap);;
    
}


    private: std::string create(std::string append, std::string key, HashMap<any, any> hashMap){

    std::string path = hashMap.get(key) as string;;
    

                        if(StringValidationUtil::getInstance().isEmpty(path))
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->EMPTY_STRING;
    

                                    }
                                
                        else {
                            
                        if(this->isColumn(path))
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return hashMap.get(path) as string +append;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return path;
    

                        }
                            

                        }
                            
}


                //@Throws(Exception.constructor)
            
    private: void getFormData(HashMap<any, any> storeHashMap){

    StoreFrontData storeFrontData = StoreFrontData::getInstance();;
    
this->name= storeHashMap.get(storeFrontData.NAME) as string;
    
this->basketName= storeHashMap.get(storeFrontData.NAME) as string;
    
this->homeHostName= storeHashMap.get(storeFrontData.HOMEHOSTNAME) as string;
    
this->homeHostNamePath= this->createPath(storeFrontData.HOMEHOSTNAMEPATH, storeHashMap);
    
this->hostName= storeHashMap.get(storeFrontData.HOSTNAME) as string;
    
this->hostNamePath= this->createPath(storeFrontData.HOSTNAMEPATH, storeHashMap);
    
this->testHomeHostName= storeHashMap.get(storeFrontData.TESTHOMEHOSTNAME) as string;
    
this->testHomeHostNamePath= this->createPath(storeFrontData.TESTHOMEHOSTNAMEPATH, storeHashMap);
    
this->testHostName= storeHashMap.get(storeFrontData.TESTHOSTNAME) as string;
    
this->testHostNamePath= this->createPath(storeFrontData.TESTHOSTNAMEPATH, storeHashMap);
    
this->imagePath= this->createPath(StoreFront::RESOURCES, storeFrontData.IMAGEPATH, storeHashMap);
    
this->staticPath= this->createPath(" Products" +AbPathData::getInstance().SEPARATOR, storeFrontData.STATICPATH, storeHashMap);
    
this->categoryPath= this->createPath(StoreFront::RESOURCES, storeFrontData.CATEGORYPATH, storeHashMap);
    
this->inventoryControl= storeHashMap.get(storeFrontData.INVENTORYCONTROL) as string;
    
this->subStores= storeHashMap.get(storeFrontData.SUBSTORES) as string;
    
this->tagLocation= storeHashMap.get(storeFrontData.TAGLOCATION) as string;
    
this->packageLocation= storeHashMap.get(storeFrontData.PACKAGELOCATION) as string;
    
this->ftp= storeHashMap.get(storeFrontData.FTP) as string;
    
this->ftpPath= this->createPath(storeFrontData.FTPPATH, storeHashMap);
    
this->ftpUserName= storeHashMap.get(storeFrontData.FTPUSERNAME) as string;
    
this->ftpPassword= storeHashMap.get(storeFrontData.FTPPASSWORD) as string;
    
this->testFtp= storeHashMap.get(storeFrontData.TESTFTP) as string;
    
this->testFtpPath= this->createPath(storeFrontData.TESTFTPPATH, storeHashMap);
    
this->testFtpUserName= storeHashMap.get(storeFrontData.TESTFTPUSERNAME) as string;
    
this->testFtpPassword= storeHashMap.get(storeFrontData.TESTFTPPASSWORD) as string;
    
this->timeCreated= storeHashMap.get(EntryData::getInstance().TIMECREATED) as string;
    
this->lastModified= storeHashMap.get(EntryData::getInstance().LASTMODIFIED) as string;
    
}


    public: Boolean isNameValid(){

                        if(!StringValidationUtil::getInstance().isValidRequired(this->name, this->MINSTORENAMELENGTH, this->MAXCHAR))
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean::FALSE;
    

                                    }
                                
                        else {
                            
    bool isEscapedCharactersContained = false;;
    

    std::string storeNameEscaped = StringEscapeUtils::escapeHtml3(this->name);;
    

                        if(this->name.compareTo(storeNameEscaped) != 0)
                        
                                    {
                                    isEscapedCharactersContained= true;
    

                                    }
                                

    StringValidationUtil stringValidationUtil = StringValidationUtil::getInstance();;
    

    bool isSpacesContained = false;;
    

                        if(stringValidationUtil.containsSpaces(this->name))
                        
                                    {
                                    isSpacesContained= true;
    

                                    }
                                

                        if(isSpacesContained || isEscapedCharactersContained)
                        
                                    {
                                    
    HashMap<any, any> hashMap = SpecialCharacterUtil::getHashMap();;
    
hashMap.put(
                                                {
                                                    CommonSeps::getInstance().SPACE
                                                }, this->ONE_EMPTY_STRING_ARRAY);
    
this->name= Replace(hashMap).all(this->name);
    

                                    }
                                

                        }
                            



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean::TRUE;
    
}


    public: Boolean isValid(){

    Boolean valid = Boolean::TRUE;;
    
valid= this->isNameValid();
    

    StringValidationUtil stringValidationUtil = StringValidationUtil::getInstance();;
    

                        if(!stringValidationUtil.isValidRequired(this->basketName, this->MINCHAR, this->MAXCHAR))
                        
                                    {
                                    valid= Boolean::FALSE;
    

                                    }
                                

                        if(!stringValidationUtil.isValidRequired(this->homeHostName, this->MINCHAR, this->MAXCHAR))
                        
                                    {
                                    valid= Boolean::FALSE;
    

                                    }
                                

                        if(!stringValidationUtil.isValidNotRequired(this->homeHostNamePath.toString(), this->MINCHAR, this->MAXCHAR))
                        
                                    {
                                    valid= Boolean::FALSE;
    

                                    }
                                

                        if(!stringValidationUtil.isValidRequired(this->hostName, this->MINCHAR, this->MAXCHAR))
                        
                                    {
                                    valid= Boolean::FALSE;
    

                                    }
                                

                        if(!stringValidationUtil.isValidRequired(this->hostNamePath.toString(), this->MINCHAR, this->MAXCHAR))
                        
                                    {
                                    valid= Boolean::FALSE;
    

                                    }
                                

                        if(!stringValidationUtil.isValidNotRequired(this->testHomeHostName, this->MINCHAR, this->MAXCHAR))
                        
                                    {
                                    valid= Boolean::FALSE;
    

                                    }
                                

                        if(!stringValidationUtil.isValidNotRequired(this->testHomeHostNamePath.toString(), this->MINCHAR, this->MAXCHAR))
                        
                                    {
                                    valid= Boolean::FALSE;
    

                                    }
                                

                        if(!stringValidationUtil.isValidNotRequired(this->testHostName, this->MINCHAR, this->MAXCHAR))
                        
                                    {
                                    valid= Boolean::FALSE;
    

                                    }
                                

                        if(!stringValidationUtil.isValidNotRequired(this->testHostNamePath.toString(), this->MINCHAR, this->MAXCHAR))
                        
                                    {
                                    valid= Boolean::FALSE;
    

                                    }
                                

                        if(!stringValidationUtil.isValidRequired(this->imagePath.toString(), this->MINCHAR, this->MAXCHAR))
                        
                                    {
                                    valid= Boolean::FALSE;
    

                                    }
                                

                        if(!stringValidationUtil.isValidRequired(this->staticPath.toString(), this->MINCHAR, this->MAXCHAR))
                        
                                    {
                                    valid= Boolean::FALSE;
    

                                    }
                                

                        if(!stringValidationUtil.isValidRequired(this->categoryPath.toString(), this->MINCHAR, this->MAXCHAR))
                        
                                    {
                                    valid= Boolean::FALSE;
    

                                    }
                                

                        if(!stringValidationUtil.isValidRequired(this->inventoryControl, this->MINCHAR, this->MAXCHAR))
                        
                                    {
                                    valid= Boolean::FALSE;
    

                                    }
                                

                        if(!stringValidationUtil.isValidNotRequired(this->subStores, this->MINCHAR, this->MAXCHAR))
                        
                                    {
                                    valid= Boolean::FALSE;
    

                                    }
                                

                        if(!stringValidationUtil.isValidNotRequired(this->tagLocation, this->MINCHAR, this->MAXCHAR))
                        
                                    {
                                    valid= Boolean::FALSE;
    

                                    }
                                

                        if(!stringValidationUtil.isValidRequired(this->packageLocation, this->MINCHAR, this->MAXCHAR))
                        
                                    {
                                    valid= Boolean::FALSE;
    

                                    }
                                

                        if(!stringValidationUtil.isValidNotRequired(this->ftp, this->MINCHAR, this->MAXCHAR))
                        
                                    {
                                    valid= Boolean::FALSE;
    

                                    }
                                

                        if(!stringValidationUtil.isValidNotRequired(this->ftpPath.toString(), this->MINCHAR, this->MAXCHAR))
                        
                                    {
                                    valid= Boolean::FALSE;
    

                                    }
                                

                        if(!stringValidationUtil.isValidNotRequired(this->ftpUserName, this->MINCHAR, this->MAXCHAR))
                        
                                    {
                                    valid= Boolean::FALSE;
    

                                    }
                                

                        if(!stringValidationUtil.isValidNotRequired(this->ftpPassword, this->MINCHAR, this->MAXCHAR))
                        
                                    {
                                    valid= Boolean::FALSE;
    

                                    }
                                

                        if(!stringValidationUtil.isValidNotRequired(this->testFtp, this->MINCHAR, this->MAXCHAR))
                        
                                    {
                                    valid= Boolean::FALSE;
    

                                    }
                                

                        if(!stringValidationUtil.isValidNotRequired(this->testFtpPath.toString(), this->MINCHAR, this->MAXCHAR))
                        
                                    {
                                    valid= Boolean::FALSE;
    

                                    }
                                

                        if(!stringValidationUtil.isValidNotRequired(this->testFtpUserName, this->MINCHAR, this->MAXCHAR))
                        
                                    {
                                    valid= Boolean::FALSE;
    

                                    }
                                

                        if(!stringValidationUtil.isValidNotRequired(this->testFtpPassword, this->MINCHAR, this->MAXCHAR))
                        
                                    {
                                    valid= Boolean::FALSE;
    

                                    }
                                

                        if(valid.valueOf() == true)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean::TRUE;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean::FALSE;
    

                        }
                            
}


    public: std::string nameValidationInfo(){

    StringValidationUtil stringValidationUtil = StringValidationUtil::getInstance();;
    

                        if(!stringValidationUtil.isValidRequired(this->name, this->MINCHAR, this->MAXCHAR))
                        
                                    {
                                    
    StringMaker stringBuffer = StringMaker();;
    
stringBuffer.append("Name is invalid. Must be < ");
    
stringBuffer.appendint(this->MAXCHAR);
    
stringBuffer.append(" and > 0 characters.<br>");
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer.toString();;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->EMPTY_STRING;
    
}


    public: std::string validationInfo(){

        try {
            
    StringValidationUtil stringValidationUtil = StringValidationUtil::getInstance();;
    

    StringMaker stringBuffer = StringMaker();;
    
stringBuffer.append(this->nameValidationInfo());
    

                        if(!stringValidationUtil.isValidRequired(this->basketName, this->MINCHAR, this->MAXCHAR))
                        
                                    {
                                    stringBuffer.append("Basket name is invalid. Must be < ");
    
stringBuffer.appendint(this->MAXCHAR);
    
stringBuffer.append(" and > 0 characters.<br>");
    

                                    }
                                

                        if(!stringValidationUtil.isValidRequired(this->homeHostName, this->MINCHAR, this->MAXCHAR))
                        
                                    {
                                    stringBuffer.append("Home host name is invalid. Must be < ");
    
stringBuffer.appendint(this->MAXCHAR);
    
stringBuffer.append(" and > 0 characters.<br>");
    

                                    }
                                

                        if(!stringValidationUtil.isValidNotRequired(this->homeHostNamePath.toString(), this->MINCHAR, this->MAXCHAR))
                        
                                    {
                                    stringBuffer.append("Home host name path is invalid. Must be < ");
    
stringBuffer.appendint(this->MAXCHAR);
    
stringBuffer.append(" and > 0 characters.<br>");
    

                                    }
                                

                        if(!stringValidationUtil.isValidRequired(this->hostName, this->MINCHAR, this->MAXCHAR))
                        
                                    {
                                    stringBuffer.append("Host name is invalid. Must be < ");
    
stringBuffer.appendint(this->MAXCHAR);
    
stringBuffer.append(" and > 0 characters.<br>");
    

                                    }
                                

                        if(!stringValidationUtil.isValidRequired(this->hostNamePath.toString(), this->MINCHAR, this->MAXCHAR))
                        
                                    {
                                    stringBuffer.append("Host name path is invalid. Must be < ");
    
stringBuffer.appendint(this->MAXCHAR);
    
stringBuffer.append(" and > 0 characters.<br>");
    

                                    }
                                

                        if(!stringValidationUtil.isValidNotRequired(this->testHomeHostName, this->MINCHAR, this->MAXCHAR))
                        
                                    {
                                    stringBuffer.append("Test home host name is invalid. Must be < " +this->MAXCHAR +" and > 0 characters.<br>");
    

                                    }
                                

                        if(!stringValidationUtil.isValidNotRequired(this->testHomeHostNamePath.toString(), this->MINCHAR, this->MAXCHAR))
                        
                                    {
                                    stringBuffer.append("Test home host name path is invalid. Must be < " +this->MAXCHAR +" and > 0 characters.<br>");
    

                                    }
                                

                        if(!stringValidationUtil.isValidNotRequired(this->testHostName, this->MINCHAR, this->MAXCHAR))
                        
                                    {
                                    stringBuffer.append("Test host name is invalid. Must be < " +this->MAXCHAR +" and > 0 characters.<br>");
    

                                    }
                                

                        if(!stringValidationUtil.isValidNotRequired(this->testHostNamePath.toString(), this->MINCHAR, this->MAXCHAR))
                        
                                    {
                                    stringBuffer.append("Test host name path is invalid. Must be < " +this->MAXCHAR +" and > 0 characters.<br>");
    

                                    }
                                

                        if(!stringValidationUtil.isValidRequired(this->imagePath.toString(), this->MINCHAR, this->MAXCHAR))
                        
                                    {
                                    stringBuffer.append("Image path is invalid. Must be < " +this->MAXCHAR +" and > 0 characters.<br>");
    

                                    }
                                

                        if(!stringValidationUtil.isValidRequired(this->staticPath.toString(), this->MINCHAR, this->MAXCHAR))
                        
                                    {
                                    stringBuffer.append("Static path is invalid. Must be < " +this->MAXCHAR +" and > 0 characters.<br>");
    

                                    }
                                

                        if(!stringValidationUtil.isValidRequired(this->categoryPath.toString(), this->MINCHAR, this->MAXCHAR))
                        
                                    {
                                    stringBuffer.append("Category path is invalid. Must be < " +this->MAXCHAR +" and > 0 characters.<br>");
    

                                    }
                                

                        if(!stringValidationUtil.isValidRequired(this->inventoryControl, this->MINCHAR, this->MAXCHAR))
                        
                                    {
                                    stringBuffer.append("Inventory control is invalid. Must be < " +this->MAXCHAR +" and > 0 characters.<br>");
    

                                    }
                                

                        if(!stringValidationUtil.isValidNotRequired(this->subStores, this->MINCHAR, this->MAXCHAR))
                        
                                    {
                                    stringBuffer.append("Sub stores is invalid. Must be < " +this->MAXCHAR +" and > 0 characters.<br>");
    

                                    }
                                

                        if(!stringValidationUtil.isValidNotRequired(this->tagLocation, this->MINCHAR, this->MAXCHAR))
                        
                                    {
                                    stringBuffer.append("Tag location is invalid. Must be < " +this->MAXCHAR +" and > 0 characters.<br>");
    

                                    }
                                

                        if(!stringValidationUtil.isValidRequired(this->packageLocation, this->MINCHAR, this->MAXCHAR))
                        
                                    {
                                    stringBuffer.append("Package location is invalid. Must be < " +this->MAXCHAR +" and > 0 characters.<br>");
    

                                    }
                                

                        if(!stringValidationUtil.isValidNotRequired(this->ftp, this->MINCHAR, this->MAXCHAR))
                        
                                    {
                                    stringBuffer.append("Ftp is invalid. Must be < " +this->MAXCHAR +" and > 0 characters.<br>");
    

                                    }
                                

                        if(!stringValidationUtil.isValidNotRequired(this->ftpPath.toString(), this->MINCHAR, this->MAXCHAR))
                        
                                    {
                                    stringBuffer.append("Ftp path is invalid. Must be < " +this->MAXCHAR +" and > 0 characters.<br>");
    

                                    }
                                

                        if(!stringValidationUtil.isValidNotRequired(this->ftpUserName, this->MINCHAR, this->MAXCHAR))
                        
                                    {
                                    stringBuffer.append("Ftp username is invalid. Must be < " +this->MAXCHAR +" and > 0 characters.<br>");
    

                                    }
                                

                        if(!stringValidationUtil.isValidNotRequired(this->ftpPassword, this->MINCHAR, this->MAXCHAR))
                        
                                    {
                                    stringBuffer.append("Ftp password is invalid. Must be < " +this->MAXCHAR +" and > 0 characters.<br>");
    

                                    }
                                

                        if(!stringValidationUtil.isValidNotRequired(this->testFtp, this->MINCHAR, this->MAXCHAR))
                        
                                    {
                                    stringBuffer.append("Test ftp is invalid. Must be < " +this->MAXCHAR +" and > 0 characters.<br>");
    

                                    }
                                

                        if(!stringValidationUtil.isValidNotRequired(this->testFtpPath.toString(), this->MINCHAR, this->MAXCHAR))
                        
                                    {
                                    stringBuffer.append("Test ftp Path is invalid. Must be < " +this->MAXCHAR +" and > 0 characters.<br>");
    

                                    }
                                

                        if(!stringValidationUtil.isValidNotRequired(this->testFtpUserName, this->MINCHAR, this->MAXCHAR))
                        
                                    {
                                    stringBuffer.append("Test ftp username is invalid. Must be < " +this->MAXCHAR +" and > 0 characters.<br>");
    

                                    }
                                

                        if(!stringValidationUtil.isValidNotRequired(this->testFtpPassword, this->MINCHAR, this->MAXCHAR))
                        
                                    {
                                    stringBuffer.append("Test ftp password is invalid. Must be < " +this->MAXCHAR +" and > 0 characters.<br>");
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer.toString();;
    

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().SQLTAGSERROR))
                        
                                    {
                                    this->logUtil.put("Failed to generate validation error info", this, "validationInfo()", e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return "Error Validating Form";
    
}

}


    public: std::string getTestHtmlPath(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return org.allbinary.globals.URLGLOBALS.getTestHtmlPath() +this->getCurrentHostNamePath();
    
}


    public: std::string getCurrentHostName(){

    std::string location = this->EMPTY_STRING;;
    

                        if(org.allbinary.globals.URLGLOBALS.isTestingMode())
                        
                                    {
                                    location= this->getTestHostName();
    

                                    }
                                
                        else {
                            location= this->getHostName();
    

                        }
                            



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return location;
    
}


    public: std::string getCurrentHostNamePath(){

    std::string location = this->EMPTY_STRING;;
    

                        if(org.allbinary.globals.URLGLOBALS.isTestingMode())
                        
                                    {
                                    location= this->getTestHostNamePath();
    

                                    }
                                
                        else {
                            location= this->getHostNamePath();
    

                        }
                            



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return location;
    
}


    public: std::string getCurrentHomeHostName(){

    std::string location = this->EMPTY_STRING;;
    

                        if(org.allbinary.globals.URLGLOBALS.isTestingMode())
                        
                                    {
                                    location= this->getTestHomeHostName();
    

                                    }
                                
                        else {
                            location= this->getHomeHostName();
    

                        }
                            



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return location;
    
}


    public: std::string getCurrentHomeHostNamePath(){

    std::string location = this->EMPTY_STRING;;
    

                        if(org.allbinary.globals.URLGLOBALS.isTestingMode())
                        
                                    {
                                    location= this->getTestHomeHostNamePath();
    

                                    }
                                
                        else {
                            location= this->getHomeHostNamePath();
    

                        }
                            



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return location;
    
}


    public: std::string getName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->name;
    
}


    public: std::string getBasketName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->basketName;
    
}


    public: std::string getHomeHostName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->homeHostName;
    
}


    public: std::string getHomeHostNamePath(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->homeHostNamePath.toString();;
    
}


    public: std::string getHostName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->hostName;
    
}


    public: std::string getHostNamePath(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->hostNamePath.toString();;
    
}


    public: std::string getTestHomeHostName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->testHomeHostName;
    
}


    public: std::string getTestHomeHostNamePath(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->testHomeHostNamePath.toString();;
    
}


    public: std::string getTestHostName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->testHostName;
    
}


    public: std::string getTestHostNamePath(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->testHostNamePath.toString();;
    
}


    public: std::string getStaticPath(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->staticPath.toString();;
    
}


    public: std::string getCategoryPath(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->categoryPath.toString();;
    
}


    public: std::string getInventoryControl(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->inventoryControl;
    
}


                //@Throws(Exception.constructor)
            
    public: BasicArrayList getSubStores(){

        try {
            
    Tokenizer tokenizer = Tokenizer(CommonSeps::getInstance().SEMICOLON);;
    

    BasicArrayList subStoreVector = tokenizer.getTokensFromString(this->subStores, BasicArrayListD());;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return subStoreVector;
    

                //: 
} catch(e) 
            {



                            throw e;
                    
}

}


    public: std::string getTagLocation(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->tagLocation;
    
}


    public: std::string getPackageLocation(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->packageLocation;
    
}


    public: std::string getFtp(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->ftp;
    
}


    public: std::string getFtpUserName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->ftpUserName;
    
}


    public: std::string getFtpPassword(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->ftpPassword;
    
}


    public: std::string getTestFtp(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->testFtp;
    
}


    public: std::string getTestFtpUserName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->testFtpUserName;
    
}


    public: std::string getTestFtpPassword(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->testFtpPassword;
    
}


    public: std::string getFtpPath(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->ftpPath.toString();;
    
}


    public: std::string getTestFtpPath(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->testFtpPath.toString();;
    
}


    public: std::string getTimeCreated(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->timeCreated;
    
}


    public: std::string getLastModified(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->lastModified;
    
}


    public: void setName(std::string value){
this->name= value;
    
}


    public: void setBasketName(std::string value){
this->basketName= value;
    
}


    public: void setHomeHostName(std::string value){
this->homeHostName= value;
    
}


                //@Throws(Exception.constructor)
            
    public: void setHomeHostNamePath(std::string value){
this->homeHostNamePath= AbPath(value, StringUtil::getInstance().EMPTY_STRING);
    
}


    public: void setHostName(std::string value){
this->hostName= value;
    
}


                //@Throws(Exception.constructor)
            
    public: void setHostNamePath(std::string value){
this->hostNamePath= AbPath(value, StringUtil::getInstance().EMPTY_STRING);
    
}


    public: void setTestHomeHostName(std::string value){
this->testHomeHostName= value;
    
}


                //@Throws(Exception.constructor)
            
    public: void setTestHomeHostNamePath(std::string value){
this->testHomeHostNamePath= AbPath(value, StringUtil::getInstance().EMPTY_STRING);
    
}


    public: void setTestHostName(std::string value){
this->testHostName= value;
    
}


                //@Throws(Exception.constructor)
            
    public: void setTestHostNamePath(std::string value){
this->testHostNamePath= AbPath(value, StringUtil::getInstance().EMPTY_STRING);
    
}


                //@Throws(Exception.constructor)
            
    public: void setImagePath(std::string value){
this->imagePath= AbPath(value, StringUtil::getInstance().EMPTY_STRING);
    
}


                //@Throws(Exception.constructor)
            
    public: void setStaticPath(std::string value){
this->staticPath= AbPath(value, StringUtil::getInstance().EMPTY_STRING);
    
}


                //@Throws(Exception.constructor)
            
    public: void setCategoryPath(std::string value){
this->categoryPath= AbPath(value, StringUtil::getInstance().EMPTY_STRING);
    
}


    public: void setSubStores(std::string value){
this->subStores= value;
    
}


    public: void setTagLocation(std::string value){
this->tagLocation= value;
    
}


    public: void setPackageLocation(std::string value){
this->packageLocation= value;
    
}


    public: void setInventoryControl(std::string value){
this->inventoryControl= value;
    
}


    public: void getPackageLocation(std::string value){
this->packageLocation= value;
    
}


    public: void setFtp(std::string value){
this->ftp= value;
    
}


    public: void setFtpUserName(std::string value){
this->ftpUserName= value;
    
}


    public: void setFtpPassword(std::string value){
this->ftpPassword= value;
    
}


    public: void setTestFtp(std::string value){
this->testFtp= value;
    
}


    public: void setTestFtpUserName(std::string value){
this->testFtpUserName= value;
    
}


    public: void setTestFtpPassword(std::string value){
this->testFtpPassword= value;
    
}


    public: void setTimeCreated(std::string value){
this->timeCreated= value;
    
}


    public: void setLastModified(std::string value){
this->lastModified= value;
    
}


                //@Throws(Exception.constructor)
            
    public: void setFtpPath(std::string value){
this->ftpPath= AbPath(value, StringUtil::getInstance().EMPTY_STRING);
    
}


                //@Throws(Exception.constructor)
            
    public: void setTestFtpPath(std::string value){
this->testFtpPath= AbPath(value, StringUtil::getInstance().EMPTY_STRING);
    
}


                //@Throws(Exception.constructor)
            
    private: bool createDirectories(){

    AbPath storeAbPath = AbPath(URLGLOBALS::getWebappPath() +this->getCurrentHomeHostNamePath(), StringUtil::getInstance().EMPTY_STRING);;
    

                        if(!this->directory.create(storeAbPath))
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    

                                    }
                                

                        if(!this->directory.create(AbPath(storeAbPath +this->getCategoryPath(), StringUtil::getInstance().EMPTY_STRING)))
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    

                                    }
                                

                        if(!this->directory.create(AbPath(storeAbPath +this->getStaticPath(), StringUtil::getInstance().EMPTY_STRING)))
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    
}


                //@Throws(Exception.constructor)
            
    public: void install(int32_t current, int32_t total){

        try {
            
                        if(!this->createDirectories())
                        
                                    {
                                    


                            throw Exception("Unable to create store directories");
                    

                                    }
                                

    StringMaker stringBuffer = StringMaker();;
    
stringBuffer.delete(0, stringBuffer.length());
    
stringBuffer.append(URLGLOBALS::getMainPath());
    
stringBuffer.append(FREEBLISKET_PATH_GLOBALS::getInstance().XSLPATH);
    

    std::string viewPath = stringBuffer.toString();;
    
stringBuffer.delete(0, stringBuffer.length());
    
stringBuffer.append(viewPath);
    
stringBuffer.append(FREEBLISKET_PATH_GLOBALS::getInstance().INSTALLPATH);
    

    AbPath fromDirectoryAbPath = AbPath(stringBuffer.toString(), StringUtil::getInstance().EMPTY_STRING);;
    
stringBuffer.delete(0, stringBuffer.length());
    
stringBuffer.append(viewPath);
    
stringBuffer.append("special");
    
stringBuffer.append(AbPathData::getInstance().SEPARATOR);
    

    AbPath fromSpecialDirectoryAbPath = AbPath(stringBuffer.toString(), StringUtil::getInstance().EMPTY_STRING);;
    
stringBuffer.delete(0, stringBuffer.length());
    
stringBuffer.append(viewPath);
    
stringBuffer.append(this->getName());
    
stringBuffer.append(AbPathData::getInstance().SEPARATOR);
    

    AbPath toDirectoryAbPath = AbPath(stringBuffer.toString(), StringUtil::getInstance().EMPTY_STRING);;
    

                        if(current == 0)
                        
                                    {
                                    
                        if(!this->directory.create(toDirectoryAbPath))
                        
                                    {
                                    


                            throw Exception("Unable to create store view directory: " +toDirectoryAbPath.toString());
                    

                                    }
                                

                                    }
                                

    int32_t viewTotal = (total *85) /100;;
    

    int32_t installTotal = (total *93) /100;;
    

                        if(current < viewTotal)
                        
                                    {
                                    
    AbFile file = AbFile::createAbFileFromAbPath(fromSpecialDirectoryAbPath);;
    

                        if(file.isDirectory())
                        
                                    {
                                    
    int32_t halfViewTotal = viewTotal /2;;
    

                        if(current < halfViewTotal)
                        
                                    {
                                    this->installViews(fromSpecialDirectoryAbPath, toDirectoryAbPath, current, halfViewTotal);
    

                                    }
                                
                             else 
                        if(current < viewTotal)
                        
                                    {
                                    this->installViews(fromDirectoryAbPath, toDirectoryAbPath, current -halfViewTotal, viewTotal -halfViewTotal);
    

                                    }
                                

                                    }
                                
                        else {
                            this->installViews(fromDirectoryAbPath, toDirectoryAbPath, current, viewTotal);
    

                        }
                            

                                    }
                                
                             else 
                        if(current < installTotal)
                        
                                    {
                                    this->installResources(fromDirectoryAbPath, current -viewTotal, installTotal -viewTotal);
    

                                    }
                                
                        else {
                            this->installMedia(fromDirectoryAbPath, current -installTotal, total -installTotal);
    

                        }
                            

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().SQLTAGSERROR))
                        
                                    {
                                    this->logUtil.put(this->commonStrings.EXCEPTION, this, "install()", e);
    

                                    }
                                



                            throw e;
                    
}

}


                //@Throws(Exception.constructor)
            
    private: void installViews(AbPath fromDirectoryAbPath, AbPath toDirectoryAbPath, int32_t current, int32_t total){
FileUtil::getInstance().copyDirectoryPortion(fromDirectoryAbPath, toDirectoryAbPath, true, false, current, total);
    
}


                //@Throws(Exception.constructor)
            
    private: void installResources(AbPath fromDirectoryAbPath, int32_t current, int32_t total){

    StringMaker stringBuffer = StringMaker();;
    
stringBuffer.append(fromDirectoryAbPath.toString());
    
stringBuffer.append(AbPathData::getInstance().SEPARATOR);
    
stringBuffer.append("Resources");
    
stringBuffer.append(AbPathData::getInstance().SEPARATOR);
    

    AbPath installCategoryAbPath = AbPath(stringBuffer.toString(), StringUtil::getInstance().EMPTY_STRING);;
    
stringBuffer.delete(0, stringBuffer.length());
    
stringBuffer.append(URLGLOBALS::getMainPath());
    
stringBuffer.append(this->getCurrentHomeHostNamePath());
    
stringBuffer.append(AbPathData::getInstance().SEPARATOR);
    
stringBuffer.append(this->getCategoryPath());
    

    AbPath categoryAbPath = AbPath(stringBuffer.toString(), StringUtil::getInstance().EMPTY_STRING);;
    
FileUtil::getInstance().copyDirectoryPortion(installCategoryAbPath, categoryAbPath, true, false, current, total);
    
}


                //@Throws(Exception.constructor)
            
    private: void installMedia(AbPath fromDirectoryAbPath, int32_t current, int32_t total){

    StringMaker stringBuffer = StringMaker();;
    
stringBuffer.append(fromDirectoryAbPath.toString());
    
stringBuffer.append(AbPathData::getInstance().SEPARATOR);
    
stringBuffer.append(FREEBLISKET_PATH_GLOBALS::getInstance().TEMPLATEPATH);
    
stringBuffer.append("images");
    
stringBuffer.append(AbPathData::getInstance().SEPARATOR);
    

    AbPath viewStoreImagesDirectoryAbPath = AbPath(stringBuffer.toString(), StringUtil::getInstance().EMPTY_STRING);;
    

    AbPath storeAbPath = AbPath(URLGLOBALS::getWebappPath() +this->getCurrentHomeHostNamePath(), StringUtil::getInstance().EMPTY_STRING);;
    
FileUtil::getInstance().copyDirectoryPortion(viewStoreImagesDirectoryAbPath, storeAbPath, true, false, current, total);
    
}


                //@Throws(Exception.constructor)
            
    public: Vector toVector(){

    Vector dataVector = Vector();;
    
dataVector.add(this->name);
    
dataVector.add(this->homeHostName);
    
dataVector.add(this->homeHostNamePath.toString());
    
dataVector.add(this->hostName);
    
dataVector.add(this->hostNamePath.toString());
    
dataVector.add(this->testHomeHostName);
    
dataVector.add(this->testHomeHostNamePath.toString());
    
dataVector.add(this->testHostName);
    
dataVector.add(this->testHostNamePath.toString());
    
dataVector.add(this->imagePath.toString());
    
dataVector.add(this->staticPath.toString());
    
dataVector.add(this->categoryPath.toString());
    
dataVector.add(this->inventoryControl);
    

    ContextConfigurationDomDocumentMapping contextConfigurationDomDocumentMapping = ContextConfigurationDomDocumentMapping(this->getContextConfigurationInterface());;
    
dataVector.add(contextConfigurationDomDocumentMapping.toDomDocumentString());
    
dataVector.add(this->subStores);
    
dataVector.add(this->tagLocation);
    
dataVector.add(this->packageLocation);
    
dataVector.add(this->ftp);
    
dataVector.add(this->ftpPath.toString());
    
dataVector.add(this->ftpUserName);
    
dataVector.add(this->ftpPassword);
    
dataVector.add(this->testFtp);
    
dataVector.add(this->testFtpPath.toString());
    
dataVector.add(this->testFtpUserName);
    
dataVector.add(this->testFtpPassword);
    

    Calendar calendar = Calendar::getInstance();;
    

    std::string time = Long(calendar.getTimeInMillis()).toString();;
    
dataVector.add(time);
    
dataVector.add(time);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return dataVector;
    
}


                //@Throws(Exception.constructor)
            
    public: HashMap<any, any> toHashMap(){

    StoreFrontData storeFrontData = StoreFrontData::getInstance();;
    

    HashMap<any, any> dataHashMap = HashMap<any, any>();;
    
dataHashMap.put(storeFrontData.NAME, this->name);
    
dataHashMap.put(storeFrontData.HOMEHOSTNAME, this->homeHostName);
    
dataHashMap.put(storeFrontData.HOMEHOSTNAMEPATH, this->homeHostNamePath.toString());
    
dataHashMap.put(storeFrontData.HOSTNAME, this->hostName);
    
dataHashMap.put(storeFrontData.HOSTNAMEPATH, this->hostNamePath.toString());
    
dataHashMap.put(storeFrontData.TESTHOMEHOSTNAME, this->testHomeHostName);
    
dataHashMap.put(storeFrontData.TESTHOMEHOSTNAMEPATH, this->testHomeHostNamePath.toString());
    
dataHashMap.put(storeFrontData.TESTHOSTNAME, this->testHostName);
    
dataHashMap.put(storeFrontData.TESTHOSTNAMEPATH, this->testHostNamePath.toString());
    
dataHashMap.put(storeFrontData.IMAGEPATH, this->imagePath.toString());
    
dataHashMap.put(storeFrontData.STATICPATH, this->staticPath.toString());
    
dataHashMap.put(storeFrontData.CATEGORYPATH, this->categoryPath.toString());
    
dataHashMap.put(storeFrontData.INVENTORYCONTROL, this->inventoryControl);
    

    ContextConfigurationDomDocumentMapping contextConfigurationDomDocumentMapping = ContextConfigurationDomDocumentMapping(this->getContextConfigurationInterface());;
    
dataHashMap.put(storeFrontData.CONFIGURATION, contextConfigurationDomDocumentMapping.toDomDocumentString());
    
dataHashMap.put(storeFrontData.SUBSTORES, this->subStores);
    
dataHashMap.put(storeFrontData.TAGLOCATION, this->tagLocation);
    
dataHashMap.put(storeFrontData.PACKAGELOCATION, this->packageLocation);
    
dataHashMap.put(storeFrontData.FTP, this->ftp);
    
dataHashMap.put(storeFrontData.FTPPATH, this->ftpPath.toString());
    
dataHashMap.put(storeFrontData.FTPUSERNAME, this->ftpUserName);
    
dataHashMap.put(storeFrontData.FTPPASSWORD, this->ftpPassword);
    
dataHashMap.put(storeFrontData.TESTFTP, this->testFtp);
    
dataHashMap.put(storeFrontData.TESTFTPPATH, this->testFtpPath.toString());
    
dataHashMap.put(storeFrontData.TESTFTPUSERNAME, this->testFtpUserName);
    
dataHashMap.put(storeFrontData.TESTFTPPASSWORD, this->testFtpPassword);
    

    Calendar calendar = Calendar::getInstance();;
    

    std::string time = Long(calendar.getTimeInMillis()).toString();;
    
dataHashMap.put(EntryData::getInstance().LASTMODIFIED, time);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return dataHashMap;
    
}


    public: Object* getKey(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->getName();
    
}


    public: ContextConfigurationInterface getContextConfigurationInterface(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->contextConfigurationInterface;
    
}


    public: void setContextConfigurationInterface(ContextConfigurationInterface contextConfigurationInterface){
this->contextConfigurationInterface= contextConfigurationInterface;
    
}


};

            

