
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_CONTEXT_MODULES_STOREFRONT_STOREFRONT_H
        #define ORG_ALLBINARY_BUSINESS_CONTEXT_MODULES_STOREFRONT_STOREFRONT_H

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

public constructor ();

public constructor (HttpServletRequest request);

public constructor (HashMap<any, any> hashMap);

    bool isColumn(string columnName);

                //@Throws(Exception.constructor)
            
    AbPath createPath(string key, HashMap<any, any> hashMap);

                //@Throws(Exception.constructor)
            
    AbPath createPath(string append, string key, HashMap<any, any> hashMap);

    string get(string key, HashMap<any, any> hashMap);

    string create(string append, string key, HashMap<any, any> hashMap);

                //@Throws(Exception.constructor)
            
    getFormData(HashMap<any, any> storeHashMap);

    public Boolean isNameValid();

    public Boolean isValid();

    public string nameValidationInfo();

    public string validationInfo();

    public string getTestHtmlPath();

    public string getCurrentHostName();

    public string getCurrentHostNamePath();

    public string getCurrentHomeHostName();

    public string getCurrentHomeHostNamePath();

    public string getName();

    public string getBasketName();

    public string getHomeHostName();

    public string getHomeHostNamePath();

    public string getHostName();

    public string getHostNamePath();

    public string getTestHomeHostName();

    public string getTestHomeHostNamePath();

    public string getTestHostName();

    public string getTestHostNamePath();

    public string getStaticPath();

    public string getCategoryPath();

    public string getInventoryControl();

                //@Throws(Exception.constructor)
            
    public BasicArrayList getSubStores();

    public string getTagLocation();

    public string getPackageLocation();

    public string getFtp();

    public string getFtpUserName();

    public string getFtpPassword();

    public string getTestFtp();

    public string getTestFtpUserName();

    public string getTestFtpPassword();

    public string getFtpPath();

    public string getTestFtpPath();

    public string getTimeCreated();

    public string getLastModified();

    public setName(string value);

    public setBasketName(string value);

    public setHomeHostName(string value);

                //@Throws(Exception.constructor)
            
    public setHomeHostNamePath(string value);

    public setHostName(string value);

                //@Throws(Exception.constructor)
            
    public setHostNamePath(string value);

    public setTestHomeHostName(string value);

                //@Throws(Exception.constructor)
            
    public setTestHomeHostNamePath(string value);

    public setTestHostName(string value);

                //@Throws(Exception.constructor)
            
    public setTestHostNamePath(string value);

                //@Throws(Exception.constructor)
            
    public setImagePath(string value);

                //@Throws(Exception.constructor)
            
    public setStaticPath(string value);

                //@Throws(Exception.constructor)
            
    public setCategoryPath(string value);

    public setSubStores(string value);

    public setTagLocation(string value);

    public setPackageLocation(string value);

    public setInventoryControl(string value);

    public getPackageLocation(string value);

    public setFtp(string value);

    public setFtpUserName(string value);

    public setFtpPassword(string value);

    public setTestFtp(string value);

    public setTestFtpUserName(string value);

    public setTestFtpPassword(string value);

    public setTimeCreated(string value);

    public setLastModified(string value);

                //@Throws(Exception.constructor)
            
    public setFtpPath(string value);

                //@Throws(Exception.constructor)
            
    public setTestFtpPath(string value);

                //@Throws(Exception.constructor)
            
    bool createDirectories();

                //@Throws(Exception.constructor)
            
    public install(int32_t current, int32_t total);

                //@Throws(Exception.constructor)
            
    installViews(AbPath fromDirectoryAbPath, AbPath toDirectoryAbPath, int32_t current, int32_t total);

                //@Throws(Exception.constructor)
            
    installResources(AbPath fromDirectoryAbPath, int32_t current, int32_t total);

                //@Throws(Exception.constructor)
            
    installMedia(AbPath fromDirectoryAbPath, int32_t current, int32_t total);

                //@Throws(Exception.constructor)
            
    public Vector toVector();

                //@Throws(Exception.constructor)
            
    public HashMap<any, any> toHashMap();

    public any getKey();

    public ContextConfigurationInterface getContextConfigurationInterface();

    public setContextConfigurationInterface(ContextConfigurationInterface contextConfigurationInterface);

};

            


        #endif //ORG_ALLBINARY_BUSINESS_CONTEXT_MODULES_STOREFRONT_STOREFRONT_H
