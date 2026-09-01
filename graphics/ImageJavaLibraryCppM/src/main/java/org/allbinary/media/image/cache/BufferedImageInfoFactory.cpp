
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
        
#include <java/util/HashMap.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "BufferedImageInfo.h"

class BufferedImageInfoFactory
            : public Object
         {

    private: static HashMap<any, any> hashMap = HashMap<any, any>();

    public: static BufferedImageInfo getInstance(int32_t width, int32_t height, int32_t type){

    StringMaker stringbuffer = StringMaker();;
    
stringbuffer.appendint(width);
    
stringbuffer.appendint(height);
    
stringbuffer.appendint(type);
    

    std::string key = stringbuffer.toString();;
    

    BufferedImageInfo bufferedImageInfo = BufferedImageInfoFactory::hashMap.get(key) as BufferedImageInfo;;
    

                        if(bufferedImageInfo == 
                                    nullptr
                                )
                        
                                    {
                                    bufferedImageInfo= BufferedImageInfo(width, height, type);
    
BufferedImageInfoFactory::hashMap.put(key, bufferedImageInfo);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return bufferedImageInfo;
    
}


private: BufferedImageInfoFactory(){
}


};

            

