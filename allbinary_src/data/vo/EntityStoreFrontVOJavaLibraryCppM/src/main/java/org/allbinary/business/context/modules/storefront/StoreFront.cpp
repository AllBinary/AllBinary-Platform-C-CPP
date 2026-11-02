
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_CONTEXT_MODULES_STOREFRONT_STOREFRONT_CPP
        #define ORG_ALLBINARY_BUSINESS_CONTEXT_MODULES_STOREFRONT_STOREFRONT_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/business/context/modules/storefront/StoreFront.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Long.h"
        
#include <java/util/Calendar.h>

      
#include <java/util/HashMap.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
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

      
#include <org/allbinary/logic/StdUtil.h>

      
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
        #include "org/allbinary/business/context/modules/storefront/StoreFrontInterface.h"
#include "org/allbinary/business/context/modules/storefront/StoreFrontData.h"

const std::string StoreFront::RESOURCES = JavaString::valueOf(" Resources") +JavaString::valueOf(AbPathData::getInstance()->SEPARATOR);

StoreFront::StoreFront() : logUtil(LogUtil::getInstance()), commonStrings(CommonStrings::getInstance()), directory(Directory::getInstance()), stringUtil(StringUtil::getInstance()), abPathUtil(AbPathUtil::getInstance()), name(this->stringUtil->EMPTY_STRING), basketName(this->stringUtil->EMPTY_STRING), homeHostName(this->stringUtil->EMPTY_STRING), homeHostNamePath(this->abPathUtil->NO_ABPATH), hostName(this->stringUtil->EMPTY_STRING), hostNamePath(this->abPathUtil->NO_ABPATH), testHomeHostName(this->stringUtil->EMPTY_STRING), testHomeHostNamePath(this->abPathUtil->NO_ABPATH), testHostName(this->stringUtil->EMPTY_STRING), testHostNamePath(this->abPathUtil->NO_ABPATH), imagePath(this->abPathUtil->NO_ABPATH), staticPath(this->abPathUtil->NO_ABPATH), categoryPath(this->abPathUtil->NO_ABPATH), inventoryControl(this->stringUtil->EMPTY_STRING), subStores(this->stringUtil->EMPTY_STRING), tagLocation(this->stringUtil->EMPTY_STRING), packageLocation(this->stringUtil->EMPTY_STRING), ftp(this->stringUtil->EMPTY_STRING), ftpPath(this->abPathUtil->NO_ABPATH), ftpUserName(this->stringUtil->EMPTY_STRING), ftpPassword(this->stringUtil->EMPTY_STRING), testFtp(this->stringUtil->EMPTY_STRING), testFtpPath(this->abPathUtil->NO_ABPATH), testFtpUserName(this->stringUtil->EMPTY_STRING), testFtpPassword(this->stringUtil->EMPTY_STRING), timeCreated(this->stringUtil->EMPTY_STRING), lastModified(this->stringUtil->EMPTY_STRING), EMPTY_STRING(StringUtil::getInstance()->EMPTY_STRING), ONE_EMPTY_STRING_ARRAY(StringUtil::getInstance()->ONE_EMPTY_STRING_ARRAY){
this->contextConfigurationInterface= new ContextConfiguration();
    
}


StoreFront::StoreFront(HttpServletRequest* request) : logUtil(LogUtil::getInstance()), commonStrings(CommonStrings::getInstance()), directory(Directory::getInstance()), stringUtil(StringUtil::getInstance()), abPathUtil(AbPathUtil::getInstance()), name(this->stringUtil->EMPTY_STRING), basketName(this->stringUtil->EMPTY_STRING), homeHostName(this->stringUtil->EMPTY_STRING), homeHostNamePath(this->abPathUtil->NO_ABPATH), hostName(this->stringUtil->EMPTY_STRING), hostNamePath(this->abPathUtil->NO_ABPATH), testHomeHostName(this->stringUtil->EMPTY_STRING), testHomeHostNamePath(this->abPathUtil->NO_ABPATH), testHostName(this->stringUtil->EMPTY_STRING), testHostNamePath(this->abPathUtil->NO_ABPATH), imagePath(this->abPathUtil->NO_ABPATH), staticPath(this->abPathUtil->NO_ABPATH), categoryPath(this->abPathUtil->NO_ABPATH), inventoryControl(this->stringUtil->EMPTY_STRING), subStores(this->stringUtil->EMPTY_STRING), tagLocation(this->stringUtil->EMPTY_STRING), packageLocation(this->stringUtil->EMPTY_STRING), ftp(this->stringUtil->EMPTY_STRING), ftpPath(this->abPathUtil->NO_ABPATH), ftpUserName(this->stringUtil->EMPTY_STRING), ftpPassword(this->stringUtil->EMPTY_STRING), testFtp(this->stringUtil->EMPTY_STRING), testFtpPath(this->abPathUtil->NO_ABPATH), testFtpUserName(this->stringUtil->EMPTY_STRING), testFtpPassword(this->stringUtil->EMPTY_STRING), timeCreated(this->stringUtil->EMPTY_STRING), lastModified(this->stringUtil->EMPTY_STRING), EMPTY_STRING(StringUtil::getInstance()->EMPTY_STRING), ONE_EMPTY_STRING_ARRAY(StringUtil::getInstance()->ONE_EMPTY_STRING_ARRAY){
this->getFormData((new RequestParams(request))->toHashMap());
    

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->EMAILLOGGING))
                        
                                    {
                                    this->logUtil->putF("TWB- needs update for adding and updating context configuration - currently defaults to admin context config", this, "StoreFront");
    

                                    }
                                
this->setContextConfigurationInterface(ContextConfigurationInterfaceFactory::getInstance()->getInstance("Admin"));
    
}


