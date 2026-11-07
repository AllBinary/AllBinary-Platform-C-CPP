
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
        



        #ifndef ORG_ALLBINARY_LOGIC_JAVA_ARRAY_INTARRAYUTIL_CPP
        #define ORG_ALLBINARY_LOGIC_JAVA_ARRAY_INTARRAYUTIL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/java/array/IntArrayUtil.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/logic/string/StringMaker.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

IntArrayUtil::IntArrayUtil(){
}


    auto IntArrayUtil::toString(std::vector<int32_t> array) -> std::string{

    StringMaker* stringBuffer = new StringMaker();;
    




                        for (
    int32_t index = 0;index < array.size(); index++)
        {
stringBuffer->appendint(array[index]);
    

                        if(index < array.size())
                        
                                    {
                                    stringBuffer->append(", ");
    

                                    }
                                
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return JavaString::valueOf(stringBuffer);;
    
}


    auto IntArrayUtil::toString(std::vector<std::vector<int32_t>> array) -> std::string{

    StringMaker* stringBuffer = new StringMaker();;
    




                        for (
    int32_t index = 0;index < array.size(); index++)
        {
stringBuffer->append("{");
    




                        for (
    int32_t index2 = 0;index2 < array[index].size(); index2++)
        {
stringBuffer->appendint(array[index][index2]);
    

                        if(index2 < array[index].size() -1)
                        
                                    {
                                    stringBuffer->append(", ");
    

                                    }
                                
}

stringBuffer->append("}");
    

                        if(index < array.size() -1)
                        
                                    {
                                    stringBuffer->append(", \n");
    

                                    }
                                
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return JavaString::valueOf(stringBuffer);;
    
}


    auto IntArrayUtil::toString(std::vector<std::vector<std::vector<int32_t>>> array) -> std::string{

    StringMaker* stringBuffer = new StringMaker();;
    




                        for (
    int32_t index = 0;index < array.size(); index++)
        {
stringBuffer->append("{");
    




                        for (
    int32_t index2 = 0;index2 < array[index].size(); index2++)
        {
stringBuffer->append("{");
    




                        for (
    int32_t index3 = 0;index3 < array[index][index2].length; index3++)
        {
stringBuffer->appendint(array[index][index2][index3]);
    

                        if(index3 < array[index][index2].length -1)
                        
                                    {
                                    stringBuffer->append(", ");
    

                                    }
                                
}

stringBuffer->append("}");
    

                        if(index2 < array[index].size() -1)
                        
                                    {
                                    stringBuffer->append(", ");
    

                                    }
                                
}

stringBuffer->append("}");
    

                        if(index < array.size() -1)
                        
                                    {
                                    stringBuffer->append(", \n");
    

                                    }
                                
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return JavaString::valueOf(stringBuffer);;
    
}




        #endif //ORG_ALLBINARY_LOGIC_JAVA_ARRAY_INTARRAYUTIL_CPP
