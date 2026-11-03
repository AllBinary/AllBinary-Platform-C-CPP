
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
        



        #ifndef ORG_ALLBINARY_LOGIC_IO_OUTPUTTYPEDATA_CPP
        #define ORG_ALLBINARY_LOGIC_IO_OUTPUTTYPEDATA_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/io/OutputTypeData.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
auto OutputTypeData::instance_owner() -> OutputTypeData* { static std::unique_ptr<OutputTypeData> value(new OutputTypeData()); return value.get(); }
OutputTypeData* OutputTypeData::instance = OutputTypeData::instance_owner();

OutputTypeData::OutputTypeData(){
}


    auto OutputTypeData::getInstance() -> OutputTypeData*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return OutputTypeData::instance;
    
}




        #endif //ORG_ALLBINARY_LOGIC_IO_OUTPUTTYPEDATA_CPP
