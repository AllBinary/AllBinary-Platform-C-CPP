
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

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
class BasicArrayList;
class BasicArrayListD;
class HttpServletRequest;
class ContextConfiguration;
class ContextConfigurationDomDocumentMapping;
class ContextConfigurationInterface;
class ContextConfigurationInterfaceFactory;
class EntryData;
class UserData;
class DomDocumentHelper;
class FREEBLISKET_PATH_GLOBALS;
class URLGLOBALS;
class StdUtil;
class RequestParams;
class LogUtil;
class AbFile;
class FileUtil;
class Directory;
class AbPath;
class AbPathData;
class AbPathUtil;
class SpecialCharacterUtil;
class StringMaker;
class StringUtil;
class StringValidationUtil;
class Replace;
class Tokenizer;
class CommonSeps;
class CommonStrings;
class BasicArrayList;
class BasicArrayListD;
class StringEscapeUtils;
class Document;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/business/context/modules/storefront/StoreFrontInterface.h"
class StoreFrontData;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class StoreFront
            : public virtual Object
        , public StoreFrontInterface {

    private: static const std::string RESOURCES;

    /*protected*/ public: LogUtil* logUtil;

    /*protected*/ public: CommonStrings* commonStrings;

    private: Directory* directory;

    private: StringUtil* stringUtil;

    private: AbPathUtil* abPathUtil;

    private: std::string name;

    private: std::string basketName;

    private: std::string homeHostName;

    private: AbPath* homeHostNamePath;

    private: std::string hostName;

    private: AbPath* hostNamePath;

    private: std::string testHomeHostName;

    private: AbPath* testHomeHostNamePath;

    private: std::string testHostName;

    private: AbPath* testHostNamePath;

    private: AbPath* imagePath;

    private: AbPath* staticPath;

    private: AbPath* categoryPath;

    private: std::string inventoryControl;

    private: ContextConfigurationInterface* contextConfigurationInterface;

    private: std::string subStores;

    private: std::string tagLocation;

    private: std::string packageLocation;

    private: std::string ftp;

    private: AbPath* ftpPath;

    private: std::string ftpUserName;

    private: std::string ftpPassword;

    private: std::string testFtp;

    private: AbPath* testFtpPath;

    private: std::string testFtpUserName;

    private: std::string testFtpPassword;

    private: std::string timeCreated;

    private: std::string lastModified;

    private: const int32_t MINCHAR = 0;

    private: const int32_t MINSTORENAMELENGTH = 1;

    private: const int32_t MAXCHAR = 255;

    private: const std::string EMPTY_STRING;

    private: std::vector<std::string> ONE_EMPTY_STRING_ARRAY;

public: StoreFront();

public: StoreFront(HttpServletRequest* request);

public: StoreFront(HashMap<Object*, Object*>* hashMap);

    private: bool isColumn(std::string columnName);

                //@Throws(Exception.constructor)
            
    private: AbPath* createPath(std::string key, HashMap<Object*, Object*>* hashMap);

                //@Throws(Exception.constructor)
            
    private: AbPath* createPath(std::string append, std::string key, HashMap<Object*, Object*>* hashMap);

    private: std::string get(std::string key, HashMap<Object*, Object*>* hashMap);

    private: std::string create(std::string append, std::string key, HashMap<Object*, Object*>* hashMap);

                //@Throws(Exception.constructor)
            
    private: void getFormData(HashMap<Object*, Object*>* storeHashMap);

    public: bool isNameValid();

    public: bool isValid();

    public: std::string nameValidationInfo();

    public: std::string validationInfo();

    public: std::string getTestHtmlPath();

    public: std::string getCurrentHostName();

    public: std::string getCurrentHostNamePath();

    public: std::string getCurrentHomeHostName();

    public: std::string getCurrentHomeHostNamePath();

    public: std::string getName();

    public: std::string getBasketName();

    public: std::string getHomeHostName();

    public: std::string getHomeHostNamePath();

    public: std::string getHostName();

    public: std::string getHostNamePath();

    public: std::string getTestHomeHostName();

    public: std::string getTestHomeHostNamePath();

    public: std::string getTestHostName();

    public: std::string getTestHostNamePath();

    public: std::string getStaticPath();

    public: std::string getCategoryPath();

    public: std::string getInventoryControl();

                //@Throws(Exception.constructor)
            
    public: BasicArrayList* getSubStores();

    public: std::string getTagLocation();

    public: std::string getPackageLocation();

    public: std::string getFtp();

    public: std::string getFtpUserName();

    public: std::string getFtpPassword();

    public: std::string getTestFtp();

    public: std::string getTestFtpUserName();

    public: std::string getTestFtpPassword();

    public: std::string getFtpPath();

    public: std::string getTestFtpPath();

    public: std::string getTimeCreated();

    public: std::string getLastModified();

    public: void setName(std::string value);

    public: void setBasketName(std::string value);

    public: void setHomeHostName(std::string value);

                //@Throws(Exception.constructor)
            
    public: void setHomeHostNamePath(std::string value);

    public: void setHostName(std::string value);

                //@Throws(Exception.constructor)
            
    public: void setHostNamePath(std::string value);

    public: void setTestHomeHostName(std::string value);

                //@Throws(Exception.constructor)
            
    public: void setTestHomeHostNamePath(std::string value);

    public: void setTestHostName(std::string value);

                //@Throws(Exception.constructor)
            
    public: void setTestHostNamePath(std::string value);

                //@Throws(Exception.constructor)
            
    public: void setImagePath(std::string value);

                //@Throws(Exception.constructor)
            
    public: void setStaticPath(std::string value);

                //@Throws(Exception.constructor)
            
    public: void setCategoryPath(std::string value);

    public: void setSubStores(std::string value);

    public: void setTagLocation(std::string value);

    public: void setPackageLocation(std::string value);

    public: void setInventoryControl(std::string value);

    public: void getPackageLocation(std::string value);

    public: void setFtp(std::string value);

    public: void setFtpUserName(std::string value);

    public: void setFtpPassword(std::string value);

    public: void setTestFtp(std::string value);

    public: void setTestFtpUserName(std::string value);

    public: void setTestFtpPassword(std::string value);

    public: void setTimeCreated(std::string value);

    public: void setLastModified(std::string value);

                //@Throws(Exception.constructor)
            
    public: void setFtpPath(std::string value);

                //@Throws(Exception.constructor)
            
    public: void setTestFtpPath(std::string value);

                //@Throws(Exception.constructor)
            
    private: bool createDirectories();

                //@Throws(Exception.constructor)
            
    public: void install(int32_t current, int32_t total);

                //@Throws(Exception.constructor)
            
    private: void installViews(AbPath* fromDirectoryAbPath, AbPath* toDirectoryAbPath, int32_t current, int32_t total);

                //@Throws(Exception.constructor)
            
    private: void installResources(AbPath* fromDirectoryAbPath, int32_t current, int32_t total);

                //@Throws(Exception.constructor)
            
    private: void installMedia(AbPath* fromDirectoryAbPath, int32_t current, int32_t total);

                //@Throws(Exception.constructor)
            
    public: BasicArrayList* toVector();

                //@Throws(Exception.constructor)
            
    public: HashMap<Object*, Object*>* toHashMap();

    public: Object* getKey();

    public: ContextConfigurationInterface* getContextConfigurationInterface();

    public: void setContextConfigurationInterface(ContextConfigurationInterface* contextConfigurationInterface);

};

            


        #endif //ORG_ALLBINARY_BUSINESS_CONTEXT_MODULES_STOREFRONT_STOREFRONT_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_BUSINESS_CONTEXT_MODULES_STOREFRONT_STOREFRONT_H_COMPLETE)
        #define ORG_ALLBINARY_BUSINESS_CONTEXT_MODULES_STOREFRONT_STOREFRONT_H_COMPLETE
        #if __has_include(<java/util/Calendar.h>)
