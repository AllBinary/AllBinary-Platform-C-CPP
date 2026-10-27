
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
        



        #ifndef ORG_ALLBINARY_LOGIC_JAVA_ANYTYPE_CLAZZ_CLASSUTIL_CPP
        #define ORG_ALLBINARY_LOGIC_JAVA_ANYTYPE_CLAZZ_CLASSUTIL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/java/anyType/clazz/ClassUtil.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Class.h"
        
#include <org/allbinary/logic/java/anyType/ConstructorUtil.h>

      
#include <org/allbinary/logic/java/anyType/InterfaceUtil.h>

      
#include <org/allbinary/logic/java/anyType/MethodUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

ClassUtil::ClassUtil(){
}


    auto ClassUtil::viewAll(Object* anyType, std::string lineBreak) -> std::string{

                        if(anyType != 
                                    nullptr
                                )
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ClassUtil::viewAll(anyType->getClass(), lineBreak);;
    

                                    }
                                
                             else 
                        if()
                        
}


    auto ClassUtil::viewAll(Class* myClass, std::string lineBreak) -> std::string{

                        if(myClass != 
                                    nullptr
                                )
                        
                                    {
                                    
    StringMaker* stringBuffer = new StringMaker();;
    

    std::vector<Class*> classes = myClass->getClasses();;
    
stringBuffer->append(lineBreak);
    
stringBuffer->append("Class: ");
    
stringBuffer->append(myClass->getName());
    
stringBuffer->append(" uses ");
    
stringBuffer->appendint(classes.size());
    
stringBuffer->append(" other classes");
    
stringBuffer->append(lineBreak);
    
stringBuffer->append(lineBreak);
    
stringBuffer->append("Classes: ");
    
stringBuffer->append(lineBreak);
    




                        for (
    int32_t index = 0;index < classes.size(); index++)
        {
stringBuffer->append("Class: ");
    
stringBuffer->append(classes[index]->getName());
    
stringBuffer->append(lineBreak);
    
}

stringBuffer->append(InterfaceUtil::viewAll(myClass, lineBreak));
    
stringBuffer->append(lineBreak);
    
stringBuffer->append(ConstructorUtil::viewAll(myClass, lineBreak));
    
stringBuffer->append(lineBreak);
    
stringBuffer->append(MethodUtil::viewAll(myClass, lineBreak));
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer->toString();;
    

                                    }
                                
                             else 
                        if()
                        
}




        #endif //ORG_ALLBINARY_LOGIC_JAVA_ANYTYPE_CLAZZ_CLASSUTIL_CPP
