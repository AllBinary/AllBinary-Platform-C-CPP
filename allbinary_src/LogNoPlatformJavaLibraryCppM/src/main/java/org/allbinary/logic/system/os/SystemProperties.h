
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/RuntimeException.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        //NoPlatform
class SystemProperties
            : public virtual Object
         {

    private: static inline SystemProperties* instance;

    public: static SystemProperties* getInstance();



    public: std::string getName();

    public: std::string getArch();

    public: std::string getVersion();

    public: std::string getUserHomePath();

};

            


        #endif //ORG_ALLBINARY_LOGIC_SYSTEM_OS_SYSTEMPROPERTIES_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_SYSTEM_OS_SYSTEMPROPERTIES_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_SYSTEM_OS_SYSTEMPROPERTIES_H_COMPLETE
        
        #endif
    
