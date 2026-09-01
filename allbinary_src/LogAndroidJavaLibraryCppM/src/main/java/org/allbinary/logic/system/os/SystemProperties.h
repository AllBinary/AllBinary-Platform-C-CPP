
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
        
            #include "../../../../../java/lang/RuntimeException.h"
        
            #include "../../../../../java/lang/System.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        //ActualPlatform
/*actual*/ class SystemProperties
            : public Object
         {

    private: static SystemProperties instance() { return SystemProperties(); }

    /*actual*/ public: static SystemProperties getInstance();

    private: const std::string OS_NAME = "os.name";

    private: const std::string OS_ARCH = "os.arch";

    private: const std::string OS_VERSION = "os.version";

private: SystemProperties();

    /*actual*/ public: std::string getName();

    /*actual*/ public: std::string getArch();

    /*actual*/ public: std::string getVersion();

    public: std::string getUserHomePath();

};

            


        #endif //ORG_ALLBINARY_LOGIC_SYSTEM_OS_SYSTEMPROPERTIES_H
