
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
        
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/combat/destroy/DestroyableInterface.h"

class DestroyableBaseBehavior
            : public Object
        , public DestroyableInterface {

    private: static DestroyableBaseBehavior* instance() { static std::unique_ptr<DestroyableBaseBehavior> value(new DestroyableBaseBehavior()); return value.get(); }

    public: static DestroyableBaseBehavior* getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return DestroyableBaseBehavior::instance();
    
}


    public: std::string getName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->getClass()->getName();;
    
}


                //@Throws(Exception.constructor)
            
    public: bool isDestroyed(){



                            throw new Exception(CommonStrings::getInstance()->NOT_IMPLEMENTED);
                    
}


    public: void setDestroyed(bool destroyed){
}


};

            

