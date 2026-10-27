
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
        



            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/visual/dhtml/html/HtmlTag.h"

class HtmlTags
            : public Object
         {

    private: BasicArrayList* htmlTagVector;

public: HtmlTags(){
this->htmlTagVector= new BasicArrayListD();
    
}


    public: HtmlTag* get(int32_t index){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return dynamic_cast<HtmlTag*>(this->htmlTagVector->get(index));
    
}


    public: void add(HtmlTag* htmlTag){
this->htmlTagVector->add(htmlTag);
    
}


    public: int32_t size(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->htmlTagVector->size();;
    
}


};

            

