
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
        



        #ifndef ORG_ALLBINARY_LOGIC_IO_ABIOSYSTEM_H
        #define ORG_ALLBINARY_LOGIC_IO_ABIOSYSTEM_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class AbIOSystem
            : public virtual Object
         {

    private: static AbIOSystem* instance_owner();
    private: static AbIOSystem* instance;

    public: static AbIOSystem* getInstance();


            
    public: AbIOSystem();
        
    private: const std::string type = "java.io";

    public: std::string getType();

    public: bool isType(std::string type);

};

            


        #endif //ORG_ALLBINARY_LOGIC_IO_ABIOSYSTEM_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_IO_ABIOSYSTEM_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_IO_ABIOSYSTEM_H_COMPLETE
        
        #endif
    
