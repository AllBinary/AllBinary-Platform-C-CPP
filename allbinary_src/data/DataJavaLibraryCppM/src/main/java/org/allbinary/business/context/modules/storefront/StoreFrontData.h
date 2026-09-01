
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_CONTEXT_MODULES_STOREFRONT_STOREFRONTDATA_H
        #define ORG_ALLBINARY_BUSINESS_CONTEXT_MODULES_STOREFRONT_STOREFRONTDATA_H

            #include "../../../../../../java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class StoreFrontData
            : public Object
         {

    private: static StoreFrontData instance() { return StoreFrontData(); }

    public: static StoreFrontData getInstance();

    public: const std::string CANCEL = "Cancel Store Front";

    public: const std::string SELECT = "Select Store Front";

    public: const std::string INSTALL = "Install Store Front";

    public: const std::string INSTALL_COMPLETE = "Install Store Front Complete";

    public: const std::string NAME = "STOREFRONT_NAME";

    public: const std::string CURRENTHOSTNAME = "STOREFRONT_CURRENTHOSTNAME";

    public: const std::string CURRENTHOSTNAMEPATH = "STOREFRONT_CURRENTHOSTNAMEPATH";

    public: const std::string CURRENTHOMEHOSTNAME = "STOREFRONT_CURRENTHOMEHOSTNAME";

    public: const std::string CURRENTHOMEHOSTNAMEPATH = "STOREFRONT_CURRENTHOMEHOSTNAMEPATH";

    public: const std::string HOMEHOSTNAME = "STOREFRONT_HOMEHOSTNAME";

    public: const std::string HOMEHOSTNAMEPATH = "STOREFRONT_HOMEHOSTNAMEPATH";

    public: const std::string HOSTNAME = "STOREFRONT_HOSTNAME";

    public: const std::string HOSTNAMEPATH = "STOREFRONT_HOSTNAMEPATH";

    public: const std::string TESTHOMEHOSTNAME = "STOREFRONT_TESTHOMEHOSTNAME";

    public: const std::string TESTHOMEHOSTNAMEPATH = "STOREFRONT_TESTHOMEHOSTNAMEPATH";

    public: const std::string TESTHOSTNAME = "STOREFRONT_TESTHOSTNAME";

    public: const std::string TESTHOSTNAMEPATH = "STOREFRONT_TESTHOSTNAMEPATH";

    public: const std::string IMAGEPATH = "STOREFRONT_IMAGEPATH";

    public: const std::string STATICPATH = "STOREFRONT_STATICPATH";

    public: const std::string CATEGORYPATH = "STOREFRONT_CATEGORYPATH";

    public: const std::string INVENTORYCONTROL = "STOREFRONT_INVENTORYCONTROL";

    public: const std::string CONFIGURATION = "STOREFRONT_CONFIGURATION";

    public: const std::string SUBSTORES = "STOREFRONT_SUBSTORES";

    public: const std::string TAGLOCATION = "STOREFRONT_TAGLOCATION";

    public: const std::string PACKAGELOCATION = "STOREFRONT_PACKAGELOCATION";

    public: const std::string FTP = "STOREFRONT_FTP";

    public: const std::string FTPPATH = "STOREFRONT_FTPPATH";

    public: const std::string FTPUSERNAME = "STOREFRONT_FTPUSERNAME";

    public: const std::string FTPPASSWORD = "STOREFRONT_FTPPASSWORD";

    public: const std::string TESTFTP = "STOREFRONT_TESTFTP";

    public: const std::string TESTFTPPATH = "STOREFRONT_TESTFTPPATH";

    public: const std::string TESTFTPUSERNAME = "STOREFRONT_TESTFTPUSERNAME";

    public: const std::string TESTFTPPASSWORD = "STOREFRONT_TESTFTPPASSWORD";

    public: const std::string SELECTSTORENAME = "STOREFRONT_SELECTSTORENAME";

};

            


        #endif //ORG_ALLBINARY_BUSINESS_CONTEXT_MODULES_STOREFRONT_STOREFRONTDATA_H
