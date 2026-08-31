
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
        



        #ifndef ORG_ALLBINARY_LOGIC_SYSTEM_OS_SYSTEMPROPERTIES_H
        #define ORG_ALLBINARY_LOGIC_SYSTEM_OS_SYSTEMPROPERTIES_H

            #include "../../../../../java/lang/Object.h"
        
            #include "../../../../../java/lang/System.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        //ActualPlatform
/*actual*/ class SystemProperties
            : public Object
         {
        

    private: static const instance: SystemProperties = new SystemProperties();

    /*actual*/ public static SystemProperties getInstance();

    private: const OS_NAME: string = "os.name";

    private: const OS_ARCH: string = "os.arch";

    private: const OS_VERSION: string = "os.version";

    private: const USER_HOME: string = "user.home";

private constructor ();

    /*actual*/ public string getName();

    /*actual*/ public string getArch();

    /*actual*/ public string getVersion();

    public string getUserHomePath();

};

            


        #endif //ORG_ALLBINARY_LOGIC_SYSTEM_OS_SYSTEMPROPERTIES_H
