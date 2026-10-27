
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

        
            #include "java/lang/Object.h"
        
            #include "java/lang/RuntimeException.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        //ActualPlatform
/*actual*/ class SystemProperties
            : public Object
         {

    private: static SystemProperties* instance() { static std::unique_ptr<SystemProperties> value(new SystemProperties()); return value.get(); }

    /*actual*/ public: static SystemProperties* getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return SystemProperties::instance();
    
}


    private: const std::string OS_NAME = "os.name";

    private: const std::string OS_ARCH = "os.arch";

    private: const std::string OS_VERSION = "os.version";

private: SystemProperties(){
}


    /*actual*/ public: std::string getName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->OS_NAME;
    
}


    /*actual*/ public: std::string getArch(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->OS_ARCH;
    
}


    /*actual*/ public: std::string getVersion(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->OS_VERSION;
    
}


    public: std::string getUserHomePath(){



                            throw new RuntimeException();
                    
}


};

            

