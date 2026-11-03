
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
        



        #ifndef ORG_ALLBINARY_LOGIC_CONTROL_SORT_STRINGCOMPARATOR_CPP
        #define ORG_ALLBINARY_LOGIC_CONTROL_SORT_STRINGCOMPARATOR_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/control/sort/StringComparator.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <java/util/Comparator.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

StringComparator::StringComparator(){
}


    auto StringComparator::compare(Object* anyType, Object* object2) -> int32_t{

    std::string string = JavaBoxes::unbox<std::string>(anyType);;
    

    std::string string2 = JavaBoxes::unbox<std::string>(object2);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return string.compare(string2);;
    
}




        #endif //ORG_ALLBINARY_LOGIC_CONTROL_SORT_STRINGCOMPARATOR_CPP
