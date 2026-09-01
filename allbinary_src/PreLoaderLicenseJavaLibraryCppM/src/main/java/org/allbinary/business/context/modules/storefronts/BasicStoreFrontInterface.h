
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_CONTEXT_MODULES_STOREFRONTS_BASICSTOREFRONTINTERFACE_H
        #define ORG_ALLBINARY_BUSINESS_CONTEXT_MODULES_STOREFRONTS_BASICSTOREFRONTINTERFACE_H

            #include "../../../../../../java/lang/Exception.h"
        
#include <org/allbinary/util/BasicArrayList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class BasicStoreFrontInterface {

    std::string getTestHtmlPath();

    std::string getCurrentHostName();

    std::string getCurrentHostNamePath();

    std::string getCurrentHomeHostName();

    std::string getCurrentHomeHostNamePath();

    std::string getName();

    std::string getUserName();

    std::string getBasketName();

    std::string getHomeHostName();

    std::string getHomeHostNamePath();

    std::string getHostName();

    std::string getHostNamePath();

    std::string getTestHomeHostName();

    std::string getTestHomeHostNamePath();

    std::string getTestHostName();

    std::string getTestHostNamePath();

    std::string getStaticPath();

    std::string getCategoryPath();

                //@Throws(Exception.constructor)
            
    BasicArrayList getSubStores();

    std::string getTagLocation();

    std::string getPackageLocation();

    std::string getInventoryControl();

    std::string getFtp();

    std::string getFtpPath();

    std::string getFtpUserName();

    std::string getFtpPassword();

    std::string getTestFtp();

    std::string getTestFtpPath();

    std::string getTestFtpUserName();

    std::string getTestFtpPassword();

    std::string getTimeCreated();

    std::string getLastModified();

};

            


        #endif //ORG_ALLBINARY_BUSINESS_CONTEXT_MODULES_STOREFRONTS_BASICSTOREFRONTINTERFACE_H
