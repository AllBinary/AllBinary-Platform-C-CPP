
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
        
#include <java/lang/reflect/Constructor.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class ConstructorUtil
            : public Object
         {
        

    public static string viewAll(Function myClass, string lineBreak){

    stringBuffer: StringMaker = new StringMaker();;
    

    constructor: std::vector<Constructor> = myClass!.getConstructors()!;;
    
stringBuffer!.append("Constructors: ");
    
stringBuffer!.append(lineBreak);
    




                        for (
    index: int32_t = 0;index < constructor.length; index++)
        {
stringBuffer!.append(ConstructorUtil.view(constructor[index]!, lineBreak));
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer!.toString();;
    
}


    public static string view(Constructor constructor, string lineBreak){

                        if(constructor != 
                                    null
                                )
                        
                                    {
                                    
    commonSeps: CommonSeps = CommonSeps.getInstance()!;;
    

    stringBuffer: StringMaker = new StringMaker();;
    
stringBuffer!.append(constructor.getName());
    

    classes: std::vector<Function> = constructor.getParameterTypes()!;;
    




                        for (
    index: int32_t = 0;index < classes.length; index++)
        {
stringBuffer!.append(commonSeps!.SPACE);
    
stringBuffer!.append(classes[index]!.getName());
    
stringBuffer!.append(commonSeps!.COLON);
    
stringBuffer!.appendint(index);
    
}

stringBuffer!.append(lineBreak);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer!.toString();;
    

                                    }
                                
                             else 
                        if()
                        
}


private constructor (){

            super();
        }


};

            

