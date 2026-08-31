
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
        
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class InterfaceUtil
            : public Object
         {
        

    public static string viewAll(Function myClass, string lineBreak){

    stringBuffer: StringMaker = new StringMaker();;
    

    interfaces: std::vector<Function> = myClass!.getInterfaces()!;;
    
stringBuffer!.append(lineBreak);
    
stringBuffer!.append("Interfaces: ");
    
stringBuffer!.append(lineBreak);
    




                        for (
    index: int32_t = 0;index < interfaces.length; index++)
        {
stringBuffer!.append("Interface: ");
    
stringBuffer!.append(interfaces[index]!.getName());
    
stringBuffer!.append(lineBreak);
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer!.toString();;
    
}


    public static Function constructor(string interfaceName, std::vector<Function> interfaces){

                        if(interfaceName != 
                                    null
                                 && interfaces != 
                                    null
                                 && interfaces.length > 0)
                        
                                    {
                                    



                        for (
    index: int32_t = 0;index < interfaces.length; index++)
        {

                        if(interfaces[index]!.getName()!.indexOf(interfaceName) >= 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return interfaces[index]!;
    

                                    }
                                
}


                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}


    public static bool isImplemented(Function clazz, any = {} anyType){

    classes: std::vector<Function> = anyType!.constructor.name.getInterfaces()!;;
    




                        for (
    index: int32_t = 0;index < classes.length; index++)
        {

                        if(clazz.toString()!.compareTo(classes[index]!.getName()) == 0)
                        


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    public static bool isImplemented(string className, any = {} anyType){

    classes: std::vector<Function> = anyType!.constructor.name.getInterfaces()!;;
    




                        for (
    index: int32_t = 0;index < classes.length; index++)
        {

                        if(classes[index]!.getName()!.indexOf(className) == 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    public static string isImplementedView(Function clazz, any = {} anyType){

    stringBuffer: StringMaker = new StringMaker();;
    

    classes: std::vector<Function> = anyType!.constructor.name.getInterfaces()!;;
    
stringBuffer!.append("isImplementedView: \n");
    




                        for (
    index: int32_t = 0;index < classes.length; index++)
        {
stringBuffer!.append(clazz.toString()!);
    
stringBuffer!.append(" should be = ");
    
stringBuffer!.append(classes[index]!.getName());
    
stringBuffer!.append(classes[index]!.getName());
    
stringBuffer!.append(CommonSeps.getInstance()!.NEW_LINE);
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer!.toString();;
    
}


private constructor (){

            super();
        }


};

            

