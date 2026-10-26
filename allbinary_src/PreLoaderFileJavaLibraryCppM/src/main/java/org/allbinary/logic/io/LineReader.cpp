
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
        
            #include "java/lang/Exception.h"
        
#include <java/io/DataInputStream.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "AbFileInputStream.h"

class LineReader
            : public Object
         {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: const CommonStrings commonStrings = CommonStrings::getInstance();

    private: std::string fileName;

    private: std::string string;

    private: int32_t index = 0;

    private: AbFileInputStream idFile;

    private: DataInputStream idData;

public: LineReader(std::string fileName){

        try {
            
    std::vector<int8_t> bytes = std::vector<int8_t>(100000);;
    
this->fileName= fileName;
    
this->idFile= AbFileInputStream(fileName);
    
this->idFile.read(bytes);
    
this->string= String.fromCharCode(...bytes);
    

                //: 
} catch(e) 
            {
this->logUtil.put("File: " +fileName, this, "LineReader", e);
    


                            {
                            
                            }
                    
}

}


    public: bool hasNext(){

        try {
            
    int32_t nextIndex = this->string.indexOf(CommonSeps::getInstance().NEW_LINE, index);;
    

                        if(nextIndex ==  -1)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                //: 
} catch(e) 
            {
this->logUtil.put(commonStrings.EXCEPTION, this, "hasNext", e);
    


                            {
                            
                            }
                    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}

}


                //@Throws(Exception.constructor)
            
    public: std::string next(){

        try {
            
    int32_t nextIndex = this->string.indexOf(CommonSeps::getInstance().NEW_LINE, index);;
    

                        if(nextIndex ==  -1)
                        
                                    {
                                    


                            throw Exception("next() should have been called first");
                    

                                    }
                                

    std::string temp = this->string.substring(index, nextIndex);;
    
index= nextIndex +1;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return temp;
    

                //: 
} catch(e) 
            {
this->logUtil.put(commonStrings.EXCEPTION, this, "next", e);
    


                            {
                            
                            }
                    



                            throw e;
                    
}

}


};

            

