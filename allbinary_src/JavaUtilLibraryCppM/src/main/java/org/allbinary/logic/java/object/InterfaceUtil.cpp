
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
        



        #ifndef ORG_ALLBINARY_LOGIC_JAVA_ANYTYPE_INTERFACEUTIL_CPP
        #define ORG_ALLBINARY_LOGIC_JAVA_ANYTYPE_INTERFACEUTIL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/java/anyType/InterfaceUtil.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Class.h"
        
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

InterfaceUtil::InterfaceUtil(){
}


    auto InterfaceUtil::viewAll(Class* myClass, std::string lineBreak) -> std::string{

    StringMaker* stringBuffer = new StringMaker();;
    

    std::vector<Class*> interfaces = myClass->getInterfaces();;
    
stringBuffer->append(lineBreak);
    
stringBuffer->append("Interfaces: ");
    
stringBuffer->append(lineBreak);
    




                        for (
    int32_t index = 0;index < interfaces.size(); index++)
        {
stringBuffer->append("Interface: ");
    
stringBuffer->append(interfaces[index]->getName());
    
stringBuffer->append(lineBreak);
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return JavaString::valueOf(stringBuffer);;
    
}


    auto InterfaceUtil::getClass()(std::string interfaceName, std::vector<Class*> interfaces) -> Class*{

                        if(true && !interfaces.empty() && interfaces.size() > 0)
                        
                                    {
                                    



                        for (
    int32_t index = 0;index < interfaces.size(); index++)
        {

                        if(JavaString::indexOf(interfaces[index]->getName(), interfaceName) >= 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return interfaces[index];
    

                                    }
                                
}


                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return nullptr;
    
}


    auto InterfaceUtil::isImplemented(Class* clazz, Object* anyType) -> bool{

    std::vector<Class*> classes = anyType->getClass()->getInterfaces();;
    




                        for (
    int32_t index = 0;index < classes.size(); index++)
        {

                        if(clazz->getName().compare(classes[index]->getName()) == 0)
                        


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return true;
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return false;
    
}


    auto InterfaceUtil::isImplemented(std::string className, Object* anyType) -> bool{

    std::vector<Class*> classes = anyType->getClass()->getInterfaces();;
    




                        for (
    int32_t index = 0;index < classes.size(); index++)
        {

                        if(JavaString::indexOf(classes[index]->getName(), className) == 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return true;
    

                                    }
                                
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return false;
    
}


    auto InterfaceUtil::isImplementedView(Class* clazz, Object* anyType) -> std::string{

    StringMaker* stringBuffer = new StringMaker();;
    

    std::vector<Class*> classes = anyType->getClass()->getInterfaces();;
    
stringBuffer->append("isImplementedView: \n");
    




                        for (
    int32_t index = 0;index < classes.size(); index++)
        {
stringBuffer->append(clazz->getName());
    
stringBuffer->append(" should be = ");
    
stringBuffer->append(classes[index]->getName());
    
stringBuffer->append(classes[index]->getName());
    
stringBuffer->append(CommonSeps::getInstance()->NEW_LINE);
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return JavaString::valueOf(stringBuffer);;
    
}




        #endif //ORG_ALLBINARY_LOGIC_JAVA_ANYTYPE_INTERFACEUTIL_CPP
