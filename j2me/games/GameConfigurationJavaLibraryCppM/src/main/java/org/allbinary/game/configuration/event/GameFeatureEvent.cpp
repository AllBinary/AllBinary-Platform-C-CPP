
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
        
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class GameFeatureEvent: public AllBinaryEventObject {

    private: std::string whatChanged;

public: GameFeatureEvent(Object* anyType, std::string whatChanged) : AllBinaryEventObject(anyType){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->whatChanged= whatChanged;
    
}


    public: std::string getWhatChanged(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->whatChanged;
    
}


    public: Object* getGameOption(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->getSource();;
    
}


};

            

