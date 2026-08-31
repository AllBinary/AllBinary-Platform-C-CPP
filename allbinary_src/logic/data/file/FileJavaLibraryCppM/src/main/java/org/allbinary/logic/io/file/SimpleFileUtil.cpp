
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
        

    private: static const instance: SimpleFileUtil = new SimpleFileUtil();

    public static SimpleFileUtil getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return SimpleFileUtil.instance;
    
}


    public static OutputStream nullOutputStream(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new class extends OutputStream
                                {
                                
                //@Throws(IOException.constructor)
            
    public write(int32_t b){
}

                //@Throws(IOException.constructor)
            
    public write(std::vector<int8_t> b, int32_t off, int32_t len){
}

    public close(){
}

                                }
                            ;
    
}


    public static Writer nullWriter(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new class extends Writer
                                {
                                
    private: closed: bool= false;
                //@Throws(IOException.constructor)
            
    public Writer append(char c){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this;
    
}

                //@Throws(IOException.constructor)
            
    public Writer append(CharSequence csq){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this;
    
}

                //@Throws(IOException.constructor)
            
    public Writer append(CharSequence csq, int32_t start, int32_t end){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this;
    
}

                //@Throws(IOException.constructor)
            
    public write(int32_t c){
}

                //@Throws(IOException.constructor)
            
    public write(std::vector<char> cbuf, int32_t off, int32_t len){
}

                //@Throws(IOException.constructor)
            
    public write(string str){
}

                //@Throws(IOException.constructor)
            
    public write(string str, int32_t off, int32_t len){
}

                //@Throws(IOException.constructor)
            
    public flush(){
}

    public close(){
}

                                }
                            ;
    
}


    public static Reader nullReader(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new class extends Reader
                                {
                                
                //@Throws(IOException.constructor)
            
    public int32_t read(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return  -1;
    
}

                //@Throws(IOException.constructor)
            
    public int32_t read(std::vector<char> cbuf, int32_t off, int32_t len){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return  -1;
    
}

                //@Throws(IOException.constructor)
            
    public int32_t read(CharBuffer target){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return  -1;
    
}

                //@Throws(IOException.constructor)
            
    public bool ready(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}

                //@Throws(IOException.constructor)
            
    public int64_t skip(int64_t n){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return 0;
    
}

    public close(){
}

                                }
                            ;
    
}


    const logUtil: LogUtil = LogUtil.getInstance()!;

    public const NULL_WRITER: Writer = SimpleFileUtil.nullWriter()!;

    public const NULL_READER: Reader = SimpleFileUtil.nullReader()!;

    private: const commonStrings: CommonStrings = CommonStrings.getInstance()!;

    private: const nullUtil: NullUtil = NullUtil.getInstance()!;

    private: const streamUtil: StreamUtil = StreamUtil.getInstance()!;

    public BasicArrayList loadFileAsList(InputStream inputStream, int32_t max, std::vector<int8_t> byteArray1){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.loadFileAsListReturnLine(inputStream, max, byteArray1, 0);;
    
}


    public BasicArrayList loadFileAsListReturnLine(InputStream inputStream, int32_t max, std::vector<int8_t> byteArray1, int32_t includeReturnLine){

    stringList: BasicArrayList = new BasicArrayListD();;
    

                        if(inputStream == 
                                    null
                                )
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringList;
    

                                    }
                                

    byteArray: std::vector<int8_t> = this.nullUtil!.NULL_BYTE_ARRAY;;
    

        try {
            
    outputStream2: ByteArrayOutputStream = new ByteArrayOutputStream(max);;
    
byteArray= this.streamUtil!.getByteArray(inputStream, outputStream2, byteArray1);
    
this.streamUtil!.close(inputStream);
    

                //: 
} catch(e) 
            {
this.streamUtil!.close(inputStream);
    
this.logUtil!.put(this.commonStrings!.EXCEPTION, this, this.commonStrings!.ADD, e);
    
}


                        if(byteArray == 
                                    null
                                )
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringList;
    

                                    }
                                

    size: int32_t = byteArray!.length
                ;;
    

    index: int32_t = 0;;
    

    startIndex: int32_t= 0;;
    

    returnLine: int32_t = 0;;
    

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
                                

    s: string = String.fromCharCode(...byteArray);;
    
stringList!.add(s);
    
index++;
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringList;
    
}


    public string createStringFromArrayOfStrings(std::vector<string> stringArray){

    stringMaker: StringMaker = new StringMaker();;
    

    size: int32_t = stringArray!.length
                ;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {
stringMaker!.append(stringArray[index]!);
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringMaker!.toString();;
    
}


};

            