#include <java/util/Calendar.h>
#endif
#if __has_include(<java/util/HashMap.h>)
#include <java/util/HashMap.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayListD.h>)
#include <org/allbinary/util/BasicArrayListD.h>
#endif
#if __has_include(<javax/servlet/http/HttpServletRequest.h>)
#include <javax/servlet/http/HttpServletRequest.h>
#endif
#if __has_include(<org/allbinary/business/context/configuration/ContextConfiguration.h>)
#include <org/allbinary/business/context/configuration/ContextConfiguration.h>
#endif
#if __has_include(<org/allbinary/business/context/configuration/ContextConfigurationDomDocumentMapping.h>)
#include <org/allbinary/business/context/configuration/ContextConfigurationDomDocumentMapping.h>
#endif
#if __has_include(<org/allbinary/business/context/configuration/ContextConfigurationInterface.h>)
#include <org/allbinary/business/context/configuration/ContextConfigurationInterface.h>
#endif
#if __has_include(<org/allbinary/business/context/configuration/ContextConfigurationInterfaceFactory.h>)
#include <org/allbinary/business/context/configuration/ContextConfigurationInterfaceFactory.h>
#endif
#if __has_include(<org/allbinary/business/entry/EntryData.h>)
#include <org/allbinary/business/entry/EntryData.h>
#endif
#if __has_include(<org/allbinary/business/user/UserData.h>)
#include <org/allbinary/business/user/UserData.h>
#endif
#if __has_include(<org/allbinary/data/tree/dom/document/DomDocumentHelper.h>)
#include <org/allbinary/data/tree/dom/document/DomDocumentHelper.h>
#endif
#if __has_include(<org/allbinary/globals/FREEBLISKET_PATH_GLOBALS.h>)
#include <org/allbinary/globals/FREEBLISKET_PATH_GLOBALS.h>
#endif
#if __has_include(<org/allbinary/globals/URLGLOBALS.h>)
#include <org/allbinary/globals/URLGLOBALS.h>
#endif
#if __has_include(<org/allbinary/logic/StdUtil.h>)
#include <org/allbinary/logic/StdUtil.h>
#endif
#if __has_include(<org/allbinary/logic/communication/http/request/RequestParams.h>)
#include <org/allbinary/logic/communication/http/request/RequestParams.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/io/file/AbFile.h>)
#include <org/allbinary/logic/io/file/AbFile.h>
#endif
#if __has_include(<org/allbinary/logic/io/file/FileUtil.h>)
#include <org/allbinary/logic/io/file/FileUtil.h>
#endif
#if __has_include(<org/allbinary/logic/io/file/directory/Directory.h>)
#include <org/allbinary/logic/io/file/directory/Directory.h>
#endif
#if __has_include(<org/allbinary/logic/io/path/AbPath.h>)
#include <org/allbinary/logic/io/path/AbPath.h>
#endif
#if __has_include(<org/allbinary/logic/io/path/AbPathData.h>)
#include <org/allbinary/logic/io/path/AbPathData.h>
#endif
#if __has_include(<org/allbinary/logic/io/path/AbPathUtil.h>)
#include <org/allbinary/logic/io/path/AbPathUtil.h>
#endif
#if __has_include(<org/allbinary/logic/string/SpecialCharacterUtil.h>)
#include <org/allbinary/logic/string/SpecialCharacterUtil.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringUtil.h>)
#include <org/allbinary/logic/string/StringUtil.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringValidationUtil.h>)
#include <org/allbinary/logic/string/StringValidationUtil.h>
#endif
#if __has_include(<org/allbinary/logic/string/regex/replace/Replace.h>)
#include <org/allbinary/logic/string/regex/replace/Replace.h>
#endif
#if __has_include(<org/allbinary/logic/string/tokens/Tokenizer.h>)
#include <org/allbinary/logic/string/tokens/Tokenizer.h>
#endif
#if __has_include(<org/allbinary/string/CommonSeps.h>)
#include <org/allbinary/string/CommonSeps.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayListD.h>)
#include <org/allbinary/util/BasicArrayListD.h>
#endif
#if __has_include(<org/apache/commons/lang3/StringEscapeUtils.h>)
#include <org/apache/commons/lang3/StringEscapeUtils.h>
#endif
#if __has_include(<org/w3c/dom/Document.h>)
#include <org/w3c/dom/Document.h>
#endif
#if __has_include("org/allbinary/business/context/modules/storefront/StoreFrontInterface.h")
#include "org/allbinary/business/context/modules/storefront/StoreFrontInterface.h"
#endif
#if __has_include("org/allbinary/business/context/modules/storefront/StoreFrontData.h")
#include "org/allbinary/business/context/modules/storefront/StoreFrontData.h"
#endif

        #endif
    
