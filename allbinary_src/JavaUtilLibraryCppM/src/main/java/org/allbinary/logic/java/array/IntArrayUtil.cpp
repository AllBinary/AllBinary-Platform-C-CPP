
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
        
#include <org/allbinary/logic/string/StringMaker.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class IntArrayUtil
            : public Object
         {
        

    public static string toString(std::vector<int32_t> array){

    stringBuffer: StringMaker = new StringMaker();;
    




                        for (
    index: int32_t = 0;index < array.length; index++)
        {
stringBuffer!.appendint(array[index]!);
    

                        if(index < array.length)
                        
                                    {
                                    stringBuffer!.append(", ");
    

                                    }
                                
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer!.toString();;
    
}


    public static string toString(std::vector<std::vector<int32_t>> array){

    stringBuffer: StringMaker = new StringMaker();;
    




                        for (
    index: int32_t = 0;index < array.length; index++)
        {
stringBuffer!.append("{");
    




                        for (
    index2: int32_t = 0;index2 < array[index]!.length; index2++)
        {
stringBuffer!.appendint(array[index]![index2]!);
    

                        if(index2 < array[index]!.length -1)
                        
                                    {
                                    stringBuffer!.append(", ");
    

                                    }
                                
}

stringBuffer!.append("}");
    

                        if(index < array.length -1)
                        
                                    {
                                    stringBuffer!.append(", \n");
    

                                    }
                                
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer!.toString();;
    
}


    public static string toString(std::vector<std::vector<std::vector<int32_t>>> array){

    stringBuffer: StringMaker = new StringMaker();;
    




                        for (
    index: int32_t = 0;index < array.length; index++)
        {
stringBuffer!.append("{");
    




                        for (
    index2: int32_t = 0;index2 < array[index]!.length; index2++)
        {
stringBuffer!.append("{");
    




                        for (
    index3: int32_t = 0;index3 < array[index]![index2]!.length; index3++)
        {
stringBuffer!.appendint(array[index]![index2]![index3]!);
    

                        if(index3 < array[index]![index2]!.length -1)
                        
                                    {
                                    stringBuffer!.append(", ");
    

                                    }
                                
}

stringBuffer!.append("}");
    

                        if(index2 < array[index]!.length -1)
                        
                                    {
                                    stringBuffer!.append(", ");
    

                                    }
                                
}

stringBuffer!.append("}");
    

                        if(index < array.length -1)
                        
                                    {
                                    stringBuffer!.append(", \n");
    

                                    }
                                
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer!.toString();;
    
}


private constructor (){

            super();
        }


};

            

