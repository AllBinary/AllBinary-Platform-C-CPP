
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_CONTEXT_MODULES_STOREFRONTS_BASICSTOREFRONT_H
        #define ORG_ALLBINARY_BUSINESS_CONTEXT_MODULES_STOREFRONTS_BASICSTOREFRONT_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/util/HashMap.h>
class StoreFrontData;
class EntryData;
class UserData;
class Tokenizer;
class CommonSeps;
class BasicArrayList;
class BasicArrayListD;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/business/context/modules/storefronts/BasicStoreFrontInterface.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class BasicStoreFront
            : public virtual Object
        , public BasicStoreFrontInterface {

    private: std::string name;

    private: std::string userName;

    private: std::string basketName;

    private: std::string homeHostName;

    private: std::string homeHostNamePath;

    private: std::string hostName;

    private: std::string hostNamePath;

    private: std::string testHomeHostName;

    private: std::string testHomeHostNamePath;

    private: std::string testHostName;

    private: std::string testHostNamePath;

    private: std::string imagePath;

    private: std::string staticPath;

    private: std::string categoryPath;

    private: std::string inventoryControl;

    private: std::string subStores;

    private: std::string tagLocation;

    private: std::string packageLocation;

    private: std::string ftp;

    private: std::string ftpPath;

    private: std::string ftpUserName;

    private: std::string ftpPassword;

    private: std::string testFtp;

    private: std::string testFtpPath;

    private: std::string testFtpUserName;

    private: std::string testFtpPassword;

    private: std::string timeCreated;

    private: std::string lastModified;

public: BasicStoreFront();

public: BasicStoreFront(HashMap<Object*, Object*>* storeHashMap);

    public: std::string getTestHtmlPath();

    public: std::string getCurrentHostName();

    public: std::string getCurrentHostNamePath();

    public: std::string getCurrentHomeHostName();

    public: std::string getCurrentHomeHostNamePath();

    public: std::string getName();

    public: std::string getUserName();

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

};

            


        #endif //ORG_ALLBINARY_BUSINESS_CONTEXT_MODULES_STOREFRONTS_BASICSTOREFRONT_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_BUSINESS_CONTEXT_MODULES_STOREFRONTS_BASICSTOREFRONT_H_COMPLETE)
        #define ORG_ALLBINARY_BUSINESS_CONTEXT_MODULES_STOREFRONTS_BASICSTOREFRONT_H_COMPLETE
        #if __has_include(<java/util/HashMap.h>)
#include <java/util/HashMap.h>
#endif
#if __has_include(<org/allbinary/business/context/modules/storefront/StoreFrontData.h>)
#include <org/allbinary/business/context/modules/storefront/StoreFrontData.h>
#endif
#if __has_include(<org/allbinary/business/entry/EntryData.h>)
#include <org/allbinary/business/entry/EntryData.h>
#endif
#if __has_include(<org/allbinary/business/user/UserData.h>)
#include <org/allbinary/business/user/UserData.h>
#endif
#if __has_include(<org/allbinary/logic/string/tokens/Tokenizer.h>)
#include <org/allbinary/logic/string/tokens/Tokenizer.h>
#endif
#if __has_include(<org/allbinary/string/CommonSeps.h>)
#include <org/allbinary/string/CommonSeps.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayListD.h>)
#include <org/allbinary/util/BasicArrayListD.h>
#endif
#if __has_include("org/allbinary/business/context/modules/storefronts/BasicStoreFrontInterface.h")
#include "org/allbinary/business/context/modules/storefronts/BasicStoreFrontInterface.h"
#endif

        #endif
    
