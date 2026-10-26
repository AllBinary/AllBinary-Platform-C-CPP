
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
        
#include <java/lang/reflect/Constructor.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class ConstructorUtil
            : public Object
         {

    public: static std::string viewAll(Class* myClass, std::string lineBreak){

    StringMaker stringBuffer = StringMaker();;
    

    std::vector<Constructor> constructor = myClass.getConstructors();;
    
stringBuffer.append("Constructors: ");
    
stringBuffer.append(lineBreak);
    




                        for (
    int32_t index = 0;index < constructor.size(); index++)
        {
stringBuffer.append(ConstructorUtil::view(constructor[index], lineBreak));
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer.toString();;
    
}


    public: static std::string view(Constructor constructor, std::string lineBreak){

                        if(constructor != 
                                    nullptr
                                )
                        
                                    {
                                    
    CommonSeps commonSeps = CommonSeps::getInstance();;
    

    StringMaker stringBuffer = StringMaker();;
    
stringBuffer.append(constructor.getName());
    

    std::vector<Class*> classes = constructor.getParameterTypes();;
    




                        for (
    int32_t index = 0;index < classes.size(); index++)
        {
stringBuffer.append(commonSeps.SPACE);
    
stringBuffer.append(classes[index].getName());
    
stringBuffer.append(commonSeps.COLON);
    
stringBuffer.appendint(index);
    
}

stringBuffer.append(lineBreak);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer.toString();;
    

                                    }
                                
                             else 
                        if()
                        
}


private: ConstructorUtil(){
}


};

            

