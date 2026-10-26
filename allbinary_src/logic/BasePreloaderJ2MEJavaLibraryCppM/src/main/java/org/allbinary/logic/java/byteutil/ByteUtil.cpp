
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
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class ByteUtil
            : public Object
         {

    private: static ByteUtil instance() { return ByteUtil(); }

    public: static ByteUtil getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ByteUtil::instance();
    
}


private: ByteUtil(){
}


    public: std::vector<int8_t> xor(std::vector<int8_t> array, int8_t mask){

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


    public: std::vector<int8_t> not(std::vector<int8_t> array){

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


    public: std::vector<int8_t> xorByte(std::vector<int8_t> array, int32_t index){

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
                        return this->xor(array, mask);;
    
}


    public: bool compare(std::vector<int8_t> newByteArray, std::vector<int8_t> oldByteArray){

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


    public: bool compareWithStats(std::vector<int8_t> newByteArray, int32_t newSize, std::vector<int8_t> oldByteArray, std::vector<int32_t> stats){

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


};

            