StoreFront::StoreFront(HashMap<Object*, Object*>* hashMap) : logUtil(LogUtil::getInstance()), commonStrings(CommonStrings::getInstance()), directory(Directory::getInstance()), stringUtil(StringUtil::getInstance()), abPathUtil(AbPathUtil::getInstance()), name(this->stringUtil->EMPTY_STRING), basketName(this->stringUtil->EMPTY_STRING), homeHostName(this->stringUtil->EMPTY_STRING), homeHostNamePath(this->abPathUtil->NO_ABPATH), hostName(this->stringUtil->EMPTY_STRING), hostNamePath(this->abPathUtil->NO_ABPATH), testHomeHostName(this->stringUtil->EMPTY_STRING), testHomeHostNamePath(this->abPathUtil->NO_ABPATH), testHostName(this->stringUtil->EMPTY_STRING), testHostNamePath(this->abPathUtil->NO_ABPATH), imagePath(this->abPathUtil->NO_ABPATH), staticPath(this->abPathUtil->NO_ABPATH), categoryPath(this->abPathUtil->NO_ABPATH), inventoryControl(this->stringUtil->EMPTY_STRING), subStores(this->stringUtil->EMPTY_STRING), tagLocation(this->stringUtil->EMPTY_STRING), packageLocation(this->stringUtil->EMPTY_STRING), ftp(this->stringUtil->EMPTY_STRING), ftpPath(this->abPathUtil->NO_ABPATH), ftpUserName(this->stringUtil->EMPTY_STRING), ftpPassword(this->stringUtil->EMPTY_STRING), testFtp(this->stringUtil->EMPTY_STRING), testFtpPath(this->abPathUtil->NO_ABPATH), testFtpUserName(this->stringUtil->EMPTY_STRING), testFtpPassword(this->stringUtil->EMPTY_STRING), timeCreated(this->stringUtil->EMPTY_STRING), lastModified(this->stringUtil->EMPTY_STRING), EMPTY_STRING(StringUtil::getInstance()->EMPTY_STRING), ONE_EMPTY_STRING_ARRAY(StringUtil::getInstance()->ONE_EMPTY_STRING_ARRAY){
this->getFormData(hashMap);
    

    std::string domDocumentString = JavaBoxes::unbox<std::string>(hashMap->get(StoreFrontData::getInstance()->CONFIGURATION));;
    

                        if(false)
                        
                                    {
                                    
    Document* document = DomDocumentHelper::create(domDocumentString);;
    
this->setContextConfigurationInterface(ContextConfigurationInterfaceFactory::getInstance()->getInstance(document));
    

                                    }
                                
}


    auto StoreFront::isColumn(std::string columnName) -> bool{

                        if(columnName.compare(StoreFrontData::getInstance()->NAME) == 0 || columnName.compare(UserData::MAINEMAIL) == 0)
                        
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
            
    auto StoreFront::createPath(std::string key, HashMap<Object*, Object*>* hashMap) -> AbPath*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new AbPath(this->create(this->EMPTY_STRING, key, hashMap), StringUtil::getInstance()->EMPTY_STRING);
    
}


                //@Throws(Exception.constructor)
            
    auto StoreFront::createPath(std::string append, std::string key, HashMap<Object*, Object*>* hashMap) -> AbPath*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new AbPath(this->create(append, key, hashMap), StringUtil::getInstance()->EMPTY_STRING);
    
}


    auto StoreFront::get(std::string key, HashMap<Object*, Object*>* hashMap) -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->create(this->EMPTY_STRING, key, hashMap);;
    
}


    auto StoreFront::create(std::string append, std::string key, HashMap<Object*, Object*>* hashMap) -> std::string{

    std::string path = JavaBoxes::unbox<std::string>(hashMap->get(key));;
    

                        if(StringValidationUtil::getInstance()->isEmpty(path))
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->EMPTY_STRING;
    

                                    }
                                
                        else {
                            
                        if(this->isColumn(path))
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return JavaString::valueOf(JavaBoxes::unbox<std::string>(hashMap->get(path))) +JavaString::valueOf(append);
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return path;
    

                        }
                            

                        }
                            
}


                //@Throws(Exception.constructor)
            
    auto StoreFront::getFormData(HashMap<Object*, Object*>* storeHashMap) -> void{

    StoreFrontData* storeFrontData = StoreFrontData::getInstance();;
    
this->name= JavaBoxes::unbox<std::string>(storeHashMap->get(storeFrontData->NAME));
    
this->basketName= JavaBoxes::unbox<std::string>(storeHashMap->get(storeFrontData->NAME));
    
this->homeHostName= JavaBoxes::unbox<std::string>(storeHashMap->get(storeFrontData->HOMEHOSTNAME));
    
this->homeHostNamePath= this->createPath(storeFrontData->HOMEHOSTNAMEPATH, storeHashMap);
    
this->hostName= JavaBoxes::unbox<std::string>(storeHashMap->get(storeFrontData->HOSTNAME));
    
this->hostNamePath= this->createPath(storeFrontData->HOSTNAMEPATH, storeHashMap);
    
this->testHomeHostName= JavaBoxes::unbox<std::string>(storeHashMap->get(storeFrontData->TESTHOMEHOSTNAME));
    
this->testHomeHostNamePath= this->createPath(storeFrontData->TESTHOMEHOSTNAMEPATH, storeHashMap);
    
this->testHostName= JavaBoxes::unbox<std::string>(storeHashMap->get(storeFrontData->TESTHOSTNAME));
    
this->testHostNamePath= this->createPath(storeFrontData->TESTHOSTNAMEPATH, storeHashMap);
    
this->imagePath= this->createPath(StoreFront::RESOURCES, storeFrontData->IMAGEPATH, storeHashMap);
    
this->staticPath= this->createPath(JavaString::valueOf(" Products") +JavaString::valueOf(AbPathData::getInstance()->SEPARATOR), storeFrontData->STATICPATH, storeHashMap);
    
this->categoryPath= this->createPath(StoreFront::RESOURCES, storeFrontData->CATEGORYPATH, storeHashMap);
    
this->inventoryControl= JavaBoxes::unbox<std::string>(storeHashMap->get(storeFrontData->INVENTORYCONTROL));
    
this->subStores= JavaBoxes::unbox<std::string>(storeHashMap->get(storeFrontData->SUBSTORES));
    
this->tagLocation= JavaBoxes::unbox<std::string>(storeHashMap->get(storeFrontData->TAGLOCATION));
    
this->packageLocation= JavaBoxes::unbox<std::string>(storeHashMap->get(storeFrontData->PACKAGELOCATION));
    
this->ftp= JavaBoxes::unbox<std::string>(storeHashMap->get(storeFrontData->FTP));
    
this->ftpPath= this->createPath(storeFrontData->FTPPATH, storeHashMap);
    
this->ftpUserName= JavaBoxes::unbox<std::string>(storeHashMap->get(storeFrontData->FTPUSERNAME));
    
this->ftpPassword= JavaBoxes::unbox<std::string>(storeHashMap->get(storeFrontData->FTPPASSWORD));
    
this->testFtp= JavaBoxes::unbox<std::string>(storeHashMap->get(storeFrontData->TESTFTP));
    
this->testFtpPath= this->createPath(storeFrontData->TESTFTPPATH, storeHashMap);
    
this->testFtpUserName= JavaBoxes::unbox<std::string>(storeHashMap->get(storeFrontData->TESTFTPUSERNAME));
    
this->testFtpPassword= JavaBoxes::unbox<std::string>(storeHashMap->get(storeFrontData->TESTFTPPASSWORD));
    
this->timeCreated= JavaBoxes::unbox<std::string>(storeHashMap->get(EntryData::getInstance()->TIMECREATED));
    
this->lastModified= JavaBoxes::unbox<std::string>(storeHashMap->get(EntryData::getInstance()->LASTMODIFIED));
    
}


    auto StoreFront::isNameValid() -> bool{

                        if(!StringValidationUtil::getInstance()->isValidRequired(this->name, this->MINSTORENAMELENGTH, this->MAXCHAR))
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean::FALSE;
    

                                    }
                                
                        else {
                            
    bool isEscapedCharactersContained = false;;
    

    std::string storeNameEscaped = StringEscapeUtils::escapeHtml3(this->name);;
    

                        if(this->name.compare(storeNameEscaped) != 0)
                        
                                    {
                                    isEscapedCharactersContained= true;
    

                                    }
                                

    StringValidationUtil* stringValidationUtil = StringValidationUtil::getInstance();;
    

    bool isSpacesContained = false;;
    

                        if(stringValidationUtil->containsSpaces(this->name))
                        
                                    {
                                    isSpacesContained= true;
    

                                    }
                                

                        if(isSpacesContained || isEscapedCharactersContained)
                        
                                    {
                                    
    HashMap<Object*, Object*>* hashMap = SpecialCharacterUtil::getHashMap();;
    
hashMap->put(
                                                {
                                                    CommonSeps::getInstance()->SPACE
                                                }, this->ONE_EMPTY_STRING_ARRAY);
    
this->name= (new Replace(hashMap))->all(this->name);
    

                                    }
                                

                        }
                            



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean::TRUE;
    
}


    auto StoreFront::isValid() -> bool{

    bool valid = Boolean::TRUE;;
    
valid= this->isNameValid();
    

    StringValidationUtil* stringValidationUtil = StringValidationUtil::getInstance();;
    

                        if(!stringValidationUtil->isValidRequired(this->basketName, this->MINCHAR, this->MAXCHAR))
                        
                                    {
                                    valid= Boolean::FALSE;
    

                                    }
                                

                        if(!stringValidationUtil->isValidRequired(this->homeHostName, this->MINCHAR, this->MAXCHAR))
                        
                                    {
                                    valid= Boolean::FALSE;
    

                                    }
                                

                        if(!stringValidationUtil->isValidNotRequired(this->homeHostNamePath->toString(), this->MINCHAR, this->MAXCHAR))
                        
                                    {
                                    valid= Boolean::FALSE;
    

                                    }
                                

                        if(!stringValidationUtil->isValidRequired(this->hostName, this->MINCHAR, this->MAXCHAR))
                        
                                    {
                                    valid= Boolean::FALSE;
    

                                    }
                                

                        if(!stringValidationUtil->isValidRequired(this->hostNamePath->toString(), this->MINCHAR, this->MAXCHAR))
                        
                                    {
                                    valid= Boolean::FALSE;
    

                                    }
                                

                        if(!stringValidationUtil->isValidNotRequired(this->testHomeHostName, this->MINCHAR, this->MAXCHAR))
                        
                                    {
                                    valid= Boolean::FALSE;
    

                                    }
                                

                        if(!stringValidationUtil->isValidNotRequired(this->testHomeHostNamePath->toString(), this->MINCHAR, this->MAXCHAR))
                        
                                    {
                                    valid= Boolean::FALSE;
    

                                    }
                                

                        if(!stringValidationUtil->isValidNotRequired(this->testHostName, this->MINCHAR, this->MAXCHAR))
                        
                                    {
                                    valid= Boolean::FALSE;
    

                                    }
                                

                        if(!stringValidationUtil->isValidNotRequired(this->testHostNamePath->toString(), this->MINCHAR, this->MAXCHAR))
                        
                                    {
                                    valid= Boolean::FALSE;
    

                                    }
                                

                        if(!stringValidationUtil->isValidRequired(this->imagePath->toString(), this->MINCHAR, this->MAXCHAR))
                        
                                    {
                                    valid= Boolean::FALSE;
    

                                    }
                                

                        if(!stringValidationUtil->isValidRequired(this->staticPath->toString(), this->MINCHAR, this->MAXCHAR))
                        
                                    {
                                    valid= Boolean::FALSE;
    

                                    }
                                

                        if(!stringValidationUtil->isValidRequired(this->categoryPath->toString(), this->MINCHAR, this->MAXCHAR))
                        
                                    {
                                    valid= Boolean::FALSE;
    

                                    }
                                

                        if(!stringValidationUtil->isValidRequired(this->inventoryControl, this->MINCHAR, this->MAXCHAR))
                        
                                    {
                                    valid= Boolean::FALSE;
    

                                    }
                                

                        if(!stringValidationUtil->isValidNotRequired(this->subStores, this->MINCHAR, this->MAXCHAR))
                        
                                    {
                                    valid= Boolean::FALSE;
    

                                    }
                                

                        if(!stringValidationUtil->isValidNotRequired(this->tagLocation, this->MINCHAR, this->MAXCHAR))
                        
                                    {
                                    valid= Boolean::FALSE;
    

                                    }
                                

                        if(!stringValidationUtil->isValidRequired(this->packageLocation, this->MINCHAR, this->MAXCHAR))
                        
                                    {
                                    valid= Boolean::FALSE;
    

                                    }
                                

                        if(!stringValidationUtil->isValidNotRequired(this->ftp, this->MINCHAR, this->MAXCHAR))
                        
                                    {
                                    valid= Boolean::FALSE;
    

                                    }
                                

                        if(!stringValidationUtil->isValidNotRequired(this->ftpPath->toString(), this->MINCHAR, this->MAXCHAR))
                        
                                    {
                                    valid= Boolean::FALSE;
    

                                    }
                                

                        if(!stringValidationUtil->isValidNotRequired(this->ftpUserName, this->MINCHAR, this->MAXCHAR))
                        
                                    {
                                    valid= Boolean::FALSE;
    

                                    }
                                

                        if(!stringValidationUtil->isValidNotRequired(this->ftpPassword, this->MINCHAR, this->MAXCHAR))
                        
                                    {
                                    valid= Boolean::FALSE;
    

                                    }
                                

                        if(!stringValidationUtil->isValidNotRequired(this->testFtp, this->MINCHAR, this->MAXCHAR))
                        
                                    {
                                    valid= Boolean::FALSE;
    

                                    }
                                

                        if(!stringValidationUtil->isValidNotRequired(this->testFtpPath->toString(), this->MINCHAR, this->MAXCHAR))
                        
                                    {
                                    valid= Boolean::FALSE;
    

                                    }
                                

                        if(!stringValidationUtil->isValidNotRequired(this->testFtpUserName, this->MINCHAR, this->MAXCHAR))
                        
                                    {
                                    valid= Boolean::FALSE;
    

                                    }
                                

                        if(!stringValidationUtil->isValidNotRequired(this->testFtpPassword, this->MINCHAR, this->MAXCHAR))
                        
                                    {
                                    valid= Boolean::FALSE;
    

                                    }
                                

                        if(valid == true)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean::TRUE;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean::FALSE;
    

                        }
                            
}


    auto StoreFront::nameValidationInfo() -> std::string{

    StringValidationUtil* stringValidationUtil = StringValidationUtil::getInstance();;
    

                        if(!stringValidationUtil->isValidRequired(this->name, this->MINCHAR, this->MAXCHAR))
                        
                                    {
                                    
    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append("Name is invalid. Must be < ");
    
stringBuffer->appendint(this->MAXCHAR);
    
stringBuffer->append(" and > 0 characters.<br>");
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer->toString();;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->EMPTY_STRING;
    
}


    auto StoreFront::validationInfo() -> std::string{

        try {
            
    StringValidationUtil* stringValidationUtil = StringValidationUtil::getInstance();;
    

    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append(this->nameValidationInfo());
    

                        if(!stringValidationUtil->isValidRequired(this->basketName, this->MINCHAR, this->MAXCHAR))
                        
                                    {
                                    stringBuffer->append("Basket name is invalid. Must be < ");
    
stringBuffer->appendint(this->MAXCHAR);
    
stringBuffer->append(" and > 0 characters.<br>");
    

                                    }
                                

                        if(!stringValidationUtil->isValidRequired(this->homeHostName, this->MINCHAR, this->MAXCHAR))
                        
                                    {
                                    stringBuffer->append("Home host name is invalid. Must be < ");
    
stringBuffer->appendint(this->MAXCHAR);
    
stringBuffer->append(" and > 0 characters.<br>");
    

                                    }
                                

                        if(!stringValidationUtil->isValidNotRequired(this->homeHostNamePath->toString(), this->MINCHAR, this->MAXCHAR))
                        
                                    {
                                    stringBuffer->append("Home host name path is invalid. Must be < ");
    
stringBuffer->appendint(this->MAXCHAR);
    
stringBuffer->append(" and > 0 characters.<br>");
    

                                    }
                                

                        if(!stringValidationUtil->isValidRequired(this->hostName, this->MINCHAR, this->MAXCHAR))
                        
                                    {
                                    stringBuffer->append("Host name is invalid. Must be < ");
    
stringBuffer->appendint(this->MAXCHAR);
    
stringBuffer->append(" and > 0 characters.<br>");
    

                                    }
                                

                        if(!stringValidationUtil->isValidRequired(this->hostNamePath->toString(), this->MINCHAR, this->MAXCHAR))
                        
                                    {
                                    stringBuffer->append("Host name path is invalid. Must be < ");
    
stringBuffer->appendint(this->MAXCHAR);
    
stringBuffer->append(" and > 0 characters.<br>");
    

                                    }
                                

                        if(!stringValidationUtil->isValidNotRequired(this->testHomeHostName, this->MINCHAR, this->MAXCHAR))
                        
                                    {
                                    stringBuffer->append(JavaString::valueOf(JavaString::valueOf("Test home host name is invalid. Must be < ") +JavaString::valueOf(this->MAXCHAR)) +JavaString::valueOf(" and > 0 characters.<br>"));
    

                                    }
                                

                        if(!stringValidationUtil->isValidNotRequired(this->testHomeHostNamePath->toString(), this->MINCHAR, this->MAXCHAR))
                        
                                    {
                                    stringBuffer->append(JavaString::valueOf(JavaString::valueOf("Test home host name path is invalid. Must be < ") +JavaString::valueOf(this->MAXCHAR)) +JavaString::valueOf(" and > 0 characters.<br>"));
    

                                    }
                                

                        if(!stringValidationUtil->isValidNotRequired(this->testHostName, this->MINCHAR, this->MAXCHAR))
                        
                                    {
                                    stringBuffer->append(JavaString::valueOf(JavaString::valueOf("Test host name is invalid. Must be < ") +JavaString::valueOf(this->MAXCHAR)) +JavaString::valueOf(" and > 0 characters.<br>"));
    

                                    }
                                

                        if(!stringValidationUtil->isValidNotRequired(this->testHostNamePath->toString(), this->MINCHAR, this->MAXCHAR))
                        
                                    {
                                    stringBuffer->append(JavaString::valueOf(JavaString::valueOf("Test host name path is invalid. Must be < ") +JavaString::valueOf(this->MAXCHAR)) +JavaString::valueOf(" and > 0 characters.<br>"));
    

                                    }
                                

                        if(!stringValidationUtil->isValidRequired(this->imagePath->toString(), this->MINCHAR, this->MAXCHAR))
                        
                                    {
                                    stringBuffer->append(JavaString::valueOf(JavaString::valueOf("Image path is invalid. Must be < ") +JavaString::valueOf(this->MAXCHAR)) +JavaString::valueOf(" and > 0 characters.<br>"));
    

                                    }
                                

                        if(!stringValidationUtil->isValidRequired(this->staticPath->toString(), this->MINCHAR, this->MAXCHAR))
                        
                                    {
                                    stringBuffer->append(JavaString::valueOf(JavaString::valueOf("Static path is invalid. Must be < ") +JavaString::valueOf(this->MAXCHAR)) +JavaString::valueOf(" and > 0 characters.<br>"));
    

                                    }
                                

                        if(!stringValidationUtil->isValidRequired(this->categoryPath->toString(), this->MINCHAR, this->MAXCHAR))
                        
                                    {
                                    stringBuffer->append(JavaString::valueOf(JavaString::valueOf("Category path is invalid. Must be < ") +JavaString::valueOf(this->MAXCHAR)) +JavaString::valueOf(" and > 0 characters.<br>"));
    

                                    }
                                

                        if(!stringValidationUtil->isValidRequired(this->inventoryControl, this->MINCHAR, this->MAXCHAR))
                        
                                    {
                                    stringBuffer->append(JavaString::valueOf(JavaString::valueOf("Inventory control is invalid. Must be < ") +JavaString::valueOf(this->MAXCHAR)) +JavaString::valueOf(" and > 0 characters.<br>"));
    

                                    }
                                

                        if(!stringValidationUtil->isValidNotRequired(this->subStores, this->MINCHAR, this->MAXCHAR))
                        
                                    {
                                    stringBuffer->append(JavaString::valueOf(JavaString::valueOf("Sub stores is invalid. Must be < ") +JavaString::valueOf(this->MAXCHAR)) +JavaString::valueOf(" and > 0 characters.<br>"));
    

                                    }
                                

                        if(!stringValidationUtil->isValidNotRequired(this->tagLocation, this->MINCHAR, this->MAXCHAR))
                        
                                    {
                                    stringBuffer->append(JavaString::valueOf(JavaString::valueOf("Tag location is invalid. Must be < ") +JavaString::valueOf(this->MAXCHAR)) +JavaString::valueOf(" and > 0 characters.<br>"));
    

                                    }
                                

                        if(!stringValidationUtil->isValidRequired(this->packageLocation, this->MINCHAR, this->MAXCHAR))
                        
                                    {
                                    stringBuffer->append(JavaString::valueOf(JavaString::valueOf("Package location is invalid. Must be < ") +JavaString::valueOf(this->MAXCHAR)) +JavaString::valueOf(" and > 0 characters.<br>"));
    

                                    }
                                

                        if(!stringValidationUtil->isValidNotRequired(this->ftp, this->MINCHAR, this->MAXCHAR))
                        
                                    {
                                    stringBuffer->append(JavaString::valueOf(JavaString::valueOf("Ftp is invalid. Must be < ") +JavaString::valueOf(this->MAXCHAR)) +JavaString::valueOf(" and > 0 characters.<br>"));
    

                                    }
                                

                        if(!stringValidationUtil->isValidNotRequired(this->ftpPath->toString(), this->MINCHAR, this->MAXCHAR))
                        
                                    {
                                    stringBuffer->append(JavaString::valueOf(JavaString::valueOf("Ftp path is invalid. Must be < ") +JavaString::valueOf(this->MAXCHAR)) +JavaString::valueOf(" and > 0 characters.<br>"));
    

                                    }
                                

                        if(!stringValidationUtil->isValidNotRequired(this->ftpUserName, this->MINCHAR, this->MAXCHAR))
                        
                                    {
                                    stringBuffer->append(JavaString::valueOf(JavaString::valueOf("Ftp username is invalid. Must be < ") +JavaString::valueOf(this->MAXCHAR)) +JavaString::valueOf(" and > 0 characters.<br>"));
    

                                    }
                                

                        if(!stringValidationUtil->isValidNotRequired(this->ftpPassword, this->MINCHAR, this->MAXCHAR))
                        
                                    {
                                    stringBuffer->append(JavaString::valueOf(JavaString::valueOf("Ftp password is invalid. Must be < ") +JavaString::valueOf(this->MAXCHAR)) +JavaString::valueOf(" and > 0 characters.<br>"));
    

                                    }
                                

                        if(!stringValidationUtil->isValidNotRequired(this->testFtp, this->MINCHAR, this->MAXCHAR))
                        
                                    {
                                    stringBuffer->append(JavaString::valueOf(JavaString::valueOf("Test ftp is invalid. Must be < ") +JavaString::valueOf(this->MAXCHAR)) +JavaString::valueOf(" and > 0 characters.<br>"));
    

                                    }
                                

                        if(!stringValidationUtil->isValidNotRequired(this->testFtpPath->toString(), this->MINCHAR, this->MAXCHAR))
                        
                                    {
                                    stringBuffer->append(JavaString::valueOf(JavaString::valueOf("Test ftp Path is invalid. Must be < ") +JavaString::valueOf(this->MAXCHAR)) +JavaString::valueOf(" and > 0 characters.<br>"));
    

                                    }
                                

                        if(!stringValidationUtil->isValidNotRequired(this->testFtpUserName, this->MINCHAR, this->MAXCHAR))
                        
                                    {
                                    stringBuffer->append(JavaString::valueOf(JavaString::valueOf("Test ftp username is invalid. Must be < ") +JavaString::valueOf(this->MAXCHAR)) +JavaString::valueOf(" and > 0 characters.<br>"));
    

                                    }
                                

                        if(!stringValidationUtil->isValidNotRequired(this->testFtpPassword, this->MINCHAR, this->MAXCHAR))
                        
                                    {
                                    stringBuffer->append(JavaString::valueOf(JavaString::valueOf("Test ftp password is invalid. Must be < ") +JavaString::valueOf(this->MAXCHAR)) +JavaString::valueOf(" and > 0 characters.<br>"));
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer->toString();;
    

                //: 
} catch(Exception& e) 
            {

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->SQLTAGSERROR))
                        
                                    {
                                    this->logUtil->put("Failed to generate validation error info", this, "validationInfo()", &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return "Error Validating Form";
    
}

}


    auto StoreFront::getTestHtmlPath() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return org.allbinary->globals->URLGLOBALS->getTestHtmlPath() +this->getCurrentHostNamePath();
    
}


    auto StoreFront::getCurrentHostName() -> std::string{

    std::string location = this->EMPTY_STRING;;
    

                        if(org.allbinary->globals->URLGLOBALS->isTestingMode())
                        
                                    {
                                    location= this->getTestHostName();
    

                                    }
                                
                        else {
                            location= this->getHostName();
    

                        }
                            



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return location;
    
}


    auto StoreFront::getCurrentHostNamePath() -> std::string{

    std::string location = this->EMPTY_STRING;;
    

                        if(org.allbinary->globals->URLGLOBALS->isTestingMode())
                        
                                    {
                                    location= this->getTestHostNamePath();
    

                                    }
                                
                        else {
                            location= this->getHostNamePath();
    

                        }
                            



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return location;
    
}


    auto StoreFront::getCurrentHomeHostName() -> std::string{

    std::string location = this->EMPTY_STRING;;
    

                        if(org.allbinary->globals->URLGLOBALS->isTestingMode())
                        
                                    {
                                    location= this->getTestHomeHostName();
    

                                    }
                                
                        else {
                            location= this->getHomeHostName();
    

                        }
                            



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return location;
    
}


    auto StoreFront::getCurrentHomeHostNamePath() -> std::string{

    std::string location = this->EMPTY_STRING;;
    

                        if(org.allbinary->globals->URLGLOBALS->isTestingMode())
                        
                                    {
                                    location= this->getTestHomeHostNamePath();
    

                                    }
                                
                        else {
                            location= this->getHomeHostNamePath();
    

                        }
                            



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return location;
    
}


    auto StoreFront::getName() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->name;
    
}


    auto StoreFront::getBasketName() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->basketName;
    
}


    auto StoreFront::getHomeHostName() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->homeHostName;
    
}


    auto StoreFront::getHomeHostNamePath() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->homeHostNamePath->toString();;
    
}


    auto StoreFront::getHostName() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->hostName;
    
}


    auto StoreFront::getHostNamePath() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->hostNamePath->toString();;
    
}


    auto StoreFront::getTestHomeHostName() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->testHomeHostName;
    
}


    auto StoreFront::getTestHomeHostNamePath() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->testHomeHostNamePath->toString();;
    
}


    auto StoreFront::getTestHostName() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->testHostName;
    
}


    auto StoreFront::getTestHostNamePath() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->testHostNamePath->toString();;
    
}


    auto StoreFront::getStaticPath() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->staticPath->toString();;
    
}


    auto StoreFront::getCategoryPath() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->categoryPath->toString();;
    
}


    auto StoreFront::getInventoryControl() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->inventoryControl;
    
}


                //@Throws(Exception.constructor)
            
    auto StoreFront::getSubStores() -> BasicArrayList*{

        try {
            
    Tokenizer* tokenizer = new Tokenizer(CommonSeps::getInstance()->SEMICOLON);;
    

    BasicArrayList* subStoreVector = tokenizer->getTokensFromString(this->subStores, new BasicArrayListD());;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return subStoreVector;
    

                //: 
} catch(Exception& e) 
            {



                            throw e;
                    
}

}


    auto StoreFront::getTagLocation() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->tagLocation;
    
}


    auto StoreFront::getPackageLocation() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->packageLocation;
    
}


    auto StoreFront::getFtp() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->ftp;
    
}


    auto StoreFront::getFtpUserName() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->ftpUserName;
    
}


    auto StoreFront::getFtpPassword() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->ftpPassword;
    
}


    auto StoreFront::getTestFtp() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->testFtp;
    
}


    auto StoreFront::getTestFtpUserName() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->testFtpUserName;
    
}


    auto StoreFront::getTestFtpPassword() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->testFtpPassword;
    
}


    auto StoreFront::getFtpPath() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->ftpPath->toString();;
    
}


    auto StoreFront::getTestFtpPath() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->testFtpPath->toString();;
    
}


    auto StoreFront::getTimeCreated() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->timeCreated;
    
}


    auto StoreFront::getLastModified() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->lastModified;
    
}


    auto StoreFront::setName(std::string value) -> void{
this->name= value;
    
}


    auto StoreFront::setBasketName(std::string value) -> void{
this->basketName= value;
    
}


    auto StoreFront::setHomeHostName(std::string value) -> void{
this->homeHostName= value;
    
}


                //@Throws(Exception.constructor)
            
    auto StoreFront::setHomeHostNamePath(std::string value) -> void{
this->homeHostNamePath= new AbPath(value, StringUtil::getInstance()->EMPTY_STRING);
    
}


    auto StoreFront::setHostName(std::string value) -> void{
this->hostName= value;
    
}


                //@Throws(Exception.constructor)
            
    auto StoreFront::setHostNamePath(std::string value) -> void{
this->hostNamePath= new AbPath(value, StringUtil::getInstance()->EMPTY_STRING);
    
}


    auto StoreFront::setTestHomeHostName(std::string value) -> void{
this->testHomeHostName= value;
    
}


                //@Throws(Exception.constructor)
            
    auto StoreFront::setTestHomeHostNamePath(std::string value) -> void{
this->testHomeHostNamePath= new AbPath(value, StringUtil::getInstance()->EMPTY_STRING);
    
}


    auto StoreFront::setTestHostName(std::string value) -> void{
this->testHostName= value;
    
}


                //@Throws(Exception.constructor)
            
    auto StoreFront::setTestHostNamePath(std::string value) -> void{
this->testHostNamePath= new AbPath(value, StringUtil::getInstance()->EMPTY_STRING);
    
}


                //@Throws(Exception.constructor)
            
    auto StoreFront::setImagePath(std::string value) -> void{
this->imagePath= new AbPath(value, StringUtil::getInstance()->EMPTY_STRING);
    
}


                //@Throws(Exception.constructor)
            
    auto StoreFront::setStaticPath(std::string value) -> void{
this->staticPath= new AbPath(value, StringUtil::getInstance()->EMPTY_STRING);
    
}


                //@Throws(Exception.constructor)
            
    auto StoreFront::setCategoryPath(std::string value) -> void{
this->categoryPath= new AbPath(value, StringUtil::getInstance()->EMPTY_STRING);
    
}


    auto StoreFront::setSubStores(std::string value) -> void{
this->subStores= value;
    
}


    auto StoreFront::setTagLocation(std::string value) -> void{
this->tagLocation= value;
    
}


    auto StoreFront::setPackageLocation(std::string value) -> void{
this->packageLocation= value;
    
}


    auto StoreFront::setInventoryControl(std::string value) -> void{
this->inventoryControl= value;
    
}


    auto StoreFront::getPackageLocation(std::string value) -> void{
this->packageLocation= value;
    
}


    auto StoreFront::setFtp(std::string value) -> void{
this->ftp= value;
    
}


    auto StoreFront::setFtpUserName(std::string value) -> void{
this->ftpUserName= value;
    
}


    auto StoreFront::setFtpPassword(std::string value) -> void{
this->ftpPassword= value;
    
}


    auto StoreFront::setTestFtp(std::string value) -> void{
this->testFtp= value;
    
}


    auto StoreFront::setTestFtpUserName(std::string value) -> void{
this->testFtpUserName= value;
    
}


    auto StoreFront::setTestFtpPassword(std::string value) -> void{
this->testFtpPassword= value;
    
}


    auto StoreFront::setTimeCreated(std::string value) -> void{
this->timeCreated= value;
    
}


    auto StoreFront::setLastModified(std::string value) -> void{
this->lastModified= value;
    
}


                //@Throws(Exception.constructor)
            
    auto StoreFront::setFtpPath(std::string value) -> void{
this->ftpPath= new AbPath(value, StringUtil::getInstance()->EMPTY_STRING);
    
}


                //@Throws(Exception.constructor)
            
    auto StoreFront::setTestFtpPath(std::string value) -> void{
this->testFtpPath= new AbPath(value, StringUtil::getInstance()->EMPTY_STRING);
    
}


                //@Throws(Exception.constructor)
            
    auto StoreFront::createDirectories() -> bool{

    AbPath* storeAbPath = new AbPath(URLGLOBALS::getWebappPath() +this->getCurrentHomeHostNamePath(), StringUtil::getInstance()->EMPTY_STRING);;
    

                        if(!this->directory->create(storeAbPath))
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    

                                    }
                                

                        if(!this->directory->create(new AbPath(storeAbPath +this->getCategoryPath(), StringUtil::getInstance()->EMPTY_STRING)))
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    

                                    }
                                

                        if(!this->directory->create(new AbPath(storeAbPath +this->getStaticPath(), StringUtil::getInstance()->EMPTY_STRING)))
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    
}


                //@Throws(Exception.constructor)
            
    auto StoreFront::install(int32_t current, int32_t total) -> void{

        try {
            
                        if(!this->createDirectories())
                        
                                    {
                                    


                            throw Exception("Unable to create store directories");
                    

                                    }
                                

    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->delete_(0, stringBuffer->length());
    
stringBuffer->append(URLGLOBALS::getMainPath());
    
stringBuffer->append(FREEBLISKET_PATH_GLOBALS::getInstance()->XSLPATH);
    

    std::string viewPath = stringBuffer->toString();;
    
stringBuffer->delete_(0, stringBuffer->length());
    
stringBuffer->append(viewPath);
    
stringBuffer->append(FREEBLISKET_PATH_GLOBALS::getInstance()->INSTALLPATH);
    

    AbPath* fromDirectoryAbPath = new AbPath(stringBuffer->toString(), StringUtil::getInstance()->EMPTY_STRING);;
    
stringBuffer->delete_(0, stringBuffer->length());
    
stringBuffer->append(viewPath);
    
stringBuffer->append("special");
    
stringBuffer->append(AbPathData::getInstance()->SEPARATOR);
    

    AbPath* fromSpecialDirectoryAbPath = new AbPath(stringBuffer->toString(), StringUtil::getInstance()->EMPTY_STRING);;
    
stringBuffer->delete_(0, stringBuffer->length());
    
stringBuffer->append(viewPath);
    
stringBuffer->append(this->getName());
    
stringBuffer->append(AbPathData::getInstance()->SEPARATOR);
    

    AbPath* toDirectoryAbPath = new AbPath(stringBuffer->toString(), StringUtil::getInstance()->EMPTY_STRING);;
    

                        if(current == 0)
                        
                                    {
                                    
                        if(!this->directory->create(toDirectoryAbPath))
                        
                                    {
                                    


                            throw Exception(JavaString::valueOf("Unable to create store view directory: ") +JavaString::valueOf(toDirectoryAbPath->toString()));
                    

                                    }
                                

                                    }
                                

    int32_t viewTotal = (total *85) /100;;
    

    int32_t installTotal = (total *93) /100;;
    

                        if(current < viewTotal)
                        
                                    {
                                    
    AbFile* file = AbFile::createAbFileFromAbPath(fromSpecialDirectoryAbPath);;
    

                        if(file->isDirectory())
                        
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
} catch(Exception& e) 
            {

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->SQLTAGSERROR))
                        
                                    {
                                    this->logUtil->put(this->commonStrings->EXCEPTION, this, "install()", &e);
    

                                    }
                                



                            throw e;
                    
}

}


                //@Throws(Exception.constructor)
            
    auto StoreFront::installViews(AbPath* fromDirectoryAbPath, AbPath* toDirectoryAbPath, int32_t current, int32_t total) -> void{
FileUtil::getInstance()->copyDirectoryPortion(fromDirectoryAbPath, toDirectoryAbPath, true, false, current, total);
    
}


                //@Throws(Exception.constructor)
            
    auto StoreFront::installResources(AbPath* fromDirectoryAbPath, int32_t current, int32_t total) -> void{

    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append(fromDirectoryAbPath->toString());
    
stringBuffer->append(AbPathData::getInstance()->SEPARATOR);
    
stringBuffer->append("Resources");
    
stringBuffer->append(AbPathData::getInstance()->SEPARATOR);
    

    AbPath* installCategoryAbPath = new AbPath(stringBuffer->toString(), StringUtil::getInstance()->EMPTY_STRING);;
    
stringBuffer->delete_(0, stringBuffer->length());
    
stringBuffer->append(URLGLOBALS::getMainPath());
    
stringBuffer->append(this->getCurrentHomeHostNamePath());
    
stringBuffer->append(AbPathData::getInstance()->SEPARATOR);
    
stringBuffer->append(this->getCategoryPath());
    

    AbPath* categoryAbPath = new AbPath(stringBuffer->toString(), StringUtil::getInstance()->EMPTY_STRING);;
    
FileUtil::getInstance()->copyDirectoryPortion(installCategoryAbPath, categoryAbPath, true, false, current, total);
    
}


                //@Throws(Exception.constructor)
            
    auto StoreFront::installMedia(AbPath* fromDirectoryAbPath, int32_t current, int32_t total) -> void{

    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append(fromDirectoryAbPath->toString());
    
stringBuffer->append(AbPathData::getInstance()->SEPARATOR);
    
stringBuffer->append(FREEBLISKET_PATH_GLOBALS::getInstance()->TEMPLATEPATH);
    
stringBuffer->append("images");
    
stringBuffer->append(AbPathData::getInstance()->SEPARATOR);
    

    AbPath* viewStoreImagesDirectoryAbPath = new AbPath(stringBuffer->toString(), StringUtil::getInstance()->EMPTY_STRING);;
    

    AbPath* storeAbPath = new AbPath(URLGLOBALS::getWebappPath() +this->getCurrentHomeHostNamePath(), StringUtil::getInstance()->EMPTY_STRING);;
    
FileUtil::getInstance()->copyDirectoryPortion(viewStoreImagesDirectoryAbPath, storeAbPath, true, false, current, total);
    
}


                //@Throws(Exception.constructor)
            
    auto StoreFront::toVector() -> BasicArrayList*{

    BasicArrayList* dataVector = new BasicArrayListD();;
    
dataVector->add(this->name);
    
dataVector->add(this->homeHostName);
    
dataVector->add(this->homeHostNamePath->toString());
    
dataVector->add(this->hostName);
    
dataVector->add(this->hostNamePath->toString());
    
dataVector->add(this->testHomeHostName);
    
dataVector->add(this->testHomeHostNamePath->toString());
    
dataVector->add(this->testHostName);
    
dataVector->add(this->testHostNamePath->toString());
    
dataVector->add(this->imagePath->toString());
    
dataVector->add(this->staticPath->toString());
    
dataVector->add(this->categoryPath->toString());
    
dataVector->add(this->inventoryControl);
    

    ContextConfigurationDomDocumentMapping* contextConfigurationDomDocumentMapping = new ContextConfigurationDomDocumentMapping(this->getContextConfigurationInterface());;
    
dataVector->add(contextConfigurationDomDocumentMapping->toDomDocumentString());
    
dataVector->add(this->subStores);
    
dataVector->add(this->tagLocation);
    
dataVector->add(this->packageLocation);
    
dataVector->add(this->ftp);
    
dataVector->add(this->ftpPath->toString());
    
dataVector->add(this->ftpUserName);
    
dataVector->add(this->ftpPassword);
    
dataVector->add(this->testFtp);
    
dataVector->add(this->testFtpPath->toString());
    
dataVector->add(this->testFtpUserName);
    
dataVector->add(this->testFtpPassword);
    

    Calendar* calendar = Calendar::getInstance();;
    

    std::string time = (int64_t(calendar->getTimeInMillis())).toString();;
    
dataVector->add(time);
    
dataVector->add(time);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return dataVector;
    
}


                //@Throws(Exception.constructor)
            
    auto StoreFront::toHashMap() -> HashMap<Object*, Object*>*{

    StoreFrontData* storeFrontData = StoreFrontData::getInstance();;
    

    HashMap<Object*, Object*>* dataHashMap = StdUtil::getInstance()->createHashMap();;
    
dataHashMap->put(storeFrontData->NAME, this->name);
    
dataHashMap->put(storeFrontData->HOMEHOSTNAME, this->homeHostName);
    
dataHashMap->put(storeFrontData->HOMEHOSTNAMEPATH, this->homeHostNamePath->toString());
    
dataHashMap->put(storeFrontData->HOSTNAME, this->hostName);
    
dataHashMap->put(storeFrontData->HOSTNAMEPATH, this->hostNamePath->toString());
    
dataHashMap->put(storeFrontData->TESTHOMEHOSTNAME, this->testHomeHostName);
    
dataHashMap->put(storeFrontData->TESTHOMEHOSTNAMEPATH, this->testHomeHostNamePath->toString());
    
dataHashMap->put(storeFrontData->TESTHOSTNAME, this->testHostName);
    
dataHashMap->put(storeFrontData->TESTHOSTNAMEPATH, this->testHostNamePath->toString());
    
dataHashMap->put(storeFrontData->IMAGEPATH, this->imagePath->toString());
    
dataHashMap->put(storeFrontData->STATICPATH, this->staticPath->toString());
    
dataHashMap->put(storeFrontData->CATEGORYPATH, this->categoryPath->toString());
    
dataHashMap->put(storeFrontData->INVENTORYCONTROL, this->inventoryControl);
    

    ContextConfigurationDomDocumentMapping* contextConfigurationDomDocumentMapping = new ContextConfigurationDomDocumentMapping(this->getContextConfigurationInterface());;
    
dataHashMap->put(storeFrontData->CONFIGURATION, contextConfigurationDomDocumentMapping->toDomDocumentString());
    
dataHashMap->put(storeFrontData->SUBSTORES, this->subStores);
    
dataHashMap->put(storeFrontData->TAGLOCATION, this->tagLocation);
    
dataHashMap->put(storeFrontData->PACKAGELOCATION, this->packageLocation);
    
dataHashMap->put(storeFrontData->FTP, this->ftp);
    
dataHashMap->put(storeFrontData->FTPPATH, this->ftpPath->toString());
    
dataHashMap->put(storeFrontData->FTPUSERNAME, this->ftpUserName);
    
dataHashMap->put(storeFrontData->FTPPASSWORD, this->ftpPassword);
    
dataHashMap->put(storeFrontData->TESTFTP, this->testFtp);
    
dataHashMap->put(storeFrontData->TESTFTPPATH, this->testFtpPath->toString());
    
dataHashMap->put(storeFrontData->TESTFTPUSERNAME, this->testFtpUserName);
    
dataHashMap->put(storeFrontData->TESTFTPPASSWORD, this->testFtpPassword);
    

    Calendar* calendar = Calendar::getInstance();;
    

    std::string time = (int64_t(calendar->getTimeInMillis())).toString();;
    
dataHashMap->put(EntryData::getInstance()->LASTMODIFIED, time);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return dataHashMap;
    
}


    auto StoreFront::getKey() -> Object*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->getName();
    
}


    auto StoreFront::getContextConfigurationInterface() -> ContextConfigurationInterface*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->contextConfigurationInterface;
    
}


    auto StoreFront::setContextConfigurationInterface(ContextConfigurationInterface* contextConfigurationInterface) -> void{
this->contextConfigurationInterface= contextConfigurationInterface;
    
}




        #endif //ORG_ALLBINARY_BUSINESS_CONTEXT_MODULES_STOREFRONT_STOREFRONT_CPP
