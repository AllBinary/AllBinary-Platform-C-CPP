
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
        

    private: static const RESOURCES: string = " Resources" +AbPathData.getInstance()!.SEPARATOR;

    const logUtil: LogUtil = LogUtil.getInstance()!;

    const commonStrings: CommonStrings = CommonStrings.getInstance()!;

    private: const directory: Directory = Directory.getInstance()!;

    private: const stringUtil: StringUtil = StringUtil.getInstance()!;

    private: const abPathUtil: AbPathUtil = AbPathUtil.getInstance()!;

    private: name: string = this.stringUtil!.EMPTY_STRING;

    private: basketName: string = this.stringUtil!.EMPTY_STRING;

    private: homeHostName: string = this.stringUtil!.EMPTY_STRING;

    private: homeHostNamePath: AbPath = this.abPathUtil!.NO_ABPATH;

    private: hostName: string = this.stringUtil!.EMPTY_STRING;

    private: hostNamePath: AbPath = this.abPathUtil!.NO_ABPATH;

    private: testHomeHostName: string = this.stringUtil!.EMPTY_STRING;

    private: testHomeHostNamePath: AbPath = this.abPathUtil!.NO_ABPATH;

    private: testHostName: string = this.stringUtil!.EMPTY_STRING;

    private: testHostNamePath: AbPath = this.abPathUtil!.NO_ABPATH;

    private: imagePath: AbPath = this.abPathUtil!.NO_ABPATH;

    private: staticPath: AbPath = this.abPathUtil!.NO_ABPATH;

    private: categoryPath: AbPath = this.abPathUtil!.NO_ABPATH;

    private: inventoryControl: string = this.stringUtil!.EMPTY_STRING;

    private: contextConfigurationInterface: ContextConfigurationInterface;

    private: subStores: string = this.stringUtil!.EMPTY_STRING;

    private: tagLocation: string = this.stringUtil!.EMPTY_STRING;

    private: packageLocation: string = this.stringUtil!.EMPTY_STRING;

    private: ftp: string = this.stringUtil!.EMPTY_STRING;

    private: ftpPath: AbPath = this.abPathUtil!.NO_ABPATH;

    private: ftpUserName: string = this.stringUtil!.EMPTY_STRING;

    private: ftpPassword: string = this.stringUtil!.EMPTY_STRING;

    private: testFtp: string = this.stringUtil!.EMPTY_STRING;

    private: testFtpPath: AbPath = this.abPathUtil!.NO_ABPATH;

    private: testFtpUserName: string = this.stringUtil!.EMPTY_STRING;

    private: testFtpPassword: string = this.stringUtil!.EMPTY_STRING;

    private: timeCreated: string = this.stringUtil!.EMPTY_STRING;

    private: lastModified: string = this.stringUtil!.EMPTY_STRING;

    private: const MINCHAR: int32_t = 0;

    private: const MINSTORENAMELENGTH: int32_t = 1;

    private: const MAXCHAR: int32_t = 255;

    private: const EMPTY_STRING: string = StringUtil.getInstance()!.EMPTY_STRING;

    private: const ONE_EMPTY_STRING_ARRAY: std::vector<string> = StringUtil.getInstance()!.ONE_EMPTY_STRING_ARRAY;

public constructor (){

            super();
        this.contextConfigurationInterface= new ContextConfiguration();
    
}


public constructor (HttpServletRequest request){

            super();
        this.getFormData(new RequestParams(request).toHashMap());
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.EMAILLOGGING))
                        
                                    {
                                    this.logUtil!.putF("TWB- needs update for adding and updating context configuration - currently defaults to admin context config", this, "StoreFront");
    

                                    }
                                
this.setContextConfigurationInterface(ContextConfigurationInterfaceFactory.getInstance()!.getInstance("Admin"));
    
}


