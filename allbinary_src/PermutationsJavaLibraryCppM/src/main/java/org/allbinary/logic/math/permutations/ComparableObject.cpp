
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
        



        #ifndef ORG_ALLBINARY_LOGIC_MATH_PERMUTATIONS_COMPARABLEOBJECT_CPP
        #define ORG_ALLBINARY_LOGIC_MATH_PERMUTATIONS_COMPARABLEOBJECT_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/math/permutations/ComparableObject.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Comparable.h"
        
#include <org/allbinary/TsUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

ComparableObject::ComparableObject() {
        }
        
    auto ComparableObject::compareTo(Object* anyType) -> int32_t{

                        if(TsUtil::getInstance()->hashCode(this) < TsUtil::getInstance()->hashCode(anyType))
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return  -1;
    

                                    }
                                
                             else 
                        if(TsUtil::getInstance()->hashCode(this) > TsUtil::getInstance()->hashCode(anyType))
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return 1;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return 0;
    
}




        #endif //ORG_ALLBINARY_LOGIC_MATH_PERMUTATIONS_COMPARABLEOBJECT_CPP
