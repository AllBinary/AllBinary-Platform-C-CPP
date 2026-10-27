
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
        



        #ifndef ORG_ALLBINARY_LOGIC_IO_INPUTOUTPUTTYPEDATA_CPP
        #define ORG_ALLBINARY_LOGIC_IO_INPUTOUTPUTTYPEDATA_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/io/InputOutputTypeData.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
auto InputOutputTypeData::instance_owner() -> InputOutputTypeData* { static std::unique_ptr<InputOutputTypeData> value(new InputOutputTypeData()); return value.get(); }
InputOutputTypeData* InputOutputTypeData::instance = InputOutputTypeData::instance_owner();

    auto InputOutputTypeData::getInstance() -> InputOutputTypeData*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return InputOutputTypeData::instance;
    
}


InputOutputTypeData::InputOutputTypeData() : DEFAULT(this->JSP), DEFAULT_FRAGMENT(this->JSP_FRAGMENT){
}




        #endif //ORG_ALLBINARY_LOGIC_IO_INPUTOUTPUTTYPEDATA_CPP
