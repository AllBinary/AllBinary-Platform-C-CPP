
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
        



            #include "../../../../../../java/lang/Object.h"
        
            #include "../../../../../../java/lang/Class.h"
        
#include <org/allbinary/logic/java/anyType/ConstructorUtil.h>

      
#include <org/allbinary/logic/java/anyType/InterfaceUtil.h>

      
#include <org/allbinary/logic/java/anyType/MethodUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class ClassUtil
            : public Object
         {
        

    public static string viewAll(any = {} anyType, string lineBreak){

                        if(anyType != 
                                    null
                                )
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ClassUtil.viewAll(anyType!.constructor, lineBreak);;
    

                                    }
                                
                             else 
                        if()
                        
}


    public static string viewAll(Function myClass, string lineBreak){

                        if(myClass != 
                                    null
                                )
                        
                                    {
                                    
    stringBuffer: StringMaker = new StringMaker();;
    

    classes: std::vector<Function> = myClass!.getClasses()!;;
    
stringBuffer!.append(lineBreak);
    
stringBuffer!.append("Class: ");
    
stringBuffer!.append(myClass!.toString()!);
    
stringBuffer!.append(" uses ");
    
stringBuffer!.appendint(classes.length);
    
stringBuffer!.append(" other classes");
    
stringBuffer!.append(lineBreak);
    
stringBuffer!.append(lineBreak);
    
stringBuffer!.append("Classes: ");
    
stringBuffer!.append(lineBreak);
    




                        for (
    index: int32_t = 0;index < classes.length; index++)
        {
stringBuffer!.append("Class: ");
    
stringBuffer!.append(classes[index]!.getName());
    
stringBuffer!.append(lineBreak);
    
}

stringBuffer!.append(InterfaceUtil.viewAll(myClass, lineBreak));
    
stringBuffer!.append(lineBreak);
    
stringBuffer!.append(ConstructorUtil.viewAll(myClass, lineBreak));
    
stringBuffer!.append(lineBreak);
    
stringBuffer!.append(MethodUtil.viewAll(myClass, lineBreak));
    



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

            

