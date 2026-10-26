
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
        
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "DestroyableInterface.h"

class DestroyableBaseBehavior
            : public Object
        : public DestroyableInterface {

    private: static DestroyableBaseBehavior instance() { return DestroyableBaseBehavior(); }

    public: static DestroyableBaseBehavior getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return DestroyableBaseBehavior::instance();
    
}


    public: std::string getName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->constructor.name.toString();;
    
}


                //@Throws(Exception.constructor)
            
    public: bool isDestroyed(){



                            throw Exception(CommonStrings::getInstance().NOT_IMPLEMENTED);
                    
}


    public: void setDestroyed(bool destroyed){
}


};

            

