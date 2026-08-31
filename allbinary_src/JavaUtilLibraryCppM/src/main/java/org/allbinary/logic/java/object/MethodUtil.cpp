
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
        



            #include "../../../../../java/lang/Object.h"
        
            #include "../../../../../java/lang/Class.h"
        
#include <java/lang/reflect/Method.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ParamsUtil.h"

class MethodUtil
            : public Object
         {
        

    public static string viewAll(Function myClass, string lineBreak){

    stringBuffer: StringMaker = new StringMaker();;
    

    method: std::vector<Method> = myClass!.getMethods()!;;
    
stringBuffer!.append("Methods: ");
    
stringBuffer!.append(lineBreak);
    




                        for (
    index: int32_t = 0;index < method.length; index++)
        {
stringBuffer!.append(method[index]!.getReturnType()!.getName());
    
stringBuffer!.append(" ");
    
stringBuffer!.append(method[index]!.getName());
    
stringBuffer!.append("(");
    
ParamsUtil.viewParams(method[index]!.getParameterTypes());
    
stringBuffer!.append(")");
    
stringBuffer!.append(lineBreak);
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer!.toString();;
    
}


private constructor (){

            super();
        }


};

            

