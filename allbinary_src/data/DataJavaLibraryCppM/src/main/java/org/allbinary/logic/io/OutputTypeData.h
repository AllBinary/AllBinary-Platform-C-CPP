
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
        



        #ifndef ORG_ALLBINARY_LOGIC_IO_OUTPUTTYPEDATA_H
        #define ORG_ALLBINARY_LOGIC_IO_OUTPUTTYPEDATA_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class OutputTypeData
            : public virtual Object
         {

    private: static OutputTypeData* instance_owner();
    private: static OutputTypeData* instance;

    public: static OutputTypeData* getInstance();

private: OutputTypeData();

    public: const std::string NAME = "OUTPUT_TYPE_NAME";

};

            


        #endif //ORG_ALLBINARY_LOGIC_IO_OUTPUTTYPEDATA_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_IO_OUTPUTTYPEDATA_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_IO_OUTPUTTYPEDATA_H_COMPLETE
        
        #endif
    
