
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
        
            #include "java/lang/Exception.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class Processor
            : public Object
         {

    private: static Processor* SINGLETON() { static std::unique_ptr<Processor> value(new Processor()); return value.get(); }

    public: static Processor* getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Processor::SINGLETON();
    
}


                //@Throws(Exception.constructor)
            
    public: void process(){
}


                //@Throws(Exception.constructor)
            
    public: void processt(int64_t timeDelta){
}


};

            

