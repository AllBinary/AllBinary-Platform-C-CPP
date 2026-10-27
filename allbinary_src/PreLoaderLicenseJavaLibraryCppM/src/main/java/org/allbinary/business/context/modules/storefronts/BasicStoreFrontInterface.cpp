
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
        



            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/util/BasicArrayList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class BasicStoreFrontInterface {

    public: virtual std::string getTestHtmlPath() = 0;

    public: virtual std::string getCurrentHostName() = 0;

    public: virtual std::string getCurrentHostNamePath() = 0;

    public: virtual std::string getCurrentHomeHostName() = 0;

    public: virtual std::string getCurrentHomeHostNamePath() = 0;

    public: virtual std::string getName() = 0;

    public: virtual std::string getUserName() = 0;

    public: virtual std::string getBasketName() = 0;

    public: virtual std::string getHomeHostName() = 0;

    public: virtual std::string getHomeHostNamePath() = 0;

    public: virtual std::string getHostName() = 0;

    public: virtual std::string getHostNamePath() = 0;

    public: virtual std::string getTestHomeHostName() = 0;

    public: virtual std::string getTestHomeHostNamePath() = 0;

    public: virtual std::string getTestHostName() = 0;

    public: virtual std::string getTestHostNamePath() = 0;

    public: virtual std::string getStaticPath() = 0;

    public: virtual std::string getCategoryPath() = 0;

                //@Throws(Exception.constructor)
            
    public: virtual BasicArrayList* getSubStores() = 0;

    public: virtual std::string getTagLocation() = 0;

    public: virtual std::string getPackageLocation() = 0;

    public: virtual std::string getInventoryControl() = 0;

    public: virtual std::string getFtp() = 0;

    public: virtual std::string getFtpPath() = 0;

    public: virtual std::string getFtpUserName() = 0;

    public: virtual std::string getFtpPassword() = 0;

    public: virtual std::string getTestFtp() = 0;

    public: virtual std::string getTestFtpPath() = 0;

    public: virtual std::string getTestFtpUserName() = 0;

    public: virtual std::string getTestFtpPassword() = 0;

    public: virtual std::string getTimeCreated() = 0;

    public: virtual std::string getLastModified() = 0;

};

            

