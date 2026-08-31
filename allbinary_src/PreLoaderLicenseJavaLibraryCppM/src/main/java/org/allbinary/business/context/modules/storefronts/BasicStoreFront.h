
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

            #include "../../../../../../java/lang/Object.h"
        
            #include "../../../../../../java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFrontData.h>

      
#include <org/allbinary/business/entry/EntryData.h>

      
#include <org/allbinary/business/user/UserData.h>

      
#include <org/allbinary/logic/string/tokens/Tokenizer.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "BasicStoreFrontInterface.h"

class BasicStoreFront
            : public Object
        : public BasicStoreFrontInterface {
        

    private: name: string;

    private: userName: string;

    private: basketName: string;

    private: homeHostName: string;

    private: homeHostNamePath: string;

    private: hostName: string;

    private: hostNamePath: string;

    private: testHomeHostName: string;

    private: testHomeHostNamePath: string;

    private: testHostName: string;

    private: testHostNamePath: string;

    private: imagePath: string;

    private: staticPath: string;

    private: categoryPath: string;

    private: inventoryControl: string;

    private: subStores: string;

    private: tagLocation: string;

    private: packageLocation: string;

    private: ftp: string;

    private: ftpPath: string;

    private: ftpUserName: string;

    private: ftpPassword: string;

    private: testFtp: string;

    private: testFtpPath: string;

    private: testFtpUserName: string;

    private: testFtpPassword: string;

    private: timeCreated: string;

    private: lastModified: string;

public constructor ();

public constructor (HashMap<any, any> storeHashMap);

    public string getTestHtmlPath();

    public string getCurrentHostName();

    public string getCurrentHostNamePath();

    public string getCurrentHomeHostName();

    public string getCurrentHomeHostNamePath();

    public string getName();

    public string getUserName();

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

};

            


        #endif //ORG_ALLBINARY_BUSINESS_CONTEXT_MODULES_STOREFRONTS_BASICSTOREFRONT_H
