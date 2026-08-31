
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
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class ByteUtil
            : public Object
         {
        

    private: static const instance: ByteUtil = new ByteUtil();

    public static ByteUtil getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ByteUtil.instance;
    
}


private constructor (){

            super();
        }


    public std::vector<int8_t> xor(std::vector<int8_t> array, int8_t mask){

    bytes: std::vector<int8_t> = new Array(array.length);;
    

    size: int32_t = array.length
                ;;
    

    index: int32_t = 0;;
    

    currentByte: int8_t;;
    

        while(index < size)
        {
currentByte= array[index]!;
    
bytes[index]= (currentByte ^ mask);
    
index++;
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return bytes;
    
}


    public std::vector<int8_t> not(std::vector<int8_t> array){

    bytes: std::vector<int8_t> = new Array(array.length);;
    

    size: int32_t = array.length
                ;;
    

    index: int32_t = 0;;
    

        while(index < size)
        {
bytes[index]= ~array[index];
    
index++;
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return bytes;
    
}


    public std::vector<int8_t> xorByte(std::vector<int8_t> array, int32_t index){

    mask: int8_t = 0;;
    

                        if(index == 0)
                        mask= 1

                        if(index == 1)
                        mask= 2

                        if(index == 2)
                        mask= 4

                        if(index == 3)
                        mask= 8

                        if(index == 4)
                        mask= 16

                        if(index == 5)
                        mask= 32

                        if(index == 6)
                        mask= 64

                        if(index == 7)
                        mask=  -127



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.xor(array, mask);;
    
}


    public bool compare(std::vector<int8_t> newByteArray, std::vector<int8_t> oldByteArray){

                        if(newByteArray!.length != oldByteArray!.length)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    

                                    }
                                
                        else {
                            
                        }
                            

    size: int32_t = newByteArray!.length
                ;;
    




                        for (
    index: int32_t = 0;index < size; index++)
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


    public bool compareWithStats(std::vector<int8_t> newByteArray, int32_t newSize, std::vector<int8_t> oldByteArray, std::vector<int32_t> stats){

                        if(newSize != oldByteArray!.length)
                        
                                    {
                                    stats[0]=  -1;
    
stats[2]= newSize;
    
stats[3]= oldByteArray!.length;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    

                                    }
                                
                        else {
                            stats[0]= newSize;
    

                        }
                            
stats[1]= 0;
    

    size: int32_t = newSize;;
    




                        for (
    index: int32_t = 0;index < size; index++)
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

            

