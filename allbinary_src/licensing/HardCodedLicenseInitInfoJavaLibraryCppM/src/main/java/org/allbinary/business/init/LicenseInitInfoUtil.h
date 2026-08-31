
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_INIT_LICENSEINITINFOUTIL_H
        #define ORG_ALLBINARY_BUSINESS_INIT_LICENSEINITINFOUTIL_H

            #include "../../../../java/lang/Object.h"
        
            #include "../../../../java/lang/Exception.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "LicenseInitInfo.h"

class LicenseInitInfoUtil
            : public Object
         {
        

    private: static const instance: LicenseInitInfoUtil = new LicenseInitInfoUtil();

    public static LicenseInitInfoUtil getInstance();

    public const INITFILENAME: string = "licenseinitdata.dat";

    public const ABOUT: string = "about";

    public const PRIVACY_POLICY: string = "privacy_policy";

    private: const OFFICIAL_ALLBINARY_SERVICES_SERVER: string = "https://services.allbinary.com/LicServ/serverssl.php";
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public setFilePath(string filePath);

private constructor ();

                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public write(LicenseInitInfo initData);

                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public LicenseInitInfo read();

                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public LicenseInitInfo readAgain(int32_t initializeCounter);

};

            


        #endif //ORG_ALLBINARY_BUSINESS_INIT_LICENSEINITINFOUTIL_H
