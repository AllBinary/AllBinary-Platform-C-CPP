
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
        



        #ifndef ORG_ALLBINARY_LOGIC_JAVA_BYTEUTIL_BYTEUTIL_H
        #define ORG_ALLBINARY_LOGIC_JAVA_BYTEUTIL_BYTEUTIL_H

            #include <vector>
        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class ByteUtil
            : public Object
         {

    private: static ByteUtil instance() { return ByteUtil(); }

    public: static ByteUtil getInstance();

private: ByteUtil();

    public: std::vector<int8_t> xor(std::vector<int8_t> array, int8_t mask);

    public: std::vector<int8_t> not(std::vector<int8_t> array);

    public: std::vector<int8_t> xorByte(std::vector<int8_t> array, int32_t index);

    public: bool compare(std::vector<int8_t> newByteArray, std::vector<int8_t> oldByteArray);

    public: bool compareWithStats(std::vector<int8_t> newByteArray, int32_t newSize, std::vector<int8_t> oldByteArray, std::vector<int32_t> stats);

};

            


        #endif //ORG_ALLBINARY_LOGIC_JAVA_BYTEUTIL_BYTEUTIL_H
