
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
        
            #include "../../../../java/lang/Object.h"
        
            #include "../../../../java/lang/ClassLoader.h"
        
            #include "../../../../java/lang/Exception.h"
        
            #include "../../../../java/lang/Integer.h"
        
#include <java/io/ByteArrayInputStream.h>

      
#include <java/io/ByteArrayOutputStream.h>

      
#include <java/io/FileInputStream.h>

      
#include <java/io/InputStream.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/io/StreamUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        //J2SE - PC
class ResourceUtil
            : public Object
         {

    private: static ResourceUtil instance() { return ResourceUtil(); }

    public: static ResourceUtil getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ResourceUtil::instance();
    
}


    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: std::string path = StringUtil::getInstance().EMPTY_STRING;

    private: std::string ext = StringUtil::getInstance().EMPTY_STRING;

private: ResourceUtil(){
}


    public: void setLoadingPaths(std::string path, std::string ext){
this->path= path;
    
this->ext= ext;
    
}


    public: void setClassLoader(ClassLoader classLoader){
}


                //@Throws(Exception.constructor)
            
    public: InputStream getResourceAsStream(std::string resource){

    InputStream inputStream = this->getResourceAsStreamAtStart(resource, 2);;
    

                        if(inputStream == 
                                    nullptr
                                )
                        
                                    {
                                    inputStream= this->getResourceAsStreamAtStart(resource, 1);
    

                        if(inputStream == 
                                    nullptr
                                )
                        
                                    {
                                    


                            throw Exception(StringMaker().append("Unable to obtain: ").append(resource).toString());
                    

                                    }
                                

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return inputStream;
    
}


                //@Throws(Exception.constructor)
            
    private: InputStream getResourceAsStreamAtStart(std::string resource, int32_t startIndex){

    InputStream inputStream = FileInputStream(StringMaker().append(this->path).append(resource).append(this->ext).toString());;
    

                        if(inputStream != 
                                    nullptr
                                )
                        
                                    {
                                    
    std::vector<int8_t> byteArray = new Array(inputStream.available());;
    
StreamUtil::getInstance().getByteArray(inputStream, ByteArrayOutputStream(), byteArray);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ByteArrayInputStream(byteArray);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return inputStream;
    
}


    public: void addResource(std::string resource, Integer value){
}


};

            

