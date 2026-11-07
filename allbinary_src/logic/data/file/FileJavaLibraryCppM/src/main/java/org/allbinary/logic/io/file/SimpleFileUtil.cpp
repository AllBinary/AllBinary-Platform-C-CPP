
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
        



        #ifndef ORG_ALLBINARY_LOGIC_IO_FILE_SIMPLEFILEUTIL_CPP
        #define ORG_ALLBINARY_LOGIC_IO_FILE_SIMPLEFILEUTIL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/io/file/SimpleFileUtil.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/CharSequence.h"
        
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
        

SimpleFileUtil::SimpleFileUtil() : logUtil(LogUtil::getInstance()), NULL_WRITER(SimpleFileUtil::nullWriter()), NULL_READER(SimpleFileUtil::nullReader()), commonStrings(CommonStrings::getInstance()), nullUtil(NullUtil::getInstance()), streamUtil(StreamUtil::getInstance()) {
        }
        auto SimpleFileUtil::instance_owner() -> SimpleFileUtil* { static std::unique_ptr<SimpleFileUtil> value(new SimpleFileUtil()); return value.get(); }
SimpleFileUtil* SimpleFileUtil::instance = SimpleFileUtil::instance_owner();

    auto SimpleFileUtil::getInstance() -> SimpleFileUtil*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return SimpleFileUtil::instance;
    
}


    auto SimpleFileUtil::nullOutputStream() -> OutputStream*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return []() {
    class Anonymous0 : public OutputStream {
    public:
    using OutputStream::OutputStream;

                //@Throws(IOException.constructor)
            
    public: void write(int32_t b){
}

                //@Throws(IOException.constructor)
            
    public: void write(std::vector<int8_t> b, int32_t off, int32_t len){
}

    public: void close(){
}

    };
    return new Anonymous0();
}();
    
}


    auto SimpleFileUtil::nullWriter() -> Writer*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return []() {
    class Anonymous0 : public Writer {
    public:
    using Writer::Writer;

    bool closed= false;
                //@Throws(IOException.constructor)
            
    public: Writer* append(char c){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this;
    
}

                //@Throws(IOException.constructor)
            
    public: Writer* append(CharSequence* csq){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this;
    
}

                //@Throws(IOException.constructor)
            
    public: Writer* append(CharSequence* csq, int32_t start, int32_t end){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this;
    
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

    };
    return new Anonymous0();
}();
    
}


    auto SimpleFileUtil::nullReader() -> Reader*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return []() {
    class Anonymous0 : public Reader {
    public:
    using Reader::Reader;

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
            
    public: int32_t read(CharBuffer* target){



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

    };
    return new Anonymous0();
}();
    
}


    auto SimpleFileUtil::loadFileAsList(InputStream* inputStream, int32_t max, std::vector<int8_t> byteArray1) -> BasicArrayList*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->loadFileAsListReturnLine(inputStream, max, byteArray1, 0);;
    
}


    auto SimpleFileUtil::loadFileAsListReturnLine(InputStream* inputStream, int32_t max, std::vector<int8_t> byteArray1, int32_t includeReturnLine) -> BasicArrayList*{

    BasicArrayList* stringList = new BasicArrayListD();;
    

                        if(inputStream == 
                                    nullptr
                                )
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return stringList;
    

                                    }
                                

    std::vector<int8_t> byteArray = this->nullUtil->NULL_BYTE_ARRAY;;
    

        try {
            
    ByteArrayOutputStream* outputStream2 = new ByteArrayOutputStream(max);;
    
byteArray= this->streamUtil->getByteArray(inputStream, outputStream2, byteArray1);
    
this->streamUtil->close(inputStream);
    

                //: 
} catch(Exception& e) 
            {
this->streamUtil->close(inputStream);
    
this->logUtil->put(this->commonStrings->EXCEPTION, this, this->commonStrings->ADD, &e);
    
}


                        if(byteArray.empty())
                        
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
    

        while(index < size -1 && byteArray[index] != '\n')
        {
index++;
    
}


                        if(includeReturnLine == 0)
                        
                                    {
                                    
                        if(index > 0 && byteArray[index -1] == '\r')
                        
                                    {
                                    returnLine= 1;
    

                                    }
                                
                        else {
                            returnLine= 0;
    

                        }
                            

                                    }
                                

    std::string s = JavaString::fromChars(byteArray, startIndex, (index +includeReturnLine -returnLine -startIndex));;
    
stringList->add(s);
    
index++;
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return stringList;
    
}


    auto SimpleFileUtil::createStringFromArrayOfStrings(std::vector<std::string> stringArray) -> std::string{

    StringMaker* stringMaker = new StringMaker();;
    

    int32_t size = stringArray.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
stringMaker->append(stringArray[index]);
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return JavaString::valueOf(stringMaker);;
    
}




        #endif //ORG_ALLBINARY_LOGIC_IO_FILE_SIMPLEFILEUTIL_CPP
