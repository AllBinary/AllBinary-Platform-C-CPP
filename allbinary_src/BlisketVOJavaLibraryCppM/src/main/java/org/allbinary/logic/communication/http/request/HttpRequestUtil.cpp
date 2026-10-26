
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
        



            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/logic/io/path/AbPathData.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class HttpRequestUtil
            : public Object
         {

    private: static HttpRequestUtil instance() { return HttpRequestUtil(); }

    public: static HttpRequestUtil getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return HttpRequestUtil::instance();
    
}


private: HttpRequestUtil(){
}


    public: int32_t getLastSeparatorIndex(std::string requestPath){

    int32_t beginIndex = requestPath.lastIndexOf(AbPathData::getInstance().SEPARATOR);;
    

                        if(beginIndex < 0)
                        
                                    {
                                    beginIndex= requestPath.lastIndexOf("\\");
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return beginIndex;
    
}


                //@Throws(Exception.constructor)
            
    public: std::string generateFileName(std::string requestPath){

    int32_t beginIndex = this->getLastSeparatorIndex(requestPath);;
    

                        if(beginIndex < 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return requestPath;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return requestPath.substring(beginIndex +1);;
    

                        }
                            
}


};

            

