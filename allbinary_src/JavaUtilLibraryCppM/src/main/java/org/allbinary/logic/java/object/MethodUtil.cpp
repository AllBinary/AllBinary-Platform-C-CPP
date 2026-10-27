
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
        



        #ifndef ORG_ALLBINARY_LOGIC_JAVA_ANYTYPE_METHODUTIL_CPP
        #define ORG_ALLBINARY_LOGIC_JAVA_ANYTYPE_METHODUTIL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/java/anyType/MethodUtil.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Class.h"
        
#include <java/lang/reflect/Method.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/java/anyType/ParamsUtil.h"


MethodUtil::MethodUtil(){
}


    auto MethodUtil::viewAll(Class* myClass, std::string lineBreak) -> std::string{

    StringMaker* stringBuffer = new StringMaker();;
    

    std::vector<Method*> method = myClass->getMethods();;
    
stringBuffer->append("Methods: ");
    
stringBuffer->append(lineBreak);
    




                        for (
    int32_t index = 0;index < method.size(); index++)
        {
stringBuffer->append(method[index]->getReturnType()->getName());
    
stringBuffer->append(" ");
    
stringBuffer->append(method[index]->getName());
    
stringBuffer->append("(");
    
ParamsUtil::viewParams(method[index]->getParameterTypes());
    
stringBuffer->append(")");
    
stringBuffer->append(lineBreak);
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer->toString();;
    
}




        #endif //ORG_ALLBINARY_LOGIC_JAVA_ANYTYPE_METHODUTIL_CPP
