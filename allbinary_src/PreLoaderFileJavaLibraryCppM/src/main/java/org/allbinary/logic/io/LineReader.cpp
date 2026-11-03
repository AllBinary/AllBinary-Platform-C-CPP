
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
        



        #ifndef ORG_ALLBINARY_LOGIC_IO_LINEREADER_CPP
        #define ORG_ALLBINARY_LOGIC_IO_LINEREADER_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/io/LineReader.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/io/DataInputStream.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/io/AbFileInputStream.h"


LineReader::LineReader(std::string fileName) : logUtil(LogUtil::getInstance()), commonStrings(CommonStrings::getInstance()){

        try {
            
    std::vector<int8_t> bytes = std::vector<int8_t>(100000);;
    
this->fileName= fileName;
    
this->idFile= new AbFileInputStream(fileName);
    
this->idFile->read(bytes);
    
this->string= JavaString::fromChars(bytes);
    

                //: 
} catch(Exception& e) 
            {
this->logUtil->put(JavaString::valueOf("File: ") +JavaString::valueOf(fileName), this, "LineReader", &e);
    


                            {
                            
                            }
                    
}

}


    auto LineReader::hasNext() -> bool{

        try {
            
    int32_t nextIndex = JavaString::indexOf(this->string, CommonSeps::getInstance()->NEW_LINE, index);;
    

                        if(nextIndex ==  -1)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return false;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return true;
    

                //: 
} catch(Exception& e) 
            {
this->logUtil->put(commonStrings->EXCEPTION, this, "hasNext", &e);
    


                            {
                            
                            }
                    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return false;
    
}

}


                //@Throws(Exception.constructor)
            
    auto LineReader::next() -> std::string{

        try {
            
    int32_t nextIndex = JavaString::indexOf(this->string, CommonSeps::getInstance()->NEW_LINE, index);;
    

                        if(nextIndex ==  -1)
                        
                                    {
                                    


                            throw Exception("next() should have been called first");
                    

                                    }
                                

    std::string temp = JavaString::substring(this->string, index, nextIndex);;
    
index= nextIndex +1;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return temp;
    

                //: 
} catch(Exception& e) 
            {
this->logUtil->put(commonStrings->EXCEPTION, this, "next", &e);
    


                            {
                            
                            }
                    



                            throw e;
                    
}

}




        #endif //ORG_ALLBINARY_LOGIC_IO_LINEREADER_CPP
