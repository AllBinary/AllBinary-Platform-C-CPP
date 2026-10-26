
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
        
            #include "java/lang/Object.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <java/util/Enumeration.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "BasicArrayListD.h"
#include "BasicArrayList.h"
//ArkTs does not have this.  So this is for the ArkTs build.
class EnumerationUtil
            : public Object
         {

    private: static EnumerationUtil instance() { return EnumerationUtil(); }

    public: static EnumerationUtil getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return EnumerationUtil::instance();
    
}


    public: bool hasMoreElements(Enumeration<Object*> enumeration){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return enumeration.hasMoreElements();;
    
}


    public: Object* nextElement(Enumeration<Object*> enumeration){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return enumeration.nextElement();;
    
}


    public: std::vector<Object*> getAsArray(Enumeration<Object*> enumeration){

    BasicArrayList basicArrayList = BasicArrayListD();;
    

        while(this->hasMoreElements(enumeration))
        {
basicArrayList.add(this->nextElement(enumeration));
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return basicArrayList.toArray();;
    
}


};

            

