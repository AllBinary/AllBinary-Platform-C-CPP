
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
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        //NoPlatform
// class SystemProperties
            : public Object
         {

    private: static SystemProperties instance() { return SystemProperties(); }

    public: static SystemProperties getInstance();



    public: std::string getName();

    public: std::string getArch();

    public: std::string getVersion();

    public: std::string getUserHomePath();

};

            


        #endif //ORG_ALLBINARY_LOGIC_SYSTEM_OS_SYSTEMPROPERTIES_H
