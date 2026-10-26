
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
        



            #include <vector>
        
            #include "java/lang/Object.h"
        
            #include "java/lang/Class.h"
        
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class InterfaceUtil
            : public Object
         {

    public: static std::string viewAll(Class* myClass, std::string lineBreak){

    StringMaker stringBuffer = StringMaker();;
    

    std::vector<Class*> interfaces = myClass.getInterfaces();;
    
stringBuffer.append(lineBreak);
    
stringBuffer.append("Interfaces: ");
    
stringBuffer.append(lineBreak);
    




                        for (
    int32_t index = 0;index < interfaces.size(); index++)
        {
stringBuffer.append("Interface: ");
    
stringBuffer.append(interfaces[index].getName());
    
stringBuffer.append(lineBreak);
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer.toString();;
    
}


    public: static Class* getClass()(std::string interfaceName, std::vector<Class*> interfaces){

                        if(true && interfaces != 
                                    nullptr
                                 && interfaces.size() > 0)
                        
                                    {
                                    



                        for (
    int32_t index = 0;index < interfaces.size(); index++)
        {

                        if(interfaces[index].getName().indexOf(interfaceName) >= 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return interfaces[index];
    

                                    }
                                
}


                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}


    public: static bool isImplemented(Class* clazz, Object* anyType){

    std::vector<Class*> classes = anyType->constructor.name.getInterfaces();;
    




                        for (
    int32_t index = 0;index < classes.size(); index++)
        {

                        if(clazz.toString().compareTo(classes[index].getName()) == 0)
                        


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    public: static bool isImplemented(std::string className, Object* anyType){

    std::vector<Class*> classes = anyType->constructor.name.getInterfaces();;
    




                        for (
    int32_t index = 0;index < classes.size(); index++)
        {

                        if(classes[index].getName().indexOf(className) == 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    public: static std::string isImplementedView(Class* clazz, Object* anyType){

    StringMaker stringBuffer = StringMaker();;
    

    std::vector<Class*> classes = anyType->constructor.name.getInterfaces();;
    
stringBuffer.append("isImplementedView: \n");
    




                        for (
    int32_t index = 0;index < classes.size(); index++)
        {
stringBuffer.append(clazz.toString());
    
stringBuffer.append(" should be = ");
    
stringBuffer.append(classes[index].getName());
    
stringBuffer.append(classes[index].getName());
    
stringBuffer.append(CommonSeps::getInstance().NEW_LINE);
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer.toString();;
    
}


private: InterfaceUtil(){
}


};

            

