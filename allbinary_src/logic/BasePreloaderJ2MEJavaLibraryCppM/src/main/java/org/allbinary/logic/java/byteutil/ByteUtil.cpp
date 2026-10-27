
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
        



        #ifndef ORG_ALLBINARY_LOGIC_JAVA_BYTEUTIL_BYTEUTIL_CPP
        #define ORG_ALLBINARY_LOGIC_JAVA_BYTEUTIL_BYTEUTIL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/java/byteutil/ByteUtil.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
auto ByteUtil::instance_owner() -> ByteUtil* { static std::unique_ptr<ByteUtil> value(new ByteUtil()); return value.get(); }
ByteUtil* ByteUtil::instance = ByteUtil::instance_owner();

    auto ByteUtil::getInstance() -> ByteUtil*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ByteUtil::instance;
    
}


ByteUtil::ByteUtil(){
}


    auto ByteUtil::xor_(std::vector<int8_t> array, int8_t mask) -> std::vector<int8_t>{

    std::vector<int8_t> bytes = std::vector<int8_t>(array.length);;
    

    int32_t size = array.size();;
    

    int32_t index = 0;;
    

    int8_t currentByte;;
    

        while(index < size)
        {
currentByte= array[index];
    
bytes[index]= (currentByte ^ mask);
    
index++;
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return bytes;
    
}


    auto ByteUtil::not_(std::vector<int8_t> array) -> std::vector<int8_t>{

    std::vector<int8_t> bytes = std::vector<int8_t>(array.length);;
    

    int32_t size = array.size();;
    

    int32_t index = 0;;
    

        while(index < size)
        {
bytes[index]= ~array[index];
    
index++;
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return bytes;
    
}


    auto ByteUtil::xorByte(std::vector<int8_t> array, int32_t index) -> std::vector<int8_t>{

    int8_t mask = 0;;
    

                        if(index == 0)
                        mask= 1;
                                

                        if(index == 1)
                        mask= 2;
                                

                        if(index == 2)
                        mask= 4;
                                

                        if(index == 3)
                        mask= 8;
                                

                        if(index == 4)
                        mask= 16;
                                

                        if(index == 5)
                        mask= 32;
                                

                        if(index == 6)
                        mask= 64;
                                

                        if(index == 7)
                        mask=  -127;
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->xor_(array, mask);;
    
}


    auto ByteUtil::compare(std::vector<int8_t> newByteArray, std::vector<int8_t> oldByteArray) -> bool{

                        if(newByteArray.size() != oldByteArray.size())
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    

                                    }
                                
                        else {
                            
                        }
                            

    int32_t size = newByteArray.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

                        if(newByteArray[index] != oldByteArray[index])
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    

                                    }
                                
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    
}


    auto ByteUtil::compareWithStats(std::vector<int8_t> newByteArray, int32_t newSize, std::vector<int8_t> oldByteArray, std::vector<int32_t> stats) -> bool{

                        if(newSize != oldByteArray.size())
                        
                                    {
                                    stats[0]=  -1;
    
stats[2]= newSize;
    
stats[3]= oldByteArray.size();
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    

                                    }
                                
                        else {
                            stats[0]= newSize;
    

                        }
                            
stats[1]= 0;
    

    int32_t size = newSize;;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

                        if(newByteArray[index] != oldByteArray[index])
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    

                                    }
                                
stats[1]++;
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    
}




        #endif //ORG_ALLBINARY_LOGIC_JAVA_BYTEUTIL_BYTEUTIL_CPP
