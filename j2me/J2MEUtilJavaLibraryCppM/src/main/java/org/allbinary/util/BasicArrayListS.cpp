
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
        



            #include "java/lang/IllegalArgumentException.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <org/allbinary/logic/NullUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "BasicArrayList.h"

class BasicArrayListS: public BasicArrayList {

public: BasicArrayListS(int32_t size) : BasicArrayList(NullUtil::getInstance().NULL_OBJECT_ARRAY){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    

                        if(size < 0)
                        
                                    {
                                    


                            throw IllegalArgumentException(StringMaker().append("Init Size Exception: ").appendint(size).toString());
                    

                                    }
                                
this->objectArray= std::vector<Object*>(size);
    
}


};

            

