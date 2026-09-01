
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2025 AllBinary 
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
        
            #include "../../../../../java/lang/Object.h"
        
            #include "../../../../../java/lang/Exception.h"
        
            #include "../../../../../java/lang/CharSequence.h"
        
#include <java/io/ByteArrayOutputStream.h>

      
#include <java/io/IOException.h>

      
#include <java/io/InputStream.h>

      
#include <java/io/OutputStream.h>

      
#include <java/io/Reader.h>

      
#include <java/io/Writer.h>

      
#include <java/nio/CharBuffer.h>

      
#include <org/allbinary/logic/NullUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/io/StreamUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class SimpleFileUtil
            : public Object
         {

    private: static SimpleFileUtil instance() { return SimpleFileUtil(); }

    public: static SimpleFileUtil getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return SimpleFileUtil::instance();
    
}


    public: static OutputStream nullOutputStream(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return class extends OutputStream
                                {
                                
                //@Throws(IOException.constructor)
            
    public: void write(int32_t b){
}

                //@Throws(IOException.constructor)
            
    public: void write(std::vector<int8_t> b, int32_t off, int32_t len){
}

    public: void close(){
}

                                }
                            ;
    
}


    public: static Writer nullWriter(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return class extends Writer
                                {
                                
    bool closed= false;
                //@Throws(IOException.constructor)
            
    public: Writer append(char c){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return *this;
    
}

                //@Throws(IOException.constructor)
            
    public: Writer append(CharSequence csq){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return *this;
    
}

                //@Throws(IOException.constructor)
            
    public: Writer append(CharSequence csq, int32_t start, int32_t end){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return *this;
    
}

                //@Throws(IOException.constructor)
            
    public: void write(int32_t c){
}

                //@Throws(IOException.constructor)
            
    public: void write(std::vector<char> cbuf, int32_t off, int32_t len){
}

                //@Throws(IOException.constructor)
            
    public: void write(std::string str){
}

                //@Throws(IOException.constructor)
            
    public: void write(std::string str, int32_t off, int32_t len){
}

                //@Throws(IOException.constructor)
            
    public: void flush(){
}

    public: void close(){
}

                                }
                            ;
    
}


    public: static Reader nullReader(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return class extends Reader
                                {
                                
                //@Throws(IOException.constructor)
            
    public: int32_t read(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return  -1;
    
}

                //@Throws(IOException.constructor)
            
    public: int32_t read(std::vector<char> cbuf, int32_t off, int32_t len){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return  -1;
    
}

                //@Throws(IOException.constructor)
            
    public: int32_t read(CharBuffer target){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return  -1;
    
}

                //@Throws(IOException.constructor)
            
    public: bool ready(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}

                //@Throws(IOException.constructor)
            
    public: int64_t skip(int64_t n){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return 0;
    
}

    public: void close(){
}

                                }
                            ;
    
}


    protected: const LogUtil logUtil = LogUtil::getInstance();

    public: const Writer NULL_WRITER = SimpleFileUtil::nullWriter();

    public: const Reader NULL_READER = SimpleFileUtil::nullReader();

    private: const CommonStrings commonStrings = CommonStrings::getInstance();

    private: const NullUtil nullUtil = NullUtil::getInstance();

    private: const StreamUtil streamUtil = StreamUtil::getInstance();

    public: BasicArrayList loadFileAsList(InputStream inputStream, int32_t max, std::vector<int8_t> byteArray1){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->loadFileAsListReturnLine(inputStream, max, byteArray1, 0);;
    
}


    public: BasicArrayList loadFileAsListReturnLine(InputStream inputStream, int32_t max, std::vector<int8_t> byteArray1, int32_t includeReturnLine){

    BasicArrayList stringList = BasicArrayListD();;
    

                        if(inputStream == 
                                    nullptr
                                )
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringList;
    

                                    }
                                

    std::vector<int8_t> byteArray = this->nullUtil.NULL_BYTE_ARRAY;;
    

        try {
            
    ByteArrayOutputStream outputStream2 = ByteArrayOutputStream(max);;
    
byteArray= this->streamUtil.getByteArray(inputStream, outputStream2, byteArray1);
    
this->streamUtil.close(inputStream);
    

                //: 
} catch(e) 
            {
this->streamUtil.close(inputStream);
    
this->logUtil.put(this->commonStrings.EXCEPTION, this, this->commonStrings.ADD, e);
    
}


                        if(byteArray == 
                                    nullptr
                                )
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringList;
    

                                    }
                                

    int32_t size = byteArray.size();;
    

    int32_t index = 0;;
    

    int32_t startIndex= 0;;
    

    int32_t returnLine = 0;;
    

        while(index < size)
        {
startIndex= index;
    

        while(index < size -1 && byteArray[index] != .code'\n'.code)
        {
index++;
    
}


                        if(includeReturnLine == 0)
                        
                                    {
                                    
                        if(index > 0 && byteArray[index -1] == .code'\r'.code)
                        
                                    {
                                    returnLine= 1;
    

                                    }
                                
                        else {
                            returnLine= 0;
    

                        }
                            

                                    }
                                

    std::string s = String.fromCharCode(...byteArray);;
    
stringList.add(s);
    
index++;
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringList;
    
}


    public: std::string createStringFromArrayOfStrings(std::vector<std::string> stringArray){

    StringMaker stringMaker = StringMaker();;
    

    int32_t size = stringArray.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
stringMaker.append(stringArray[index]!);
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringMaker.toString();;
    
}


};

            