public constructor (HashMap<any, any> hashMap){

            super();
        this.getFormData(hashMap);
    

    domDocumentString: string = hashMap!.get(StoreFrontData.getInstance()!.CONFIGURATION) as string;;
    

                        if(domDocumentString == 
                                    null
                                )
                        
                                    {
                                    
    document: Document = DomDocumentHelper.create(domDocumentString)!;;
    
this.setContextConfigurationInterface(ContextConfigurationInterfaceFactory.getInstance()!.getInstance(document));
    

                                    }
                                
}


    bool isColumn(string columnName){

                        if(columnName!.compareTo(StoreFrontData.getInstance()!.NAME) == 0 || columnName!.compareTo(UserData.MAINEMAIL) == 0)
                        
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
            
    AbPath createPath(string key, HashMap<any, any> hashMap){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new AbPath(this.create(this.EMPTY_STRING, key, hashMap), StringUtil.getInstance()!.EMPTY_STRING);
    
}


                //@Throws(Exception.constructor)
            
    AbPath createPath(string append, string key, HashMap<any, any> hashMap){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new AbPath(this.create(append, key, hashMap), StringUtil.getInstance()!.EMPTY_STRING);
    
}


    string get(string key, HashMap<any, any> hashMap){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.create(this.EMPTY_STRING, key, hashMap);;
    
}


    string create(string append, string key, HashMap<any, any> hashMap){

    path: string = hashMap!.get(key) as string;;
    

                        if(StringValidationUtil.getInstance()!.isEmpty(path))
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.EMPTY_STRING;
    

                                    }
                                
                        else {
                            
                        if(this.isColumn(path))
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return hashMap!.get(path) as string +append;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return path;
    

                        }
                            

                        }
                            
}


                //@Throws(Exception.constructor)
            
    getFormData(HashMap<any, any> storeHashMap){

    storeFrontData: StoreFrontData = StoreFrontData.getInstance()!;;
    
this.name= storeHashMap!.get(storeFrontData!.NAME) as string;
    
this.basketName= storeHashMap!.get(storeFrontData!.NAME) as string;
    
this.homeHostName= storeHashMap!.get(storeFrontData!.HOMEHOSTNAME) as string;
    
this.homeHostNamePath= this.createPath(storeFrontData!.HOMEHOSTNAMEPATH, storeHashMap);
    
this.hostName= storeHashMap!.get(storeFrontData!.HOSTNAME) as string;
    
this.hostNamePath= this.createPath(storeFrontData!.HOSTNAMEPATH, storeHashMap);
    
this.testHomeHostName= storeHashMap!.get(storeFrontData!.TESTHOMEHOSTNAME) as string;
    
this.testHomeHostNamePath= this.createPath(storeFrontData!.TESTHOMEHOSTNAMEPATH, storeHashMap);
    
this.testHostName= storeHashMap!.get(storeFrontData!.TESTHOSTNAME) as string;
    
this.testHostNamePath= this.createPath(storeFrontData!.TESTHOSTNAMEPATH, storeHashMap);
    
this.imagePath= this.createPath(StoreFront.RESOURCES, storeFrontData!.IMAGEPATH, storeHashMap);
    
this.staticPath= this.createPath(" Products" +AbPathData.getInstance()!.SEPARATOR, storeFrontData!.STATICPATH, storeHashMap);
    
this.categoryPath= this.createPath(StoreFront.RESOURCES, storeFrontData!.CATEGORYPATH, storeHashMap);
    
this.inventoryControl= storeHashMap!.get(storeFrontData!.INVENTORYCONTROL) as string;
    
this.subStores= storeHashMap!.get(storeFrontData!.SUBSTORES) as string;
    
this.tagLocation= storeHashMap!.get(storeFrontData!.TAGLOCATION) as string;
    
this.packageLocation= storeHashMap!.get(storeFrontData!.PACKAGELOCATION) as string;
    
this.ftp= storeHashMap!.get(storeFrontData!.FTP) as string;
    
this.ftpPath= this.createPath(storeFrontData!.FTPPATH, storeHashMap);
    
this.ftpUserName= storeHashMap!.get(storeFrontData!.FTPUSERNAME) as string;
    
this.ftpPassword= storeHashMap!.get(storeFrontData!.FTPPASSWORD) as string;
    
this.testFtp= storeHashMap!.get(storeFrontData!.TESTFTP) as string;
    
this.testFtpPath= this.createPath(storeFrontData!.TESTFTPPATH, storeHashMap);
    
this.testFtpUserName= storeHashMap!.get(storeFrontData!.TESTFTPUSERNAME) as string;
    
this.testFtpPassword= storeHashMap!.get(storeFrontData!.TESTFTPPASSWORD) as string;
    
this.timeCreated= storeHashMap!.get(EntryData.getInstance()!.TIMECREATED) as string;
    
this.lastModified= storeHashMap!.get(EntryData.getInstance()!.LASTMODIFIED) as string;
    
}


    public Boolean isNameValid(){

                        if(!StringValidationUtil.getInstance()!.isValidRequired(this.name, this.MINSTORENAMELENGTH, this.MAXCHAR))
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean.FALSE;
    

                                    }
                                
                        else {
                            
    isEscapedCharactersContained: bool = false;;
    

    storeNameEscaped: string = StringEscapeUtils.escapeHtml3(this.name)!;;
    

                        if(this.name.compareTo(storeNameEscaped) != 0)
                        
                                    {
                                    isEscapedCharactersContained= true;
    

                                    }
                                

    stringValidationUtil: StringValidationUtil = StringValidationUtil.getInstance()!;;
    

    isSpacesContained: bool = false;;
    

                        if(stringValidationUtil!.containsSpaces(this.name))
                        
                                    {
                                    isSpacesContained= true;
    

                                    }
                                

                        if(isSpacesContained || isEscapedCharactersContained)
                        
                                    {
                                    
    hashMap: HashMap<any, any> = SpecialCharacterUtil.getHashMap()!;;
    
hashMap!.put(
                                                [
                                                    CommonSeps.getInstance()!.SPACE
                                                ], this.ONE_EMPTY_STRING_ARRAY);
    
this.name= new Replace(hashMap).all(this.name);
    

                                    }
                                

                        }
                            



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean.TRUE;
    
}


    public Boolean isValid(){

    valid: Boolean = Boolean.TRUE;;
    
valid= this.isNameValid();
    

    stringValidationUtil: StringValidationUtil = StringValidationUtil.getInstance()!;;
    

                        if(!stringValidationUtil!.isValidRequired(this.basketName, this.MINCHAR, this.MAXCHAR))
                        
                                    {
                                    valid= Boolean.FALSE;
    

                                    }
                                

                        if(!stringValidationUtil!.isValidRequired(this.homeHostName, this.MINCHAR, this.MAXCHAR))
                        
                                    {
                                    valid= Boolean.FALSE;
    

                                    }
                                

                        if(!stringValidationUtil!.isValidNotRequired(this.homeHostNamePath!.toString(), this.MINCHAR, this.MAXCHAR))
                        
                                    {
                                    valid= Boolean.FALSE;
    

                                    }
                                

                        if(!stringValidationUtil!.isValidRequired(this.hostName, this.MINCHAR, this.MAXCHAR))
                        
                                    {
                                    valid= Boolean.FALSE;
    

                                    }
                                

                        if(!stringValidationUtil!.isValidRequired(this.hostNamePath!.toString(), this.MINCHAR, this.MAXCHAR))
                        
                                    {
                                    valid= Boolean.FALSE;
    

                                    }
                                

                        if(!stringValidationUtil!.isValidNotRequired(this.testHomeHostName, this.MINCHAR, this.MAXCHAR))
                        
                                    {
                                    valid= Boolean.FALSE;
    

                                    }
                                

                        if(!stringValidationUtil!.isValidNotRequired(this.testHomeHostNamePath!.toString(), this.MINCHAR, this.MAXCHAR))
                        
                                    {
                                    valid= Boolean.FALSE;
    

                                    }
                                

                        if(!stringValidationUtil!.isValidNotRequired(this.testHostName, this.MINCHAR, this.MAXCHAR))
                        
                                    {
                                    valid= Boolean.FALSE;
    

                                    }
                                

                        if(!stringValidationUtil!.isValidNotRequired(this.testHostNamePath!.toString(), this.MINCHAR, this.MAXCHAR))
                        
                                    {
                                    valid= Boolean.FALSE;
    

                                    }
                                

                        if(!stringValidationUtil!.isValidRequired(this.imagePath!.toString(), this.MINCHAR, this.MAXCHAR))
                        
                                    {
                                    valid= Boolean.FALSE;
    

                                    }
                                

                        if(!stringValidationUtil!.isValidRequired(this.staticPath!.toString(), this.MINCHAR, this.MAXCHAR))
                        
                                    {
                                    valid= Boolean.FALSE;
    

                                    }
                                

                        if(!stringValidationUtil!.isValidRequired(this.categoryPath!.toString(), this.MINCHAR, this.MAXCHAR))
                        
                                    {
                                    valid= Boolean.FALSE;
    

                                    }
                                

                        if(!stringValidationUtil!.isValidRequired(this.inventoryControl, this.MINCHAR, this.MAXCHAR))
                        
                                    {
                                    valid= Boolean.FALSE;
    

                                    }
                                

                        if(!stringValidationUtil!.isValidNotRequired(this.subStores, this.MINCHAR, this.MAXCHAR))
                        
                                    {
                                    valid= Boolean.FALSE;
    

                                    }
                                

                        if(!stringValidationUtil!.isValidNotRequired(this.tagLocation, this.MINCHAR, this.MAXCHAR))
                        
                                    {
                                    valid= Boolean.FALSE;
    

                                    }
                                

                        if(!stringValidationUtil!.isValidRequired(this.packageLocation, this.MINCHAR, this.MAXCHAR))
                        
                                    {
                                    valid= Boolean.FALSE;
    

                                    }
                                

                        if(!stringValidationUtil!.isValidNotRequired(this.ftp, this.MINCHAR, this.MAXCHAR))
                        
                                    {
                                    valid= Boolean.FALSE;
    

                                    }
                                

                        if(!stringValidationUtil!.isValidNotRequired(this.ftpPath!.toString(), this.MINCHAR, this.MAXCHAR))
                        
                                    {
                                    valid= Boolean.FALSE;
    

                                    }
                                

                        if(!stringValidationUtil!.isValidNotRequired(this.ftpUserName, this.MINCHAR, this.MAXCHAR))
                        
                                    {
                                    valid= Boolean.FALSE;
    

                                    }
                                

                        if(!stringValidationUtil!.isValidNotRequired(this.ftpPassword, this.MINCHAR, this.MAXCHAR))
                        
                                    {
                                    valid= Boolean.FALSE;
    

                                    }
                                

                        if(!stringValidationUtil!.isValidNotRequired(this.testFtp, this.MINCHAR, this.MAXCHAR))
                        
                                    {
                                    valid= Boolean.FALSE;
    

                                    }
                                

                        if(!stringValidationUtil!.isValidNotRequired(this.testFtpPath!.toString(), this.MINCHAR, this.MAXCHAR))
                        
                                    {
                                    valid= Boolean.FALSE;
    

                                    }
                                

                        if(!stringValidationUtil!.isValidNotRequired(this.testFtpUserName, this.MINCHAR, this.MAXCHAR))
                        
                                    {
                                    valid= Boolean.FALSE;
    

                                    }
                                

                        if(!stringValidationUtil!.isValidNotRequired(this.testFtpPassword, this.MINCHAR, this.MAXCHAR))
                        
                                    {
                                    valid= Boolean.FALSE;
    

                                    }
                                

                        if(valid.valueOf() == true)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean.TRUE;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean.FALSE;
    

                        }
                            
}


    public string nameValidationInfo(){

    stringValidationUtil: StringValidationUtil = StringValidationUtil.getInstance()!;;
    

                        if(!stringValidationUtil!.isValidRequired(this.name, this.MINCHAR, this.MAXCHAR))
                        
                                    {
                                    
    stringBuffer: StringMaker = new StringMaker();;
    
stringBuffer!.append("Name is invalid. Must be < ");
    
stringBuffer!.appendint(this.MAXCHAR);
    
stringBuffer!.append(" and > 0 characters.<br>");
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer!.toString();;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.EMPTY_STRING;
    
}


    public string validationInfo(){

        try {
            
    stringValidationUtil: StringValidationUtil = StringValidationUtil.getInstance()!;;
    

    stringBuffer: StringMaker = new StringMaker();;
    
stringBuffer!.append(this.nameValidationInfo());
    

                        if(!stringValidationUtil!.isValidRequired(this.basketName, this.MINCHAR, this.MAXCHAR))
                        
                                    {
                                    stringBuffer!.append("Basket name is invalid. Must be < ");
    
stringBuffer!.appendint(this.MAXCHAR);
    
stringBuffer!.append(" and > 0 characters.<br>");
    

                                    }
                                

                        if(!stringValidationUtil!.isValidRequired(this.homeHostName, this.MINCHAR, this.MAXCHAR))
                        
                                    {
                                    stringBuffer!.append("Home host name is invalid. Must be < ");
    
stringBuffer!.appendint(this.MAXCHAR);
    
stringBuffer!.append(" and > 0 characters.<br>");
    

                                    }
                                

                        if(!stringValidationUtil!.isValidNotRequired(this.homeHostNamePath!.toString(), this.MINCHAR, this.MAXCHAR))
                        
                                    {
                                    stringBuffer!.append("Home host name path is invalid. Must be < ");
    
stringBuffer!.appendint(this.MAXCHAR);
    
stringBuffer!.append(" and > 0 characters.<br>");
    

                                    }
                                

                        if(!stringValidationUtil!.isValidRequired(this.hostName, this.MINCHAR, this.MAXCHAR))
                        
                                    {
                                    stringBuffer!.append("Host name is invalid. Must be < ");
    
stringBuffer!.appendint(this.MAXCHAR);
    
stringBuffer!.append(" and > 0 characters.<br>");
    

                                    }
                                

                        if(!stringValidationUtil!.isValidRequired(this.hostNamePath!.toString(), this.MINCHAR, this.MAXCHAR))
                        
                                    {
                                    stringBuffer!.append("Host name path is invalid. Must be < ");
    
stringBuffer!.appendint(this.MAXCHAR);
    
stringBuffer!.append(" and > 0 characters.<br>");
    

                                    }
                                

                        if(!stringValidationUtil!.isValidNotRequired(this.testHomeHostName, this.MINCHAR, this.MAXCHAR))
                        
                                    {
                                    stringBuffer!.append("Test home host name is invalid. Must be < " +this.MAXCHAR +" and > 0 characters.<br>");
    

                                    }
                                

                        if(!stringValidationUtil!.isValidNotRequired(this.testHomeHostNamePath!.toString(), this.MINCHAR, this.MAXCHAR))
                        
                                    {
                                    stringBuffer!.append("Test home host name path is invalid. Must be < " +this.MAXCHAR +" and > 0 characters.<br>");
    

                                    }
                                

                        if(!stringValidationUtil!.isValidNotRequired(this.testHostName, this.MINCHAR, this.MAXCHAR))
                        
                                    {
                                    stringBuffer!.append("Test host name is invalid. Must be < " +this.MAXCHAR +" and > 0 characters.<br>");
    

                                    }
                                

                        if(!stringValidationUtil!.isValidNotRequired(this.testHostNamePath!.toString(), this.MINCHAR, this.MAXCHAR))
                        
                                    {
                                    stringBuffer!.append("Test host name path is invalid. Must be < " +this.MAXCHAR +" and > 0 characters.<br>");
    

                                    }
                                

                        if(!stringValidationUtil!.isValidRequired(this.imagePath!.toString(), this.MINCHAR, this.MAXCHAR))
                        
                                    {
                                    stringBuffer!.append("Image path is invalid. Must be < " +this.MAXCHAR +" and > 0 characters.<br>");
    

                                    }
                                

                        if(!stringValidationUtil!.isValidRequired(this.staticPath!.toString(), this.MINCHAR, this.MAXCHAR))
                        
                                    {
                                    stringBuffer!.append("Static path is invalid. Must be < " +this.MAXCHAR +" and > 0 characters.<br>");
    

                                    }
                                

                        if(!stringValidationUtil!.isValidRequired(this.categoryPath!.toString(), this.MINCHAR, this.MAXCHAR))
                        
                                    {
                                    stringBuffer!.append("Category path is invalid. Must be < " +this.MAXCHAR +" and > 0 characters.<br>");
    

                                    }
                                

                        if(!stringValidationUtil!.isValidRequired(this.inventoryControl, this.MINCHAR, this.MAXCHAR))
                        
                                    {
                                    stringBuffer!.append("Inventory control is invalid. Must be < " +this.MAXCHAR +" and > 0 characters.<br>");
    

                                    }
                                

                        if(!stringValidationUtil!.isValidNotRequired(this.subStores, this.MINCHAR, this.MAXCHAR))
                        
                                    {
                                    stringBuffer!.append("Sub stores is invalid. Must be < " +this.MAXCHAR +" and > 0 characters.<br>");
    

                                    }
                                

                        if(!stringValidationUtil!.isValidNotRequired(this.tagLocation, this.MINCHAR, this.MAXCHAR))
                        
                                    {
                                    stringBuffer!.append("Tag location is invalid. Must be < " +this.MAXCHAR +" and > 0 characters.<br>");
    

                                    }
                                

                        if(!stringValidationUtil!.isValidRequired(this.packageLocation, this.MINCHAR, this.MAXCHAR))
                        
                                    {
                                    stringBuffer!.append("Package location is invalid. Must be < " +this.MAXCHAR +" and > 0 characters.<br>");
    

                                    }
                                

                        if(!stringValidationUtil!.isValidNotRequired(this.ftp, this.MINCHAR, this.MAXCHAR))
                        
                                    {
                                    stringBuffer!.append("Ftp is invalid. Must be < " +this.MAXCHAR +" and > 0 characters.<br>");
    

                                    }
                                

                        if(!stringValidationUtil!.isValidNotRequired(this.ftpPath!.toString(), this.MINCHAR, this.MAXCHAR))
                        
                                    {
                                    stringBuffer!.append("Ftp path is invalid. Must be < " +this.MAXCHAR +" and > 0 characters.<br>");
    

                                    }
                                

                        if(!stringValidationUtil!.isValidNotRequired(this.ftpUserName, this.MINCHAR, this.MAXCHAR))
                        
                                    {
                                    stringBuffer!.append("Ftp username is invalid. Must be < " +this.MAXCHAR +" and > 0 characters.<br>");
    

                                    }
                                

                        if(!stringValidationUtil!.isValidNotRequired(this.ftpPassword, this.MINCHAR, this.MAXCHAR))
                        
                                    {
                                    stringBuffer!.append("Ftp password is invalid. Must be < " +this.MAXCHAR +" and > 0 characters.<br>");
    

                                    }
                                

                        if(!stringValidationUtil!.isValidNotRequired(this.testFtp, this.MINCHAR, this.MAXCHAR))
                        
                                    {
                                    stringBuffer!.append("Test ftp is invalid. Must be < " +this.MAXCHAR +" and > 0 characters.<br>");
    

                                    }
                                

                        if(!stringValidationUtil!.isValidNotRequired(this.testFtpPath!.toString(), this.MINCHAR, this.MAXCHAR))
                        
                                    {
                                    stringBuffer!.append("Test ftp Path is invalid. Must be < " +this.MAXCHAR +" and > 0 characters.<br>");
    

                                    }
                                

                        if(!stringValidationUtil!.isValidNotRequired(this.testFtpUserName, this.MINCHAR, this.MAXCHAR))
                        
                                    {
                                    stringBuffer!.append("Test ftp username is invalid. Must be < " +this.MAXCHAR +" and > 0 characters.<br>");
    

                                    }
                                

                        if(!stringValidationUtil!.isValidNotRequired(this.testFtpPassword, this.MINCHAR, this.MAXCHAR))
                        
                                    {
                                    stringBuffer!.append("Test ftp password is invalid. Must be < " +this.MAXCHAR +" and > 0 characters.<br>");
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer!.toString();;
    

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.SQLTAGSERROR))
                        
                                    {
                                    this.logUtil!.put("Failed to generate validation error info", this, "validationInfo()", e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return "Error Validating Form";
    
}

}


    public string getTestHtmlPath(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return org.allbinary.globals.URLGLOBALS.getTestHtmlPath() +this.getCurrentHostNamePath();
    
}


    public string getCurrentHostName(){

    location: string = this.EMPTY_STRING;;
    

                        if(org.allbinary.globals.URLGLOBALS.isTestingMode())
                        
                                    {
                                    location= this.getTestHostName();
    

                                    }
                                
                        else {
                            location= this.getHostName();
    

                        }
                            



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return location;
    
}


    public string getCurrentHostNamePath(){

    location: string = this.EMPTY_STRING;;
    

                        if(org.allbinary.globals.URLGLOBALS.isTestingMode())
                        
                                    {
                                    location= this.getTestHostNamePath();
    

                                    }
                                
                        else {
                            location= this.getHostNamePath();
    

                        }
                            



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return location;
    
}


    public string getCurrentHomeHostName(){

    location: string = this.EMPTY_STRING;;
    

                        if(org.allbinary.globals.URLGLOBALS.isTestingMode())
                        
                                    {
                                    location= this.getTestHomeHostName();
    

                                    }
                                
                        else {
                            location= this.getHomeHostName();
    

                        }
                            



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return location;
    
}


    public string getCurrentHomeHostNamePath(){

    location: string = this.EMPTY_STRING;;
    

                        if(org.allbinary.globals.URLGLOBALS.isTestingMode())
                        
                                    {
                                    location= this.getTestHomeHostNamePath();
    

                                    }
                                
                        else {
                            location= this.getHomeHostNamePath();
    

                        }
                            



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return location;
    
}


    public string getName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.name;
    
}


    public string getBasketName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.basketName;
    
}


    public string getHomeHostName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.homeHostName;
    
}


    public string getHomeHostNamePath(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.homeHostNamePath!.toString();;
    
}


    public string getHostName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.hostName;
    
}


    public string getHostNamePath(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.hostNamePath!.toString();;
    
}


    public string getTestHomeHostName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.testHomeHostName;
    
}


    public string getTestHomeHostNamePath(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.testHomeHostNamePath!.toString();;
    
}


    public string getTestHostName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.testHostName;
    
}


    public string getTestHostNamePath(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.testHostNamePath!.toString();;
    
}


    public string getStaticPath(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.staticPath!.toString();;
    
}


    public string getCategoryPath(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.categoryPath!.toString();;
    
}


    public string getInventoryControl(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.inventoryControl;
    
}


                //@Throws(Exception.constructor)
            
    public BasicArrayList getSubStores(){

        try {
            
    tokenizer: Tokenizer = new Tokenizer(CommonSeps.getInstance()!.SEMICOLON);;
    

    subStoreVector: BasicArrayList = tokenizer.getTokensFromString(this.subStores, new BasicArrayListD())!;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return subStoreVector;
    

                //: 
} catch(e) 
            {



                            throw e;
                    
}

}


    public string getTagLocation(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.tagLocation;
    
}


    public string getPackageLocation(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.packageLocation;
    
}


    public string getFtp(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.ftp;
    
}


    public string getFtpUserName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.ftpUserName;
    
}


    public string getFtpPassword(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.ftpPassword;
    
}


    public string getTestFtp(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.testFtp;
    
}


    public string getTestFtpUserName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.testFtpUserName;
    
}


    public string getTestFtpPassword(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.testFtpPassword;
    
}


    public string getFtpPath(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.ftpPath!.toString();;
    
}


    public string getTestFtpPath(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.testFtpPath!.toString();;
    
}


    public string getTimeCreated(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.timeCreated;
    
}


    public string getLastModified(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.lastModified;
    
}


    public setName(string value){
this.name= value;
    
}


    public setBasketName(string value){
this.basketName= value;
    
}


    public setHomeHostName(string value){
this.homeHostName= value;
    
}


                //@Throws(Exception.constructor)
            
    public setHomeHostNamePath(string value){
this.homeHostNamePath= new AbPath(value, StringUtil.getInstance()!.EMPTY_STRING);
    
}


    public setHostName(string value){
this.hostName= value;
    
}


                //@Throws(Exception.constructor)
            
    public setHostNamePath(string value){
this.hostNamePath= new AbPath(value, StringUtil.getInstance()!.EMPTY_STRING);
    
}


    public setTestHomeHostName(string value){
this.testHomeHostName= value;
    
}


                //@Throws(Exception.constructor)
            
    public setTestHomeHostNamePath(string value){
this.testHomeHostNamePath= new AbPath(value, StringUtil.getInstance()!.EMPTY_STRING);
    
}


    public setTestHostName(string value){
this.testHostName= value;
    
}


                //@Throws(Exception.constructor)
            
    public setTestHostNamePath(string value){
this.testHostNamePath= new AbPath(value, StringUtil.getInstance()!.EMPTY_STRING);
    
}


                //@Throws(Exception.constructor)
            
    public setImagePath(string value){
this.imagePath= new AbPath(value, StringUtil.getInstance()!.EMPTY_STRING);
    
}


                //@Throws(Exception.constructor)
            
    public setStaticPath(string value){
this.staticPath= new AbPath(value, StringUtil.getInstance()!.EMPTY_STRING);
    
}


                //@Throws(Exception.constructor)
            
    public setCategoryPath(string value){
this.categoryPath= new AbPath(value, StringUtil.getInstance()!.EMPTY_STRING);
    
}


    public setSubStores(string value){
this.subStores= value;
    
}


    public setTagLocation(string value){
this.tagLocation= value;
    
}


    public setPackageLocation(string value){
this.packageLocation= value;
    
}


    public setInventoryControl(string value){
this.inventoryControl= value;
    
}


    public getPackageLocation(string value){
this.packageLocation= value;
    
}


    public setFtp(string value){
this.ftp= value;
    
}


    public setFtpUserName(string value){
this.ftpUserName= value;
    
}


    public setFtpPassword(string value){
this.ftpPassword= value;
    
}


    public setTestFtp(string value){
this.testFtp= value;
    
}


    public setTestFtpUserName(string value){
this.testFtpUserName= value;
    
}


    public setTestFtpPassword(string value){
this.testFtpPassword= value;
    
}


    public setTimeCreated(string value){
this.timeCreated= value;
    
}


    public setLastModified(string value){
this.lastModified= value;
    
}


                //@Throws(Exception.constructor)
            
    public setFtpPath(string value){
this.ftpPath= new AbPath(value, StringUtil.getInstance()!.EMPTY_STRING);
    
}


                //@Throws(Exception.constructor)
            
    public setTestFtpPath(string value){
this.testFtpPath= new AbPath(value, StringUtil.getInstance()!.EMPTY_STRING);
    
}


                //@Throws(Exception.constructor)
            
    bool createDirectories(){

    storeAbPath: AbPath = new AbPath(URLGLOBALS.getWebappPath() +this.getCurrentHomeHostNamePath(), StringUtil.getInstance()!.EMPTY_STRING);;
    

                        if(!this.directory.create(storeAbPath))
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    

                                    }
                                

                        if(!this.directory.create(new AbPath(storeAbPath +this.getCategoryPath(), StringUtil.getInstance()!.EMPTY_STRING)))
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    

                                    }
                                

                        if(!this.directory.create(new AbPath(storeAbPath +this.getStaticPath(), StringUtil.getInstance()!.EMPTY_STRING)))
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    
}


                //@Throws(Exception.constructor)
            
    public install(int32_t current, int32_t total){

        try {
            
                        if(!this.createDirectories())
                        
                                    {
                                    


                            throw new Exception("Unable to create store directories");
                    

                                    }
                                

    stringBuffer: StringMaker = new StringMaker();;
    
stringBuffer!.delete(0, stringBuffer!.length());
    
stringBuffer!.append(URLGLOBALS.getMainPath());
    
stringBuffer!.append(FREEBLISKET_PATH_GLOBALS.getInstance()!.XSLPATH);
    

    viewPath: string = stringBuffer!.toString()!;;
    
stringBuffer!.delete(0, stringBuffer!.length());
    
stringBuffer!.append(viewPath);
    
stringBuffer!.append(FREEBLISKET_PATH_GLOBALS.getInstance()!.INSTALLPATH);
    

    fromDirectoryAbPath: AbPath = new AbPath(stringBuffer!.toString(), StringUtil.getInstance()!.EMPTY_STRING);;
    
stringBuffer!.delete(0, stringBuffer!.length());
    
stringBuffer!.append(viewPath);
    
stringBuffer!.append("special");
    
stringBuffer!.append(AbPathData.getInstance()!.SEPARATOR);
    

    fromSpecialDirectoryAbPath: AbPath = new AbPath(stringBuffer!.toString(), StringUtil.getInstance()!.EMPTY_STRING);;
    
stringBuffer!.delete(0, stringBuffer!.length());
    
stringBuffer!.append(viewPath);
    
stringBuffer!.append(this.getName());
    
stringBuffer!.append(AbPathData.getInstance()!.SEPARATOR);
    

    toDirectoryAbPath: AbPath = new AbPath(stringBuffer!.toString(), StringUtil.getInstance()!.EMPTY_STRING);;
    

                        if(current == 0)
                        
                                    {
                                    
                        if(!this.directory.create(toDirectoryAbPath))
                        
                                    {
                                    


                            throw new Exception("Unable to create store view directory: " +toDirectoryAbPath!.toString());
                    

                                    }
                                

                                    }
                                

    viewTotal: int32_t = (total *85) /100;;
    

    installTotal: int32_t = (total *93) /100;;
    

                        if(current < viewTotal)
                        
                                    {
                                    
    file: AbFile = AbFile.createAbFileFromAbPath(fromSpecialDirectoryAbPath)!;;
    

                        if(file.isDirectory())
                        
                                    {
                                    
    halfViewTotal: int32_t = viewTotal /2;;
    

                        if(current < halfViewTotal)
                        
                                    {
                                    this.installViews(fromSpecialDirectoryAbPath, toDirectoryAbPath, current, halfViewTotal);
    

                                    }
                                
                             else 
                        if(current < viewTotal)
                        
                                    {
                                    this.installViews(fromDirectoryAbPath, toDirectoryAbPath, current -halfViewTotal, viewTotal -halfViewTotal);
    

                                    }
                                

                                    }
                                
                        else {
                            this.installViews(fromDirectoryAbPath, toDirectoryAbPath, current, viewTotal);
    

                        }
                            

                                    }
                                
                             else 
                        if(current < installTotal)
                        
                                    {
                                    this.installResources(fromDirectoryAbPath, current -viewTotal, installTotal -viewTotal);
    

                                    }
                                
                        else {
                            this.installMedia(fromDirectoryAbPath, current -installTotal, total -installTotal);
    

                        }
                            

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.SQLTAGSERROR))
                        
                                    {
                                    this.logUtil!.put(this.commonStrings!.EXCEPTION, this, "install()", e);
    

                                    }
                                



                            throw e;
                    
}

}


                //@Throws(Exception.constructor)
            
    installViews(AbPath fromDirectoryAbPath, AbPath toDirectoryAbPath, int32_t current, int32_t total){
FileUtil.getInstance()!.copyDirectoryPortion(fromDirectoryAbPath, toDirectoryAbPath, true, false, current, total);
    
}


                //@Throws(Exception.constructor)
            
    installResources(AbPath fromDirectoryAbPath, int32_t current, int32_t total){

    stringBuffer: StringMaker = new StringMaker();;
    
stringBuffer!.append(fromDirectoryAbPath!.toString());
    
stringBuffer!.append(AbPathData.getInstance()!.SEPARATOR);
    
stringBuffer!.append("Resources");
    
stringBuffer!.append(AbPathData.getInstance()!.SEPARATOR);
    

    installCategoryAbPath: AbPath = new AbPath(stringBuffer!.toString(), StringUtil.getInstance()!.EMPTY_STRING);;
    
stringBuffer!.delete(0, stringBuffer!.length());
    
stringBuffer!.append(URLGLOBALS.getMainPath());
    
stringBuffer!.append(this.getCurrentHomeHostNamePath());
    
stringBuffer!.append(AbPathData.getInstance()!.SEPARATOR);
    
stringBuffer!.append(this.getCategoryPath());
    

    categoryAbPath: AbPath = new AbPath(stringBuffer!.toString(), StringUtil.getInstance()!.EMPTY_STRING);;
    
FileUtil.getInstance()!.copyDirectoryPortion(installCategoryAbPath, categoryAbPath, true, false, current, total);
    
}


                //@Throws(Exception.constructor)
            
    installMedia(AbPath fromDirectoryAbPath, int32_t current, int32_t total){

    stringBuffer: StringMaker = new StringMaker();;
    
stringBuffer!.append(fromDirectoryAbPath!.toString());
    
stringBuffer!.append(AbPathData.getInstance()!.SEPARATOR);
    
stringBuffer!.append(FREEBLISKET_PATH_GLOBALS.getInstance()!.TEMPLATEPATH);
    
stringBuffer!.append("images");
    
stringBuffer!.append(AbPathData.getInstance()!.SEPARATOR);
    

    viewStoreImagesDirectoryAbPath: AbPath = new AbPath(stringBuffer!.toString(), StringUtil.getInstance()!.EMPTY_STRING);;
    

    storeAbPath: AbPath = new AbPath(URLGLOBALS.getWebappPath() +this.getCurrentHomeHostNamePath(), StringUtil.getInstance()!.EMPTY_STRING);;
    
FileUtil.getInstance()!.copyDirectoryPortion(viewStoreImagesDirectoryAbPath, storeAbPath, true, false, current, total);
    
}


                //@Throws(Exception.constructor)
            
    public Vector toVector(){

    dataVector: Vector = new Vector();;
    
dataVector!.add(this.name);
    
dataVector!.add(this.homeHostName);
    
dataVector!.add(this.homeHostNamePath!.toString());
    
dataVector!.add(this.hostName);
    
dataVector!.add(this.hostNamePath!.toString());
    
dataVector!.add(this.testHomeHostName);
    
dataVector!.add(this.testHomeHostNamePath!.toString());
    
dataVector!.add(this.testHostName);
    
dataVector!.add(this.testHostNamePath!.toString());
    
dataVector!.add(this.imagePath!.toString());
    
dataVector!.add(this.staticPath!.toString());
    
dataVector!.add(this.categoryPath!.toString());
    
dataVector!.add(this.inventoryControl);
    

    contextConfigurationDomDocumentMapping: ContextConfigurationDomDocumentMapping = new ContextConfigurationDomDocumentMapping(this.getContextConfigurationInterface());;
    
dataVector!.add(contextConfigurationDomDocumentMapping!.toDomDocumentString());
    
dataVector!.add(this.subStores);
    
dataVector!.add(this.tagLocation);
    
dataVector!.add(this.packageLocation);
    
dataVector!.add(this.ftp);
    
dataVector!.add(this.ftpPath!.toString());
    
dataVector!.add(this.ftpUserName);
    
dataVector!.add(this.ftpPassword);
    
dataVector!.add(this.testFtp);
    
dataVector!.add(this.testFtpPath!.toString());
    
dataVector!.add(this.testFtpUserName);
    
dataVector!.add(this.testFtpPassword);
    

    calendar: Calendar = Calendar.getInstance()!;;
    

    time: string = new Long(calendar.getTimeInMillis()).toString();;
    
dataVector!.add(time);
    
dataVector!.add(time);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return dataVector;
    
}


                //@Throws(Exception.constructor)
            
    public HashMap<any, any> toHashMap(){

    storeFrontData: StoreFrontData = StoreFrontData.getInstance()!;;
    

    dataHashMap: HashMap<any, any> = new HashMap<any, any>();;
    
dataHashMap!.put(storeFrontData!.NAME, this.name);
    
dataHashMap!.put(storeFrontData!.HOMEHOSTNAME, this.homeHostName);
    
dataHashMap!.put(storeFrontData!.HOMEHOSTNAMEPATH, this.homeHostNamePath!.toString());
    
dataHashMap!.put(storeFrontData!.HOSTNAME, this.hostName);
    
dataHashMap!.put(storeFrontData!.HOSTNAMEPATH, this.hostNamePath!.toString());
    
dataHashMap!.put(storeFrontData!.TESTHOMEHOSTNAME, this.testHomeHostName);
    
dataHashMap!.put(storeFrontData!.TESTHOMEHOSTNAMEPATH, this.testHomeHostNamePath!.toString());
    
dataHashMap!.put(storeFrontData!.TESTHOSTNAME, this.testHostName);
    
dataHashMap!.put(storeFrontData!.TESTHOSTNAMEPATH, this.testHostNamePath!.toString());
    
dataHashMap!.put(storeFrontData!.IMAGEPATH, this.imagePath!.toString());
    
dataHashMap!.put(storeFrontData!.STATICPATH, this.staticPath!.toString());
    
dataHashMap!.put(storeFrontData!.CATEGORYPATH, this.categoryPath!.toString());
    
dataHashMap!.put(storeFrontData!.INVENTORYCONTROL, this.inventoryControl);
    

    contextConfigurationDomDocumentMapping: ContextConfigurationDomDocumentMapping = new ContextConfigurationDomDocumentMapping(this.getContextConfigurationInterface());;
    
dataHashMap!.put(storeFrontData!.CONFIGURATION, contextConfigurationDomDocumentMapping!.toDomDocumentString());
    
dataHashMap!.put(storeFrontData!.SUBSTORES, this.subStores);
    
dataHashMap!.put(storeFrontData!.TAGLOCATION, this.tagLocation);
    
dataHashMap!.put(storeFrontData!.PACKAGELOCATION, this.packageLocation);
    
dataHashMap!.put(storeFrontData!.FTP, this.ftp);
    
dataHashMap!.put(storeFrontData!.FTPPATH, this.ftpPath!.toString());
    
dataHashMap!.put(storeFrontData!.FTPUSERNAME, this.ftpUserName);
    
dataHashMap!.put(storeFrontData!.FTPPASSWORD, this.ftpPassword);
    
dataHashMap!.put(storeFrontData!.TESTFTP, this.testFtp);
    
dataHashMap!.put(storeFrontData!.TESTFTPPATH, this.testFtpPath!.toString());
    
dataHashMap!.put(storeFrontData!.TESTFTPUSERNAME, this.testFtpUserName);
    
dataHashMap!.put(storeFrontData!.TESTFTPPASSWORD, this.testFtpPassword);
    

    calendar: Calendar = Calendar.getInstance()!;;
    

    time: string = new Long(calendar.getTimeInMillis()).toString();;
    
dataHashMap!.put(EntryData.getInstance()!.LASTMODIFIED, time);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return dataHashMap;
    
}


    public any getKey(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.getName();
    
}


    public ContextConfigurationInterface getContextConfigurationInterface(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.contextConfigurationInterface;
    
}


    public setContextConfigurationInterface(ContextConfigurationInterface contextConfigurationInterface){
this.contextConfigurationInterface= contextConfigurationInterface;
    
}


};

            

